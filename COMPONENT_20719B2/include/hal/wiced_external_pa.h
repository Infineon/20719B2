
/***************************************************************************//**
* \file <wiced_external_pa.h>
*
* Provides the API definitions for the External PA interface driver.
*
********************************************************************************
* \copyright
* Copyright 2016-2022, Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
*
* This software, including source code, documentation and related
* materials ("Software") is owned by Cypress Semiconductor Corporation
* or one of its affiliates ("Cypress") and is protected by and subject to
* worldwide patent protection (United States and foreign),
* United States copyright laws and international treaty provisions.
* Therefore, you may use this Software only as provided in the license
* agreement accompanying the software package from which you
* obtained this Software ("EULA").
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software
* source code solely for use in connection with Cypress's
* integrated circuit products.  Any reproduction, modification, translation,
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
*******************************************************************************/

#ifndef __WICED_EXTERNAL_PA_H__
#define __WICED_EXTERNAL_PA_H__

#include "wiced_result.h"
#include "wiced_hal_gpio.h"

/******************************************************************************
 * Global Data Structure definitions                                          *
 ******************************************************************************/
typedef enum
{
    EPA_MODE_OFF,                 /* CTX=0, CRX=0, CSD/BYP=0 */
    EPA_MODE_NORMAL,              /* Used with FEMs utilizing CTX/CRX mode control logic.
                                     When transmitting, CTX=1, CRX=0.
                                     When receiving CTX=0, CRX=1. */
    EPA_MODE_WITH_CSD,            /* Used with FEMs utilizing CTX/CSD signals for mode control logic.
                                     When transmitting, CTX=1, CSD=1.
                                     When receiving CTX=0, CSD=1.
                                     When in PDS sleep, CTX=0, CSD=0 */
    EPA_MODE_RX_ONLY,             /* CTX=0, CRX/CSD=1 */
    EPA_MODE_A2DP_ONLY,           /* Enabled for A2DP connection only in Normal mode,
                                     otherwise CTX=0, CRX=1. */
    EPA_MODE_A2DP_ONLY_WITH_BYP,  /* Used with FEMs utilizing CTX/CRX/BYP mode control logic.
                                     Enabled for A2DP connection only in Normal mode with BYP=0,
                                     otherwise CTX=0, CRX=0, BYP=1 . */
} wiced_hal_epa_mode_t;

/******************************************************************************
 * Global variables
 ******************************************************************************/
#define WICED_GPIO_NOT_USED    MAX_NUM_OF_GPIO

/******************************************************************************
* Function Name: wiced_external_pa_configure
***************************************************************************//**
* Normally the Front End Module (FEM) control signals would be defined in the
* platform_gpio_pins structure and the corresponding functions (WICED_EPA_CTX,
* WICED_EPA_CRX, and WICED_EPA_CSD) and are always enabled. The
* wiced_external_pa library provides application developers more dynamic
* control of the FEM control signals. The wiced_external_pa_configure api
* configures, enables, disables external power amplifier control logic signals
* CTX, CRX(if used), and CSD/BYP(if used). See wiced_hal_epa_mode_t definition
* for more details. Must use LHL gpios.
*
* \param[in] ctx_pin     : Tx control signal of external power amplifier.
* \param[in] crx_pin     : Rx control signal of external power amplifier if used.
*                          Use WICED_GPIO_NOT_USED if not used.
* \param[in] csd_byp_pin : CSD or BYP control signal of external power amplifier if used.
*                          Use WICED_GPIO_NOT_USED if not used.
*
* \return                : WICED_SUCCESS, WICED_ERROR
*
******************************************************************************/
wiced_result_t wiced_external_pa_configure( wiced_bt_gpio_numbers_t ctx_pin, wiced_bt_gpio_numbers_t crx_pin,
        wiced_bt_gpio_numbers_t csd_byp_pin, wiced_hal_epa_mode_t epa_mode );

#endif // __WICED_EXTERNAL_PA_H__
