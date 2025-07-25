/**
 * @file lv_draw_sw_letter.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "blend/lv_draw_sw_blend_private.h"
#include "../lv_draw_label_private.h"
#include "lv_draw_sw.h"
#if LV_USE_DRAW_SW

#include "../../display/lv_display.h"
#include "../../misc/lv_math.h"
#include "../../misc/lv_assert.h"
#include "../../misc/lv_area.h"
#include "../../misc/lv_style.h"
#include "../../font/lv_font.h"
#include "../../core/lv_refr_private.h"
#include "../../stdlib/lv_string.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void /* LV_ATTRIBUTE_FAST_MEM */ draw_letter_cb(lv_draw_task_t * t, lv_draw_glyph_dsc_t * glyph_draw_dsc,
                                                       lv_draw_fill_dsc_t * fill_draw_dsc, const lv_area_t * fill_area);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_draw_sw_label(lv_draw_task_t * t, const lv_draw_label_dsc_t * dsc, const lv_area_t * coords)
{
    if(dsc->opa <= LV_OPA_MIN) return;

    LV_PROFILER_BEGIN;
    lv_draw_label_iterate_characters(t, dsc, coords, draw_letter_cb);
    LV_PROFILER_END;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void LV_ATTRIBUTE_FAST_MEM draw_letter_cb(lv_draw_task_t * t, lv_draw_glyph_dsc_t * glyph_draw_dsc,
                                                 lv_draw_fill_dsc_t * fill_draw_dsc, const lv_area_t * fill_area)
{
    if(glyph_draw_dsc) {
        switch(glyph_draw_dsc->format) {
            case LV_FONT_GLYPH_FORMAT_NONE: {
#if LV_USE_FONT_PLACEHOLDER
                    /* Draw a placeholder rectangle*/
                    lv_draw_border_dsc_t border_draw_dsc;
                    lv_draw_border_dsc_init(&border_draw_dsc);
                    border_draw_dsc.opa = glyph_draw_dsc->opa;
                    border_draw_dsc.color = glyph_draw_dsc->color;
                    border_draw_dsc.width = 1;
                    lv_draw_sw_border(t, &border_draw_dsc, glyph_draw_dsc->bg_coords);
#endif
                }
                break;
            case LV_FONT_GLYPH_FORMAT_A1:
            case LV_FONT_GLYPH_FORMAT_A2:
            case LV_FONT_GLYPH_FORMAT_A4:
            case LV_FONT_GLYPH_FORMAT_A8: {
                    lv_area_t mask_area = *glyph_draw_dsc->letter_coords;
                    mask_area.x2 = mask_area.x1 + lv_draw_buf_width_to_stride(lv_area_get_width(&mask_area), LV_COLOR_FORMAT_A8) - 1;
                    lv_draw_sw_blend_dsc_t blend_dsc;
                    lv_memzero(&blend_dsc, sizeof(blend_dsc));
                    blend_dsc.color = glyph_draw_dsc->color;
                    blend_dsc.opa = glyph_draw_dsc->opa;
                    lv_draw_buf_t * draw_buf = glyph_draw_dsc->glyph_data;
                    blend_dsc.mask_buf = draw_buf->data;
                    blend_dsc.mask_area = &mask_area;
                    blend_dsc.mask_stride = draw_buf->header.stride;
                    blend_dsc.blend_area = glyph_draw_dsc->letter_coords;
                    blend_dsc.mask_res = LV_DRAW_SW_MASK_RES_CHANGED;

                    lv_draw_sw_blend(t, &blend_dsc);
                }
                break;
            case LV_FONT_GLYPH_FORMAT_IMAGE: {
#if LV_USE_IMGFONT
                    lv_draw_image_dsc_t img_dsc;
                    lv_draw_image_dsc_init(&img_dsc);
                    img_dsc.rotation = 0;
                    img_dsc.scale_x = LV_SCALE_NONE;
                    img_dsc.scale_y = LV_SCALE_NONE;
                    img_dsc.opa = glyph_draw_dsc->opa;
                    img_dsc.src = glyph_draw_dsc->glyph_data;
                    lv_draw_sw_image(t, &img_dsc, glyph_draw_dsc->letter_coords);
#endif
                }
                break;
            default:
                break;
        }

    }

    if(fill_draw_dsc && fill_area) {
        lv_draw_sw_fill(t, fill_draw_dsc, fill_area);
    }
}

#endif /*LV_USE_DRAW_SW*/
