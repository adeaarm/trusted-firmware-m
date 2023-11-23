/*
 * Copyright (c) 2022-2023, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __PLATFORM_OTP_IDS_H__
#define __PLATFORM_OTP_IDS_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum tfm_otp_element_id_t {
    PLAT_OTP_ID_HUK = 0,
    PLAT_OTP_ID_GUK,

    PLAT_OTP_ID_LCS,

    PLAT_OTP_ID_IAK_LEN,
    PLAT_OTP_ID_IAK_TYPE,
    PLAT_OTP_ID_IAK_ID,

    PLAT_OTP_ID_IMPLEMENTATION_ID,
    PLAT_OTP_ID_VERIFICATION_SERVICE_URL,
    PLAT_OTP_ID_PROFILE_DEFINITION,

    /* BL2 ROTPK must be contiguous */
    PLAT_OTP_ID_BL2_ROTPK_0,
    PLAT_OTP_ID_BL2_ROTPK_1,
    PLAT_OTP_ID_BL2_ROTPK_2,
    PLAT_OTP_ID_BL2_ROTPK_3,
    PLAT_OTP_ID_BL2_ROTPK_4,
    PLAT_OTP_ID_BL2_ROTPK_5,
    PLAT_OTP_ID_BL2_ROTPK_6,
    PLAT_OTP_ID_BL2_ROTPK_7,
    PLAT_OTP_ID_BL2_ROTPK_8,

    /* BL2 NV counters must be contiguous */
    PLAT_OTP_ID_NV_COUNTER_BL2_0,
    PLAT_OTP_ID_NV_COUNTER_BL2_1,
    PLAT_OTP_ID_NV_COUNTER_BL2_2,
    PLAT_OTP_ID_NV_COUNTER_BL2_3,
    PLAT_OTP_ID_NV_COUNTER_BL2_4,
    PLAT_OTP_ID_NV_COUNTER_BL2_5,
    PLAT_OTP_ID_NV_COUNTER_BL2_6,
    PLAT_OTP_ID_NV_COUNTER_BL2_7,
    PLAT_OTP_ID_NV_COUNTER_BL2_8,

#ifdef PLATFORM_HAS_PS_NV_OTP_COUNTERS
    PLAT_OTP_ID_NV_COUNTER_PS_0,
    PLAT_OTP_ID_NV_COUNTER_PS_1,
    PLAT_OTP_ID_NV_COUNTER_PS_2,
#endif /* PLATFORM_HAS_PS_NV_OTP_COUNTERS */

    PLAT_OTP_ID_NV_COUNTER_NS_0,
    PLAT_OTP_ID_NV_COUNTER_NS_1,
    PLAT_OTP_ID_NV_COUNTER_NS_2,

    PLAT_OTP_ID_KEY_BL2_ENCRYPTION,
    PLAT_OTP_ID_KEY_SECURE_ENCRYPTION,
    PLAT_OTP_ID_KEY_NON_SECURE_ENCRYPTION,

    PLAT_OTP_ID_BL1_2_IMAGE,
    PLAT_OTP_ID_BL1_2_IMAGE_LEN,
    PLAT_OTP_ID_BL1_2_IMAGE_HASH,
    PLAT_OTP_ID_BL1_ROTPK_0,

    PLAT_OTP_ID_NV_COUNTER_BL1_0,

    PLAT_OTP_ID_SECURE_DEBUG_PK,

    PLAT_OTP_ID_HOST_ROTPK_S,
    PLAT_OTP_ID_HOST_ROTPK_NS,
    PLAT_OTP_ID_HOST_ROTPK_CCA,

    PLAT_OTP_ID_CCA_SYSTEM_PROPERTIES,

    PLAT_OTP_ID_REPROVISIONING_BITS,
    PLAT_OTP_ID_RSS_ID,

    PLAT_OTP_ID_CM_CONFIG_FLAGS,
    PLAT_OTP_ID_DM_CONFIG_FLAGS,

    PLAT_OTP_ID_DMA_ICS,
    PLAT_OTP_ID_SAM_CONFIG,
    PLAT_OTP_ID_SCP_DATA,

    PLAT_OTP_ID_OTP_KEY_ENCRYPTION_KEY,

    PLAT_OTP_ID_MAX,

    _PLAT_OTP_ID_PAD = UINT32_MAX,
};

#ifdef __cplusplus
}
#endif

#endif /* __PLATFORM_OTP_IDS_H__ */
