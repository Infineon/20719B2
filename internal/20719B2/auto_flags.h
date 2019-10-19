/*
 * Automatically generated by make menuconfig: don't edit
 */
#ifndef AUTOCONF_INCLUDED
#define AUTOCONF_INCLUDED

/*
 * Environment
 */
#define TAPEOUT_SCRIPT "./UnixForTapeout"
#undef  CONFIG_FEEDBACK
#undef  IS_FLASH_BUILD

/*
 * Board specific configuration
 */
#define RTOS_THREADX 1
#define TOOLCHAIN_wiced 1
#undef  COMBO_CHIP
#define ASIC 1
#define ASIC_BD_2045 1
#undef  COMPILER_GHS
#define COMPILER_ARM 1
#undef  COMPILER_GNU
#define CPU_CLOCK_SPEED 24
#define LPRF_PROD_HW_VALUE 5
#define CPU_NUM_CORES 1
#define ASIC_NO_LPO_DEFAULT_XTAL_KHZ 24000
#define ASIC_BD_2045 1
#undef  ENABLE_ASSERT
#undef  ARM7
#undef  CM3
#define CM4 1
#define CPU_CM4 1
#define FPU_FPV4_SP 1
#undef  RTOS_TX_ARM7
#undef  RTOS_TX_ARM7RV
#define RTOS_TX_CM4 1
#undef  RTOS_TX_CM3
#undef  RTOS_TX_CM0
#undef  RTOS_UCLINUX
#undef  RTOS_TX_CM4_VER_5_6
#define RTOS_TX_CM4_VER_5_8 1
#undef  WDOG_DISABLED
#undef  MPU_ENABLED
#define CSA_THREAD 1
#define CSA_THR_SS_DW 1
#undef  EXCLUDE_CSA_THREAD
#define BIST 1
#undef  FTD_ENABLE
#undef  COMPONENT_DLNA
#undef  COMPONENT_DLNA_EPA_BYPASS
#undef  COMPONENT_DLNA_ELNA
#undef  COMPONENT_DLNA_ELNA_EPA_BYPASS
#undef  BRD_4357B0
#undef  BRD_4361B0
#undef  BRD_4369A0_FCBGA
#undef  BRD_4369A0_ANT0
#define TX_POWER_LEVEL 4

/*
 * Debug
 */
#undef  CO_SIM
#define DEBUG_FRAMEWORK 1
#define TRACE_COMPILE_LEVEL 1
#define DBFW_CONFIG_DEFAULT_TRACE_MODE 0
#define DBFW_ASSERT_N_ERROR_ENABLE 1
#undef  DEBUG_FRAMEWORK_OTA
#undef  PROFILE_CPU_MEM
#undef  PROFILE_ON
#define DEBUG_UART 1
#define BT_DEBUG_UART_ENABLE 1
#undef  DUP_ENABLED
#undef  DEBUG_GPIO
#undef  WAIT_FOR_JTAG_ATTACH

/*
 * Boot options
 */
#define BOOTCHECK 1
#define FLL_B 1
#undef  FLL2_ENABLED
#define NEW_CLOCKING_ARCHITECTURE_2076 1
#define EXTERNAL_LPO_ABSENT 1
#undef  EXTERNAL_LPO_REQUIRED
#define MAX_NUM_OF_US_FOR_LPO_TO_SETTLE 200
#undef  GCI_OTP
#undef  BYPASS_GCI_OTP_FABID_THRU_HOSTWAKE
#undef  FAST_BOOT
#undef  WLAN_BRIDGE_OTP
#define CPU_INTERFACE_OTP 1
#define OTP_SIZE 2048
#define OTP_CI_FW_OFFSET 36
#define SUPPORT_DRIVER_INTERRUPTS 1
#define SUPPORT_PERIPHERAL_UART_HID_INTERRUPT 1
#define SUPPORT_IR_TX_INTERRUPT 1
#define SUPPORT_IR_RX_INTERRUPT 1
#define SUPPORT_LHL_INTERRUPT 1
#define SUPPORT_KEYSCAN_INTERRUPT 1
#define SUPPORT_QUADRATURE_INTERRUPT 1
#define ENHANCED_LHL_LPO_SUPPORTED 1
#undef  ENHANCED_COMBO_LHL_LPO_SUPPORTED
#define CHECK_AUTOBAUD_PRIOR_TO_CONFIG_OR_STRAP 1
#define USE_LHL_CLK_SEL 1
#undef  HW_DISABLE_OUTPUT_PULLS

/*
 * Bluetooth Configuration
 */

/*
 * Advanced Audio configuration
 */
#define AA_THREAD_ENABLED 1
#define HIFI_SUPPRESS_GLITCH 1
#define PLC_LC_ENABLED 1
#define CVSD_UPDATE_MODULE 1
#define BEC_PLC_ENABLED 1
#undef  HW_CVSD_NFBC
#undef  DELAY_NUM_COMPLETE_PACKET
#define AA_RXEQ 1
#define AA_RXVOL 1
#undef  MULTI_AV_ENABLE
#define CONTENT_PROTECTION_ENABLE 1
#undef  REPEATER_FUNCTIONALITY
#undef  FW_BASED_NBS
#define AA_WBS_SBC 1
#define CONFIG_M_SBC 1
#define WPLC_BEC_0 1
#define AA_RX_LOG 1
#define NB_WBS 1
#define WBS_MULTI 1
#define LE_AUDIO_OFFLOADING 1
#define LE_AUDIO_VS_CODEC 1
#define LE_AUDIO_VS_CODEC_LIB1 1
#define LE_AUDIO_VS_CODEC_LIB1_VER 2
#undef  LE_AUDIO_VS_CODEC_LIB1_OBJ
#define BEC_CRC 1
#define SCO_AUD_HOOK 1
#define I2S_AUD_INJECT_ENABLE 1
#undef  ARC_CMD_ENABLE
#define AUD_FM_PLL_XTAL_MODE 1
#undef  LP_MODE_PLAYBACK
#define AUDIO_ROUTE_IP 1
#undef  ARIP_SUPPORTS_FM
#undef  ARIP_LMT_MODE
#undef  LP_MODE_PLAYBACK
#define AUDIO_CODEC_LT_CONTROL 1
#define SBC_LITESTACK_API 1
#define LITE_HOST 1
#undef  CONFIG_SUPPRESS_POPNOISE
#define CONFIG_BURST_MODE 1
#undef  ARIP_OLD_MPX_SELECTION_HW_IMPLEMENTATION
#define AUDIO_BYTE_POOL_SIZE 0
#undef  CONFIG_EQUALIZER
#undef  LITE_HOST_AAC_PACKETS
#undef  CONFIG_AAC_PLUS_DEC
#undef  CONFIG_AAC_PLUS_DEC_LIBRARY
#undef  CONFIG_MP2_2_5_DEC
#define CONFIG_MP3_DEC 1
#define IPQF_32BIT 1
#define CONFIG_BRCM_MP3_DEC_LICENSED_VER 1
#undef  CONFIG_MP3_DEC_LIBRARY
#undef  CONFIG_MP3_ENC
#undef  CONFIG_MP3_ENC_LIBRARY
#undef  CONFIG_PCM_ENC
#undef  CONFIG_OPUS_ENC
#define CONFIG_EXT_CODEC 1
#define CONFIG_CELT_ENC 1
#define CONFIG_CELT_DEC 1
#define CONFIG_CELT_SUPPORT_PLC_OVER_A2DP 1
#define CONFIG_CY_OPUS_CELT 1
#undef  PACKETIZED_AUDIO_OVER_I2S
#undef  PACKETIZED_AUDIO_OVER_I2S_PATTERN_GEN
#define CONFIG_ITTIAM_AAC_LC 1
#define ENABLE_BT_A2DP_SINK_ROLE 1
#undef  TEST_A2DP_SINK_SBC_CODEC
#define NEW_DIVXN_EQN 1
#define LOWER_DATA_RATES 1
#define CHANGED_PAD_CFGS 1
#undef  REF_CLK_37400_KHZ
#define AVOID_XTRA_COPY_BY_DMA_DIRECT_TO_BURST_MEM 1
#define ENABLE_USE_ACL_BUF_BURST_MEMORY 1
#define AUDIO_DAC_160MS_DELAY 1
#define HW_SOFT_MUTE_FEATURE_ENABLED 1
#define MAX_NUMBER_BREAKS_JITTER_BUFFER 50
#define PLC_MA_ENABLED 1
#define PLC_MA_REG_RX_BLOCK_SEL_BDR_CONFIG_ENABLE 1
#define PROGRAM_AUDIO_DAC_USING_CLOCK_FROM_IFPLL 1
#undef  INTERNET_RADIO
#undef  ARC_CMD_ENABLE
#undef  USE_OTP_TO_ENABLE_FEATURES
#undef  USE_OTP_BRIDGE_TO_ENABLE_FEATURES
#undef  ENABLE_SBRDECODER
#define ENABLE_REAL_SYNC_STEREO 1
#define ARIP_ADVANCED_FEATURES 1
#undef  NBS_16KHZ_SRC_SUPPORT
#undef  TSRS_LIB

/*
 * Bluetooth baseband and LMP
 */
#define BLUETOOTH 1
#define BT_ENABLE 1
#undef  PAGE_CLOCK_OFFSET_ENABLED
#undef  ONE_SLOT_ACL_PACKET_ONLY
#undef  BB_XTAL_CTRL
#undef  CONDSCAN_2046B0RF
#undef  PKT_RX_MAX_SLOT_CTL
#undef  ADV_BT_CLK
#undef  DISABLE_EDR_PICKY_CHECK
#undef  PICKY_THRESHOLD_DEBUG
#define INQ_ENABLED 1
#define BCS_TIMELINE 1
#define BCS_DMA_SEPARATE_RX_TX_ADR 1
#define CONNECTIONLESS_RX_TX_TESTS 1
#define PCM_LOOPBACK_DELAY_INSERTED 1
#define BPCS 1
#define APU_1AU_HW_SUPPORT 1
#define NEW_EDR_PICKY_THRESHOLDS 1
#undef  ANT_DS
#define ANT_NEW_LIB 1
#define EDR_ENABLE 1
#define RF_REG_ADRS_32BIT 1
#define NEW_RF_DESIGN_2009 1
#define HW_SNAP_CLK_ON_RX_DONE 1
#define LMP_POW_CTRL_WA_207X9_BB 1
#define BT4_1_BT_FEATURES 1
#define BT_PCA 1
#define SECURE_CONNECTIONS 1
#undef  BT_AES_CTRL_REG_HW_WA
#define FIXED_POINT_WINDOW_METHOD 1
#define CONNECTIONLESS_BROADCAST 1
#undef  EIR_HANDSHAKE_MASTER
#undef  EIR_HANDSHAKE_SLAVE
#undef  DEDICATED_3D_HARDWARE
#undef  TV2TV_SYNC_3D
#undef  SS_3DPC
#undef  BCM20702_TV_FEATURE_SUPPORT
#undef  MCAST_IND_POLL_MASTER
#define CSB_STREAMER 1
#define PAGE_INQUIRY_TX_SUPPRESSION 1
#undef  IEEE802_15DOT4
#define MICRO_BCS 1
#define MICRO_BCS_ADV_FILTER 1
#define BCS_SLAVE_PICONET_MUXING 1
#undef  INQUIRY_CLOCK_OFFSET
#define SNIFF_NOTIF_ENABLE 1
#define BCS_ALARM_TASK_ENABLE 1
#undef  SUPER_PICONET
#undef  ZERO_RETRAN
#undef  HYBRID_SNIFF
#define SAM 1
#define OVERRIDE_MASTER_BDADDR_SUPPORT 1
#define LR_AUDIO_CYNC 1
#define LR_AUDIO_CYNC_DIAGSTATS_OUTPUT 1
#undef  OLYMPIC_DISCONN_FLOW_TIMEOUT
#undef  OLYMPIC_LMP
#undef  MCMP
#define BT5_1_BT_FEATURES 1
#define BT_MINOR_FUNCTIONAL_ENHANCEMENTS_1 1
#define BT_MFE_1_MEP_19_PREFER_FLOW_SPEC_EVENT 1
#undef  EXPANDED_BT_SCHEDULER

/*
 * LLR Enable -- depends on TBFC
 */

/*
 * Test configuration (Bluetooth Confuration->Bluetooth baseband and LMP->Test configuration)
 */
#define BTM_MASTER_MODE 1
#undef  BQB
#define BER_TEST_MASTER 1
#undef  VCS_SIM_ENABLED
#undef  IOPTEST
#undef  PACKET_ERROR_INSERTION
#define BQB_TESTER 1

/*
 * Connection and memory configuration (Bluetooth Confuration->Bluetooth baseband and LMP-> Connection and memory configuration)
 */
#define BT_ACL_HOST_CLAIM_HOST_TO_DEVICE_DEFAULT_SIZE 1021
#define BT_ACL_HOST_CLAIM_HOST_TO_DEVICE_DEFAULT_COUNT 8
#define BT_ACL_HOST_TO_DEVICE_DEFAULT_SIZE 1092
#define BT_ACL_HOST_TO_DEVICE_DEFAULT_COUNT 16
#define BT_ACL_DEVICE_TO_HOST_DEFAULT_SIZE 1068
#define BT_ACL_DEVICE_TO_HOST_DEFAULT_COUNT 4
#define BT_BLE_HOST_CLAIM_HOST_TO_DEVICE_DEFAULT_SIZE 251
#define BT_BLE_DEVICE_CLAIM_DEVICE_TO_HOST_DEFAULT_SIZE 251
#define BT_BLE_HOST_CLAIM_HOST_TO_DEVICE_DEFAULT_COUNT 15
#define BT_BLE_HOST_TO_DEVICE_DEFAULT_COUNT 15
#define BT_BLE_DEVICE_TO_HOST_DEFAULT_COUNT 15
#define ULP_MAX_CONNECTION 15
#undef  CUSTOMIZE_CONFIG_PICO
#undef  CUSTOMIZE_CONFIG_SCO
#undef  CUSTOMIZE_CONFIG_NAME_LENGTH

/*
 * Optional features (Bluetooth Configuration->Bluetoothe baseband and LMP->Optional features)
 */
#undef  HOLD_MODE
#undef  PARK_STATE
#undef  MTBSCAN_ENABLE
#undef  IT_MANAGER
#undef  COND_SCAN
#define SCO_ENABLE 1
#define APU_1AU_HW_SUPPORT 1
#define APU_PACKMODE_PERSCOCH 1
#define VAD_ENABLE 1
#undef  SRI_RSSI_SCAN
#define SOFT_PICKY 1
#define SCO_OVER_TRANS 1
#define LM_DEFERRED_ACTION 1
#define PROXIMITY 1
#undef  ALERT_BR_EDR_RSSI_OVER_ULP_VSC
#undef  TBFC
#define MLSE 1
#define MLSE_LE 1
#undef  USE_NEW_LE_MLSE_REGISTER_BIT
#undef  MLSE_LE_2M
#undef  HARQ
#undef  ITON
#undef  MERCURY
#undef  RAPOO
#define LM_TIMESTAMP_SUPPORT 1
#define LM_HIGHACCURACY_TIMESTAMP_SUPPORT 1
#define LM_LINK_COUPLING_SUPPORT 1
#define LM_LINK_COUPLING_MAX_ITEMS 1
#undef  AFH_RSSI_FW_SCAN
#undef  MICROSOFT_VSC_SUPPORT
#undef  NINTENDO_2042_WRONG_AFH_CH_MAP_WA
#define RM_PAUSE_SUPPORT 1

/*
 * Hardware workarounds
 */
#undef  CONFIG_RSSI_WORKAROUND
#define MULTI_SLOT_ECO_ENABLED 1
#define END_OF_PKT_COUNTER_FIX 1
#define NEW_NATIVE_CLK_REALIGN_SCHEME 1
#define NATIVE_LOAD_IMMEDIATE_SCHEME 1
#define NCLK_CTL_313_SNAP_STATUS 1
#define HW_SYNC_CNT 1
#define HW_DOUBLE_PCX_SNAP 1
#undef  HWWA_312_PHASE_ADJUSTMENT
#define BCS_GFSK_TRACKING_HW_FIX 1
#define BCS_ENABLE_GFSK_TRACKING_AFTER_HEC 1

/*
 * ULP configuration (Bluetooth Configuration->ULP configuration)
 */
#define ULP_ENABLE 1
#define BT4_1_BLE_FEATURES 1
#define LE_PING 1
#define BLE_LINK_LAYER_TOPOLOGY 1
#define BT4_2_BLE_FEATURES 1
#define LE_SECURE_CONNECTIONS 1
#define LE_ENHANCED_PRIVACY_1_DOT_2 1
#define LE_DATA_PACKET_LEN_EXTENSION 1
#define BT5_0_BLE_FEATURES 1
#undef  LE_ADV_EXT
#undef  LE_ADV_ISO
#undef  LE_ADV_EXT_HW
#undef  LE_ADV_EXT_DEBUG
#define LE_CHANNEL_SELECT_2 1
#define BT5_1_BLE_FEATURES 1
#define LE_ADV_CHAN_INDEX_RANDOMIZATION 1
#define LE_MINOR_FUNCTIONAL_ENHANCEMENTS_1 1
#define LE_MFE_1_MEP_8_ALLOW_UNNECESSARY_ADV_DATA 1
#define LE_MFE_1_MEP_16_INC_ADI_IN_AUX_SCN_RSP 1
#define LE_MFE_1_MEP_17_RANDOM_ADDR_CHANGE 1
#define LE_MFE_1_MEP_12_SCA_UPDATE 1
#undef  LE_PAST
#undef  LE_PAST_SENDER
#undef  LE_PAST_RECEIVER
#undef  LE_CONTROL_LEN_EXT
#define LE_CS_FEATURE_RESOLVE_ADDRESS_WHITELIST 1
#undef  LE_RPA_REFRESH_BLOCKING
#define LE_DATA_PACKET_LEN_EXTENSION_PKT_CONCATENATION 1
#define LE_MAX_LE_PKT_LENGTH_EXTENSION 1
#define LE_HW_SUPPORT_PKT_LENGTH_EXTENSION 1
#define LE_2M_MODE_ENABLE 1
#define LE_2M_MODE_HW_SUPPORT_ASYMMETRIC 1
#undef  LE_LR_ENABLE
#define BT4_3_BLE_FEATURES 1
#define LE_HW_SUPPORT_PROGRAMMABLE_PREAMBLE_ACCESS_CODE 1
#undef  ULP_TEST
#define BLE_HW_WHITELIST_SIZE 128
#define BLE_ADV_REPORTING_CFG 1
#undef  BLE_SLAVE_ONLY_ADDRESS_RESOLUTION
#undef  LE_CS_NEW_OLYMPIC_FILTERING
#define LE_CS_FEATURE_AUDIO 1
#define LE_CS_FEATURE_AUDIO_RX 1
#define LE_CS_FEATURE_AUDIO_TX 1
#define LE_CS_FEATURE_SLAVE_AUDIO_TX 1
#define LE_CS_FEATURE_AUDIO_FW_ENC 1
#define LE_BRCM_AUDIO 1
#undef  LE_BRCM_AUDIO_DEBUG
#define LE_AUDIO_RX_PKT_STATUS_ENHANCEMENTS 1
#undef  LE_ROLE_SWITCH
#undef  LE_HIBERNATE_FEATURE
#define LE_RANDOM_ADDRESS_CHANGE_NOTIFICATION 1
#define LE_MASTER_AUTO_POLLING 1
#define LE_NEW_INTERVAL_ALG 1
#define LE_SCAN_INIT_COMBO 1
#define LE_CS_FEATURE_UNTETHERED_RF_TEST 1
#undef  LE_CS_FEATURE_UNTETHERED_RF_TEST_ENABLE_TESTER
#define ULP_VSC_MONITOR_RSSI_4_PROXIMITY 1
#define MONITOR_RSSI_4_PROXIMITY_LIST_DEFAULT_SIZE 32
#define ULP_VSC_REPORT_DIRECT_ADV 1
#undef  ULP_VSC_SENSOR_GOES_AWAY
#undef  ULP_VSC_TARGET_ADDRESS_CONNECT
#define LQ_STATS 1
#define LE_CRC_FILTER 1
#define LE_CRC_FILTER_ENHANCEMENT 1
#define LE_FW_CRC_TEST 1
#define LE_ADV_PCF 1
#define LE_ADV_PCF_UUID_128_SUPPORT 1
#define LE_ADV_PCF_UUID_32_SUPPORT 1
#define LE_ADV_PCF_PARTIAL_STRING_MATCH 1
#define HWWA_LE_CRC_FILTER_BAD_ENTRIES 1
#define HWWA_LE_ENABLE_RESYNC_WA 1
#define HWWA_LE_HWWA_HW_FILTER_OUT_DIRECT_ADV 1
#define HWWA_LE_RESYNC_DOESNT_RESTORE_CLOCK 1
#define HWWA_ADV_NEED_TO_CHECK_TARGET_ADDRESS 1
#define HWWA_WIB_TIME_OFFSET 1
#undef  HWWA_LE_TXBUF1_WRONG_PKTLEN
#define HWWA_WHITE_LIST_RETENTION_PROBLEM 1
#undef  HWWA_LE_SLAVE_TXFSM_CUT_OFF
#undef  HWWA_LE_LR_PREAMBLE_SET_TO_AA
#undef  HWWA_LE_CRC_UNAVAILABLE
#define LE_CRC_HW_FORMAT 3
#undef  HWWA_SCAN_REQ_RANDOM_ADV_ADDRESS_BIT_NOT_SET
#define LE_AUDIO_MAX_PKT_SIZE 60
#define WIB_AA_ADR_IN_FIFO 1
#define RSSI_MONITORING_ALERT_WITH_RSSI 1
#define HW_SUPPORT_LE_DRIFT_PREDICTION 1
#define ENHANCED_ADV_REPORT 1
#define BT_CONNECT_ASSIST 1
#define LE_MULTI_ADV_ENABLE 1
#define LE_MULTI_ADV_MAX_NUM_INSTANCES 16
#define LE_ADV_FIRMWARE_HOPPING 1
#undef  LE_OLYMPIC_EXTENDED_ADV_ENABLE
#undef  LE_60DBM_ADV_TXPWR
#undef  OLYMPIC_TRANSPORT_SWITCHING
#define LE_ANDROID_FEATURES 1
#define LE_BRCM_ADV_PCF 1
#define LE_BATCH_SCAN_ENABLE 1
#define LE_ON_FOUND_ON_LOST_ENABLE 1
#define LE_ANDROID_BT_ENERGY_INFO_SUPPORT 1
#define LE_EXTENDED_SCAN_INTERVAL 1
#undef  LE_ANDROID_BT_GET_DEBUG_INFO
#undef  OWN_ADDR_TYPE_OVERRIDE
#undef  LE_TIME_SYNC
#undef  LE_META3_VSC
#define LE_ADV_PKT_TX_NOTIFICATION 1
#undef  LE_BTSYNC_ENABLE
#undef  ENABLE_LE_DIRTY_TX_TEST
#undef  LE_USE_FLOWCONTROL_DMA
#undef  ANT_RFINFO_REPORT

/*
 * HCI Configuration
 */
#define ED_REPORTING 1
#define HCI_VS_EVENT_MASK 1
#define REMOTE_HCI_CTL 1
#undef  EXCLUDE_INSTALL_PATCHES
#undef  HCI_CS_N
#undef  ENABLE_LDO_LOAD_CURRENT_MEASUREMENT
#define ENHANCED_SYNCH_CONN_HCI 1
#define OLYMPIC_SETTINGS_VSC 1
#define CONNECTIONLESS_BT_LOOPBACK_TEST_SUPPORT_DUT 1
#undef  CONNECTIONLESS_BT_LOOPBACK_TEST_SUPPORT_TESTER
#undef  READ_FW_INFO
#undef  STORE_OLYMPIC_FACTORY_CAL_DATA_IN_SF
#undef  SMARTMESH_NO_MPAF
#undef  RSSI_OFFSET_MEASUREMENT
#undef  HCI_STORED_LINK_KEY_CMDS_DISABLED
#undef  HCI_MIC_ERROR_INJECTION
#undef  PCM_SPEECH_BAND_SWITCHING
#undef  SUPPORT_2_STOP_BIT
#undef  HOST_PCM_CLK_CTRL

/*
 * Bluetooth Coexistance configuration
 */
#define COEX_ENABLE 1
#define COEX_3WIRE_SUPPORT 1
#define COEX_CONFIG_SAMPLE_RX 1
#undef  COEX_4WIRE_5WIRE_SUPPORT
#define ECSI_ENABLE 1
#define COEX_GCI 1
#undef  CONFIG_ECI_PARALLEL_48BITS
#undef  CONFIG_ECI_SERIAL_HW
#define LTE_COEX_ENABLE 1
#define LTE_COEX_LTE_FRAME_SYNC 1
#undef  LTE_COEX_WIMAX_FRAME_SYNC
#undef  COEX_GCI_VT
#undef  COEX_NFC_FM
#undef  BTCX_PREDICTION_FRAMEWORK

/*
 * hardware configuration (Bluetooth Configuration->Hardware Configuration)
 */
#define HW_TIMER_CLK_1MHZ 1
#define RADIO_40NM 1
#undef  SIMULATED_INDIRECT_ACCESS_RF_REGS
#undef  INDIRECT_ACCESS_RF_REGS
#define PA_CONTROL 16
#define CLASS_1_5_TX_POWER_SUPPORT 1
#define RF_REG_MULTI_BANK 1
#define ASIC_CLOCK_FREQ_MAX_MHZ 96
#undef  SET_CLOCK_FREQ_PAUSE_MODE_MHZ
#undef  PAPD_ENABLE
#define RFP_TUNE_ENABLE 1
#undef  MULTI_PT_RSSI_CAL
#define TCA_ENABLE 1
#define BCS_TCA_ENABLE 1
#define ENABLE_TCA_FOR_MICRO_BCS 1
#define FLEX_TCA 1
#define TX_POWER_SWEEP 1
#define FACTORY_CALIBRATION 1
#define FD300KHZ_PERHANDLE 1
#define LE_CONT_SET_CARRIER_FREQ 1
#undef  OLYMPIC_RF_TUNING
#undef  TEMPEST_FILTERING_ENABLE
#define RSSI_BY_FW 1
#define RSSI_FRAC_SUPPORT 1
#undef  FW_RSSI_ALG
#undef  FACTORY_RSSI_CAL_ALG
#define FW_RSSI_ALG_DEFAULT 0
#undef  LO_IQ_CAL_ALG_V1_12
#undef  ROW_TX_PWR_CAL
#undef  NEW_TCA_TABLES
#undef  ENABLE_LE2_TCA_TABLE
#undef  ENABLE_ZIGBEE_TCA_TABLE
#define ENABLE_HIERARCHICAL_HW_SETUP_IN_RFTUNE 1
#undef  TSSI_CAL_9BIN
#undef  TSSICAL_AVAILABLE_TXMODE_20DBM
#undef  SUPPORT_MTP
#undef  RFP_PMU_CAL
#undef  BPF_CAL
#undef  VBAT_MONITOR
#undef  RCAL_OVER_TEMPERATURE

/*
 * Misc Configuration
 */
#define CRC_BY_TABLE 1
#undef  USE_CALL_STACK_FOR_SHA1
#undef  MM_BLOCK_CATEGORY_CUST
#undef  CONFIG_EXPLICIT_PATCH_ADDR
#undef  RSSI_HISTORY_ENABLE
#undef  FACTORY_RSSI_CAL_V3
#undef  LOCAL_NAME_OVERRIDE
#undef  REMOTE_ON_OFF

/*
 * Transport (Bluetooth Configuration->Transport)
 */
#define MULTI_FAB_ID 1
#undef  NO_TRANSPORT
#define NON_BLOCKING_TRAN_DETECT 1
#define CLK_GATE_CONTROL 1
#undef  TRANSPORT_CLK_CTRL_VER2
#undef  BT_SPI
#define BT_UART 1

/*
 * UART Configuration (Bluetooth Configuration->Transport->UART Configuration)
 */
#define BT_UART_PERIPHERAL_INDEX 0
#define PTU_UART 1
#undef  TRAN_UART_DUAL_STACK
#undef  BT_UART_H5
#undef  TRAN_UART_H4DS
#undef  UART_H4PLUS
#define UART_CLK_CTL_SUPPORT 1
#undef  UART_TPORT_CLK_SWITCH_HW_ENHANCEMENT
#undef  UART_TPORT_CLK_SEPARATE_WITH_DB_UART_AND_SPI
#undef  TRAN_UART_H4IBSS
#undef  DEBUG_UART_STAT
#undef  UART_TRANSPORT_ONLY
#define UART_SWD_AUTODETECT 1
#define UART_TX_FIFO_SIZE_BYTES 1039
#undef  TRANSPORT_UART_NOFLOWCTRL
#undef  PERIPHERAL_UART
#define UART_FLEX_RECEIVE_LENGTH 1
#undef  TRAN_UART_H4_IBSS_2
#undef  BT_USB
#undef  BT_SDIO
#undef  BT_SLIMBUS

/*
 * BT LE Over WLAN (BLOW) configuration, this option depends on TBFC.
 */

/*
 * Sensor Hub Tunnel configuration
 */
#undef  SENSOR_HUB_TUNNEL
#undef  SENSOR_HUB_INTERFACE
#undef  BT_COMPILATION_OPTIMIZE_FOR_SPACE

/*
 * Application Framework
 */
#define BT_MPAF_CORE 1
#define MPAF_CFA 1
#define MPAF_ENABLE 1
#define TRANSQ_ENABLE 1
#define MPAF_CFA 1
#define MPAF_BT_STACK_ENABLE 1
#define MPAF_AON_DRIVER_ENABLE 1
#define KEYSTUCK_ALLOW_SLEEP_SUPPORTED 1
#undef  MPAF_SIG_LE_MESH_LIB_ENABLE
#define MPAF_PROTOBUF_LIB_ENABLE 1
#define MPAF_KEEP_CODE_ENABLE 1

/*
 * ZigBee Stack Features (Application Framework)
 */
#undef  MPAF_ZIGBEE
#undef  ZB_APP_GPIO

/*
 *       Applications
 */
#define WICED_ENABLE 1
#define WICED_ADC 1
#define WICED_SPI 1
//#undef  WICED_BT_TRACE_ENABLE
#undef  WICED_SHIM_ENABLE
#undef  WICED_BT_FLOOD_MESH_ENABLE
#undef  WICED_BT_FLOOD_MESH_APP_ENABLE
#undef  WICED_BT_BLOOD_PRESSURE_MONITOR_ENABLE
#undef  WICED_BT_HEART_RATE_MONITOR_ENABLE
#undef  WICED_BT_HELLO_SENSOR_ENABLE
#undef  WICED_BT_LEAPP_ENABLE
#undef  WICED_BT_LEAPP_KB_ENABLE
#undef  WICED_BT_LEAPP_REMOTE_ENABLE
#undef  WICED_BT_SPP_ENABLE
#undef  WICED_BT_HCI_AV_SOURCE_ENABLE
#undef  WICED_BT_HCI_HANDSFREE_PLUS_ENABLE
#undef  WICED_BT_WICED_PTS_TEST_APP_ENABLE
#undef  WICED_BT_WATCH_ENABLE
#undef  WICED_BT_A2DP_SINK_ENABLE
#undef  WICED_BT_HANDSFREE_ENABLE
#define WICED_BT_HOMEKIT_ENABLE 1
#define WICED_SMART_READY 1
#undef  WICED_BTLE_HOMEKIT_LIGHTBULB_ENABLE
#undef  WICED_I154APP_ENABLE
#define ADC_AUDIO_SUPPORT 1
#define ADC_AUDIO_2_CHANNEL_SUPPORT 1
#define PDM_SUPPORT 1
#undef  ENABLE_ADC_AUDIO_ENHANCEMENTS

/*
 * Foundation
 */

/*
 * HAL Configuration (Foundation->HAL Configuration)
 */
#define GPIO_NUMBER_OF_PORTS 3
#define GPIO_NUMBER_OF_PINS 40
#define GPIO_MAX_PINS_PER_PORT 16
#undef  DRIVERS_20703_ENABLE
#undef  DRIVERS_20735_ENABLE
#define DRIVERS_20721_ENABLE 1
#undef  CAPSCAN_ENABLE
#undef  DRIVER_TEST_ENABLE
#undef  DRIVERS_THERMAL_ENABLE
#define I2C_SLAVE 1
#define PUART 1
#define DMA_ENABLED 1
#define UART_HW_DEFECT_IGNORES_DMA_AEMODE_AFMODE 1
#define MERGED_DMA_SRAM_MEM_AREAS 1
#undef  CONFIG_NO_TRANSPORT_DMA
#define CPU_DMA_PAUSE_CLK 0x8
#define DMA_NUM_CHANNELS 5
#define DMA_ARM_PL081 1
#define CONFIG_PTUAUX 1
#define CONFIG_PTUAUX_PCM2 1
#define PCM_ENABLED 1
#define PCM_FIFO_SIZE_40SAMPLES 1
#define PCM_SAMPLING_CLK_CONTROL 1
#define I2S_PCM_INTERFACE 1
#undef  LHL_SUPERMUX_SUPPORT
#define T2_ARM_HW_TIMERS 1
#define I2C_MASTER 1
#define I2C_MASTER_FIFO 64
#undef  I2C_MASTER_ASYNC
#undef  I2C_MASTER_LOCK
#undef  CONFIG_I2C_PTU2
#define NEW_I2C_HW 1
#define PTU_1_FIFO_SHARING 1
#define SPIFFY 1
#define NUM_SPIFFY_BLOCKS 2
#define SPIFFY_1_FIFO_SIZE 1024
#define SPIFFY2_HW 1
#define SPIFFY_2_FIFO_SIZE 256
#define SPIFFY_DSPI_QSPI_DBIC 1
#undef  QSPI_FLASH
#define SPIFFY_MAX_INTEGRAL_DIVISOR_FREQ_IN_HZ 12000000
#undef  DISPLAY_DEVICE
#define EFLASH 1
#define TSMC_EFLASH 1
#undef  SONOS_EFLASH
#define NUM_PATCH_ENTRIES 256
#define NONMOVABLE_PATCH_TABLE_PATCH_ENTRY_SIZE_4 1
#undef  PATCH_TABLE_AT_TOP_OF_MEMORY
#define HW_CVSD_STATE_ENABLED 1
#define MULTI_FAB_ID 1

/*
 * NVRAM Configuration
 */
#define NVRAM_SUPPORTED 1
#define NVRAM_EEPROM 1
#define I2C_MASTER_FIFO 64
#define I2C_MASTER 1
#define NEW_I2C_HW 1
#undef  SPI_EEPROM
#define NVRAM_SERIAL_FLASH 1
#define SPIFFY 1
#undef  PCM_SPI_SWITCH
#define VS_DOUBLE_BUFFERING 1
#undef  NVRAM_CHECK_SERIAL_FLASH_BEFORE_EFLASH
#undef  RESTORE_PINS_IF_NVRAM_NOT_PRESENT
#undef  FLASH_SUPPORTED
#undef  VS_RAM_SUPPORTED
#define HW_SECENG_ENABLE 1
#define HW_AESENG_ENABLE 1
#define HW_SHA2ENG_ENABLE 1
#define HW_PKAENG_ENABLE 1
#define DWP_ENABLED 1
#define HW_SECEXT_ENABLE 1
#undef  HW_SECEXT_CHECK_FOR_BYPASS_STRAP
#define SECURE_BOOT_ENABLE 1
#undef  CRYPTO_ALGORITHMS
#define CHIPID_ENABLE 1
#undef  NEW_HW_AES_ENGINE
#undef  NEW_HW_AES_ENGINE_4347
#undef  SPI_DEBUG_DUMP

/*
 * PMU Configuration (Foundation->PMU Configuration)
 */
#define NEW_PMU_DESIGN_2076 1
#define PMU_SDS 1
#undef  RAP_ENABLE
#define ENABLE_32K_OSC_AND_MIA_LPO_SOURCE 1
#define USE_LHL_PINS_FOR_WAKEUP 1
#undef  CSA_GET_TIME_TO_SLEEP
#define PMU_POLL_TRANSPORT_SENSE 1
#undef  PMU_PERFORMANCE_TRACING
#define PMU_INT 1
#define PAUSE_MODE_1MHZ_ENABLED 1
#define DISABLE_CBUCK_MODE_FREQ_CALIB 1
#define ENABLE_PMU_LDO_TRIM_V2 1
#undef  ENABLE_OCF_BUILD_ACCESS_INFO_PAGE
#undef  ENABLE_BTRF_LDO_DELAY
#undef  MINIPMU_FOR_ADFLL
#undef  SOFT_START_SLEW_RATE_CONTROL
#undef  PMU_MM_ENABLED

/*
 * Slimboot Configuration (Foundation->Slimboot Configuration)
 */
#define SB_SLIMBOOT_CONFIGURED 1
#define SB_20721_STYLE_LHL_GPIO 1
#define SB_WAIT_FOR_XTAL_WARMUP 1
#undef  SB_ENABLE_GCI_CLOCK_FOR_LHL
#undef  SB_ALLOW_PENDSV_DURING_SLIMBOOT
#define SB_HSRCOSC_AVAILABLE_FOR_HIDOFF 1
#define SB_POWERDOWN_UNUSED_SRAM 1

/*
 * ePDS Configuration (Foundation->Boot->ePDSConfiguration)
 */
#undef  EPDS_ENABLED
#undef  EPDS_BACKUP
#undef  EPDS_SDS
#undef  COSIM_EPDS
#define DYNAMIC_MEMORY_STATS 1
#define DYNAMIC_MEMORY_NUM_POOLS 4
#define DEFAULT_DYNMEM_SIZE_1 16
#define DEFAULT_DYNMEM_COUNT_1 36
#define DEFAULT_DYNMEM_DIE_RESERVE_1 3
#define DEFAULT_DYNMEM_SIZE_2 48
#define DEFAULT_DYNMEM_COUNT_2 36
#define DEFAULT_DYNMEM_DIE_RESERVE_2 2
#define DEFAULT_DYNMEM_SIZE_3 96
#define DEFAULT_DYNMEM_COUNT_3 20
#define DEFAULT_DYNMEM_DIE_RESERVE_3 2
#define DEFAULT_DYNMEM_SIZE_4 268
#define DEFAULT_DYNMEM_COUNT_4 10
#define DEFAULT_DYNMEM_DIE_RESERVE_4 1
#define ALWAYS_ON_MEMORY_SUPPORT 1
#define ALWAYS_ON_MEMORY_TORAM 1
#define ALWAYS_ON_MEMORY_START_ADDRESS 0x280000
#define ALWAYS_ON_MEMORY_SIZE_IN_BYTES 16384
#undef  ALWAYS_ON_MEMORY_OVERFLOW_TO_SRAM_ALLOWED
#undef  RESERVE_CONFIG_IN_SRAM
#undef  REDUNDANT_SS_IN_NVRAM
#undef  HW_WITH_RBG200
#define HIGH_PRIORITY_THREAD_STACK_SIZE 600
#define PMU_STACK_SIZE 600
#define ADVA_STACK_SIZE 2862
#define MPEG_CODEC_STACK_SIZE 800
#define BT_HCI_LM_THREAD_STACK_SIZE 1280
#define BT_UART_THREAD_STACK_SIZE_BYTES 600
#define BT_USB_THREAD_STACK_SIZE 800
#undef  SS_DS_CRC32_ENABLED
#define SEPARATE_PATCH_RAM 1
#undef  LIB_CM4_MATH_W_WM_L
#define LIB_CM4_FPU_DSP 1

/*
 *     ARM CMSIS Lib configuration
 */
#define ARM_MATH_CM4 1
#define __FPU_PRESENT 1
#define CMSIS_SUPPORT 1
#define CMSIS_F32 1
#undef  CMSIS_Q31
#undef  CMSIS_Q15
#undef  CMSIS_Q7
#define CMSIS_BASIC 1
#define CMSIS_FAST 1
#define CMSIS_COMPLEX 1
#define CMSIS_FILTERS 1
#undef  CMSIS_MATRIX
#undef  CMSIS_TRANSFORMS
#undef  CMSIS_MOTER_CTL
#undef  CMSIS_STAT
#define AVS_ENABLED 1
#undef  LIB_CM4_TX_NX
#define FILEX_LIB 1
#define FILEX_VER_5_5 1
#define DISABLE_PAUSE_IF_CPU_CLK_IS_96MHZ 1
#undef  FASTER_EFLASH_ACCESS_FOR_AUDIO_ANALYSIS
#undef  ARIP_DEBUG

/*
 * FM
 */
#undef  FM

/*
 * Vendor specific
 */
#endif
/*
 * From compile environment
 */
#define FW_VERSION_MAJOR_REV 0
#define FW_VERSION_MINOR_REV 0
#define FW_VERSION_BUILD_NUMBER 0
#define LMPSUBREV 17178
#define CHIPNAME 20719B2
#define CHIP_NUMBER 20719
#define SILICON_REV 1
#define METAL_REV 2
#define CYW20719 1
#define BB_20719B2 1
