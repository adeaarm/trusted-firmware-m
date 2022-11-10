/*
 * Copyright (c) 2022, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __CONFIG_TFM_TARGET_H__
#define __CONFIG_TFM_TARGET_H__

/* Include optional claims in initial attestation token */
#if ATTEST_INCLUDE_OPTIONAL_CLAIMS
#pragma message("ATTEST_INCLUDE_OPTIONAL_CLAIMS is redefined to 0.")
#undef ATTEST_INCLUDE_OPTIONAL_CLAIMS
#endif
#define ATTEST_INCLUDE_OPTIONAL_CLAIMS    0

#endif /* __CONFIG_TFM_TARGET_H__ */