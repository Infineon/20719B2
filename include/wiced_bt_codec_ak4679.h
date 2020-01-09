/*
 * Copyright 2020, Cypress Semiconductor Corporation or a subsidiary of
 * Cypress Semiconductor Corporation. All Rights Reserved.
 *
 * This software, including source code, documentation and related
 * materials ("Software"), is owned by Cypress Semiconductor Corporation
 * or one of its subsidiaries ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products. Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */

/** @file
 *
 * WICED AK4679 control driver
 */
#include "wiced.h"
#include "platform_audio_device.h"

#if WICED_AK4679_INCLUDED

/**
 * @addtogroup  wicedbt_ak4679          AK4679
 * @ingroup     wicedbt
 *
 * AK4679 codec support
 *
 * @{
 */

/**
 * Start DAC for audio Sink applications
 *
 * @param[in]       pdn_gpio : pin number connected to PDN
 * @param[in]       scl_i2c : pin number connected to SCL i2c control pin
 * @param[in]       sdl_i2c : pin number connected to SDA i2c control pin
 */
void wiced_bt_ak4679_init(uint32_t pdn_gpio, uint32_t scl_i2c, uint32_t sda_i2c);

/**
 * Start DAC for audio Sink applications
 *
 * @param[in]       sample_freq : Sample frequency in samples per second
 */
void wiced_bt_ak4679_start_dac(uint32_t sample_freq);

/**
 * Start ADC and DAC for hands free applications
 *
 * @param[in]       sample_freq : Sample frequency in samples per second
 */
void wiced_bt_ak4679_start_adc_and_dac(uint32_t sample_freq);

/**
 * Set codec sink configurations
 *
 * @param[in]       sink : sink device to which output has to be routed.
 */
void wiced_bt_ak4679_set_sink_device(platform_audio_io_device_t sink);

/**
 * Stop ADC and DAC.  Put in low power mode.
 */
void wiced_bt_ak4679_stop(void);

/**
 * Mute AK4679 DAC output
 *
 * @param[in]       dac_mute  : set to 1 to mute DAC, set to 0 to unmute
 */
void wiced_bt_ak4679_softmute_dac(uint8_t mute);

/**
 * Set DAC analog output gain for LINEOUT
 *
 * @param[in]       vol : analog volume out in dB, according to table in DS
 */
void wiced_bt_ak4679_set_line_out_volume(int8_t vol);

/**
 * Set mic gain
 *
 * @param[in]       left_vol : Set left ADC gain in dB. Gain Range is -6 to 24dB in 3 dB steps.
 *                  Odd values will be truncated.
 * @param[in]       right_vol : Set right ADC gain in dB. Gain Range is -6 to 24dB in 3 dB steps.
 *                  Odd values will be truncated.
 */
void wiced_bt_ak4679_set_mic_gain(int8_t left_vol, int8_t right_vol);

/**
 * Set digital output volume used by HP and LINEOUT
 *
 * @param[in]       left_vol : Set left ADC gain in dB. Gain Range is from -57.5dB to +6dB in steps of .5dB
 *                  NOTE: -58 == MUTE. See datasheet for conversion table
 * @param[in]       right_vol : Set right ADC gain in dB. Gain Range is from -57.5dB to +6dB in steps of .5dB
 *                  NOTE: -58 == MUTE. See datasheet for conversion table
 */
void wiced_bt_ak4679_set_output_volume(float left_vol, float right_vol);

/**
 * Set digital input volume used by ALC
 *
 * @param[in]       left_vol : Set left ADC gain in dB. Gain Range is from -54dB to +36dB in steps of .375dB
 *                  NOTE: -54.375 == MUTE. See datasheet for conversion table
 * @param[in]       right_vol : Set right ADC gain in dB. Gain Range is from -54dB to +36dB in steps of .375dB
 *                  NOTE: -54.375 == MUTE. See datasheet for conversion table
 */
void wiced_bt_ak4679_set_input_volume(float left_vol, float right_vol);

/**
 * Set HP port volume
 *
 * @param[in]       vol : Set HP gain in dB. Gain Range is -62dB to 6dB in 2dB steps.
 *                  Odd values will be truncated.
 */
void wiced_bt_ak4679_set_hp_volume(int8_t vol);

/**
 * Write script to the registers of the
 *
 * @param[in]       ak_reg_script : lenx2 array with register_addr in [x][0] and
 *                  corresponding reg_value in [x][1]
 * @param[in]       len : number of registers to write, size of array: [len][2]
 */
void wiced_bt_ak4679_write_reg_script( uint8_t ak_reg_script[][2], uint32_t len );


/** @} wicedbt_ak4679 */

#endif //WICED_AK4679_INCLUDED
