#ifndef __ANDROID_DEVICE_DATABASE_H__
#define __ANDROID_DEVICE_DATABASE_H__

#include <stdbool.h>

typedef enum {
  DEVICE_NOT_SUPPORTED = 0,
  DEVICE_C1505_11_3_A_0_47,
  DEVICE_C1505_11_3_A_2_13,
  DEVICE_C5302_12_0_A_1_284,
  DEVICE_C5303_12_0_A_1_284,
  DEVICE_C5306_12_0_A_1_284,
  DEVICE_C5306_12_0_A_1_257,
  DEVICE_C5303_12_0_A_1_257,
  DEVICE_C5302_12_0_A_1_257,
  DEVICE_C5306_12_0_A_1_211,
  DEVICE_C5303_12_0_A_1_211,
  DEVICE_C5302_12_0_A_1_211,
  DEVICE_M35H_12_0_A_1_257,
  DEVICE_C2104_15_0_A_1_31,
  DEVICE_C2105_15_0_A_1_31,
  DEVICE_C2104_15_0_A_1_36,
  DEVICE_C2105_15_0_A_1_36,
  DEVICE_C6616_10_1_1_A_1_319,
  DEVICE_C6606_10_1_1_B_0_166,
  DEVICE_C6603_10_3_A_0_423,
  DEVICE_C6602_10_3_A_0_423,
  DEVICE_C6603_10_1_1_A_1_307,
  DEVICE_C6602_10_1_1_A_1_307,
  DEVICE_C6603_10_1_1_A_1_253,
  DEVICE_C6602_10_1_1_A_1_253,
  DEVICE_C6503_10_3_A_0_423,
  DEVICE_C6502_10_3_A_0_423,
  DEVICE_C6506_10_3_A_0_423,
  DEVICE_F02E_V16R46A,
  DEVICE_F02E_V17R48A,
  DEVICE_F02E_V19R50D,
  DEVICE_F03D_V24R33Cc,
  DEVICE_F04E_V08R39A,
  DEVICE_F05D_V08R31C,
  DEVICE_F05D_V11R40A,
  DEVICE_F06E_V17R45B,
  DEVICE_F06E_V21R48D,
  DEVICE_F06E_V25R51C,
  DEVICE_F07E_V19R38A,
  DEVICE_F07E_V20R39D,
  DEVICE_F07E_V21R40B,
  DEVICE_F10D_V10R42A,
  DEVICE_F10D_V21R48A,
  DEVICE_F10D_V22R49C,
  DEVICE_F11D_V21R36A,
  DEVICE_F11D_V24R40A,
  DEVICE_F11D_V26R42B,
  DEVICE_F12C_V21,
  DEVICE_FJL21_V23R39X,
  DEVICE_FJL21_V37R47A,
  DEVICE_FJL21_V39R48C,
  DEVICE_HTCONEMAXVZW_1_11_605_4,
  DEVICE_HTL21_1_29_970_1,
  DEVICE_HTL21_1_36_970_1,
  DEVICE_HTL21_1_39_970_1,
  DEVICE_HTL22_1_05_970_2,
  DEVICE_HTL22_1_07_970_4,
  DEVICE_HTL22_2_15_970_1,
  DEVICE_HTL22_2_21_970_2,
  DEVICE_HTX21_1_20_971_1,
  DEVICE_HTX21_1_25_971_1,
  DEVICE_IS11N_GRJ90,
  DEVICE_IS12S_6_1_D_1_91,
  DEVICE_IS12S_6_1_D_1_103,
  DEVICE_IS15SH_01_00_04,
  DEVICE_IS17SH_01_00_03,
  DEVICE_IS17SH_01_00_04,
  DEVICE_ISW11F_V25R45A,
  DEVICE_ISW11F_V27R47I,
  DEVICE_ISW11K_145_0_0002,
  DEVICE_ISW12K_010_0_3000,
  DEVICE_ISW12K_011_0_3100,
  DEVICE_ISW13F_V69R51I,
  DEVICE_ISW13F_V75R58A,
  DEVICE_ISW13HT_2_06_970_4,
  DEVICE_L01D_V20c,
  DEVICE_L01D_V20d,
  DEVICE_L01D_V20e,
  DEVICE_L01E_V10c,
  DEVICE_L01F_V10c,
  DEVICE_L02E_V10c,
  DEVICE_L02E_V10e,
  DEVICE_L01E_V20b,
  DEVICE_L02E_V20a,
  DEVICE_L05D_V20c,
  DEVICE_L06D_V10h,
  DEVICE_L06D_V10k,
  DEVICE_L06D_V10p,
  DEVICE_LG_E975_V10e,
  DEVICE_LT28H_6_2_B_0_211,
  DEVICE_LT28I_6_2_B_0_211,
  DEVICE_LT26I_6_2_B_0_200,
  DEVICE_LT26I_6_2_B_0_211,
  DEVICE_LT26I_6_2_B_1_96,
  DEVICE_LT26II_6_2_B_0_200,
  DEVICE_LT26II_6_2_B_0_211,
  DEVICE_LT26W_6_2_B_0_200,
  DEVICE_LT26W_6_2_B_0_211,
  DEVICE_LT22I_6_2_A_1_100,
  DEVICE_P02E_10_0657,
  DEVICE_P02E_10_0659,
  DEVICE_P02E_10_0691,
  DEVICE_P02E_10_0733,
  DEVICE_P02E_10_0767,
  DEVICE_P02E_10_0798,
  DEVICE_ST23I_11_0_A_5_5,
  DEVICE_ST23I_11_0_A_5_8,
  DEVICE_ST27I_6_2_A_1_100,
  DEVICE_ST27A_6_2_A_1_100,
  DEVICE_ST26I_11_2_A_0_21,
  DEVICE_ST26A_11_2_A_0_21,
  DEVICE_ST26I_11_2_A_0_31,
  DEVICE_ST26A_11_2_A_0_31,
  DEVICE_N02E_A3002501,
  DEVICE_N02E_A3002601,
  DEVICE_N02E_A5000331,
  DEVICE_N02E_A5002501,
  DEVICE_N02E_A5002601,
  DEVICE_N03E_A7000241,
  DEVICE_N03E_A7001821,
  DEVICE_N03E_A7002001,
  DEVICE_N03E_A7202001,
  DEVICE_N03E_A7202201,
  DEVICE_N05E_A1000311,
  DEVICE_SC01E_LJ3,
  DEVICE_SC01E_MF2,
  DEVICE_SC04E_MDI,
  DEVICE_SC04E_MF1,
  DEVICE_SC04E_MF2,
  DEVICE_SC04E_MG2,
  DEVICE_SC05D_LPL,
  DEVICE_SCL21_LJD,
  DEVICE_SGP321_10_1_1_A_1_307,
  DEVICE_SGP312_10_1_C_0_370,
  DEVICE_SGP311_10_1_C_0_370,
  DEVICE_LT30P_9_1_A_1_141,
  DEVICE_LT30P_9_1_A_1_142,
  DEVICE_LT30P_9_1_A_1_145,
  DEVICE_LT29I_9_1_B_0_411,
  DEVICE_LT29I_9_1_B_1_67,
  DEVICE_LT25I_9_1_A_1_140,
  DEVICE_LT25I_9_1_A_1_142,
  DEVICE_LT25I_9_1_A_1_145,
  DEVICE_SBM203SH_S0024,
  DEVICE_SH02E_02_00_02,
  DEVICE_SH02E_02_00_03,
  DEVICE_SH04E_01_00_02,
  DEVICE_SH04E_01_00_03,
  DEVICE_SH04E_01_00_04,
  DEVICE_SH05E_01_00_05,
  DEVICE_SH05E_01_00_06,
  DEVICE_SH06E_01_00_01,
  DEVICE_SH06E_01_00_05,
  DEVICE_SH06E_01_00_06,
  DEVICE_SH06E_01_00_07,
  DEVICE_SH07E_01_00_03,
  DEVICE_SH09D_02_00_03,
  DEVICE_SHL21_01_00_09,
  DEVICE_SHL21_01_01_02,
  DEVICE_SO01E_9_1_C_0_473,
  DEVICE_SO01E_9_1_C_1_103,
  DEVICE_SO02E_10_1_D_0_343,
  DEVICE_SO03E_10_1_E_0_265,
  DEVICE_SO03E_10_1_E_0_269,
  DEVICE_SO04D_7_0_D_1_137,
  DEVICE_SO04D_9_1_C_0_475,
  DEVICE_SO04D_9_1_C_1_103,
  DEVICE_SO04E_10_1_1_D_0_179,
  DEVICE_SO04E_10_1_1_D_2_26,
  DEVICE_SO05D_7_0_D_1_117,
  DEVICE_SO05D_7_0_D_1_137,
  DEVICE_SO05D_9_1_C_0_475,
  DEVICE_SO05D_9_1_C_1_103,
  DEVICE_SOL21_9_0_F_0_226,
  DEVICE_SOL21_9_1_D_0_395,
  DEVICE_SOL21_9_1_D_0_401,
  DEVICE_SOL22_10_2_F_3_43,
  DEVICE_SOL22_10_2_F_3_81,
  DEVICE_SONYTABLET_P_RELEASE5A,
  DEVICE_SONYTABLET_S_RELEASE5A,
  DEVICE_T02D_V10R36A,
  DEVICE_NEXUS4_JDQ39,
  DEVICE_NEXUS_JOP40C,
  DEVICE_NEC_101T,
  DEVICE_NEXUS_JZO54K,
  DEVICE_C5503_10_1_1_A_1_310,
  DEVICE_C5502_10_1_1_A_1_310,
  DEVICE_M36H_10_1_1_A_1_310,
  DEVICE_ASUS_TF300T_JRO03C_JP_EPAD_10_4_2_20,
  DEVICE_SCH_I545_VZWAME7,
  DEVICE_HTL21_1_39_970_3,
  DEVICE_L01F_V11k,
  DEVICE_LGL22_V10a,
  DEVICE_LGL22_V10b,
  DEVICE_LGL23_V10d,
} device_id_t;

#define DEVICE_SYMBOL(name)     #name

typedef const char *device_symbol_t;

#define HAS_SET_SYMBOL_ADDRESS	1

extern device_id_t detect_device(void);
extern unsigned long int device_get_symbol_address(device_symbol_t);
extern bool device_set_symbol_address(device_symbol_t, unsigned long int);
extern void print_reason_device_not_supported(void);

#endif /* __ANDROID_DEVICE_DATABASE_H__ */
