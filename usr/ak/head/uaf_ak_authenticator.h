/**
 * Copyright (C) 2014-2015, Nok Nok Labs, Inc. All rights reserved.
 *
 * @file:			uaf_ak_authenticator.h
 ***************************************************************************************
 * Version:			0.1
 */
#ifndef __UAFAK_AUTHENTICATOR_H__
#define __UAFAK_AUTHENTICATOR_H__
#include "uaf_ak_defs.h"

#define MAX_UAF_VERSION_NUM		1

/* TODO:
   1. Would suggest to rearrange the order of members in metadata_t for more compact size in memory
      (i.e. put userVerification as a first member and move maxKeyHandle to the end).
*/

/**
 * Structure representing a list of authenticators.
 */
typedef struct authenticatorList_t
{
    authenticator_t *items;
    ak_word_t num;
} authenticatorList_t;

/**
 * This is a standard information intended for ASMs.
 */
typedef struct ak_external_info_t
{
    ak_byte_t aiVersion;
    ak_word_t version;
} ak_external_info_t;

/**
 * AK information.
 */
typedef struct ak_internal_info_t
{
    authenticatorList_t authenticators;
    ak_external_info_t extInfo;
} ak_internal_info_t;

#endif /* __UAFAK_AUTHENTICATOR_H__ */
