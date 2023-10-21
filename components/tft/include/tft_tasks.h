/*
 * tft_tasks.h
 *
 *  Created on: 01 Sep 2018
 *      Author: gal
 */

#ifndef TFT_TASKS_H_
#define TFT_TASKS_H_

#include <freertos/FreeRTOS.h>
#include <freertos/event_groups.h>
#include <freertos/queue.h>
#include <esp_log.h>
#include <hagl_hal.h>
#include <hagl.h>

// rotation defines
#define LANDSCAPE U8G2_R0
#define DEG90 U8G2_R1
#define DEG180 U8G2_R2
#define DEG270 U8G2_R3

extern hagl_backend_t *tft_display;

/** @brief Setup the oled screen
 * @param rotation - Set rotation
 * */
// void init_oled(const u8g2_cb_t *rotation);
void init_tft();

/** @brief deinitialize the oled screen
 * */

void deinit_tft(void);

/** @brief connecting waiting animation
 * */
void waiting_tft(void);

/** @brief connected graphic
 * */
void ble_connected_tft(void);

// /** @brief connected graphic
//  * */
// void ble_slave_tft(void);

/**
 * @brief
 *
 */
void wifi_connected_tft(char *ip_char);

/** @brief running tft task
 * */
void update_tft(void);

/** @brief Generate Splash Screen
 * */
void tftSplashScreen(void);

/** @brief Generate Berlin Dance
 * */
void berlinDance(void);

/** @brief Queue for sending layer to tft
 **/
extern QueueHandle_t layer_recieve_q;

/** @brief Queue for sending led status to tft
 **/
extern QueueHandle_t led_recieve_q;

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'DeepDeck.png'
 */

#define SPLASH_BMPWIDTH 128

#endif /* TFT_TASKS_H_ */
