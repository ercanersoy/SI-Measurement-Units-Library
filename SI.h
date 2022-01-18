// SI.h - Main header file

// Written by Ercan Ersoy.
// Copyright (c) 2021-2022 Ercan Ersoy
// This file licensed under CC0-1.0 License.

#ifndef SI_H
#define SI_H

// Include header files
#include <stdint.h>

// Define prefixes

// Define lower prefix type
typedef enum lower_prefixes
{
    SI_lower_none =  0,
    SI_d    =  1,
    SI_c    =  2,
    SI_m    =  3,
    SI_mc   =  6,
    SI_n    =  9,
    SI_p    = 12,
    SI_f    = 15,
    SI_a    = 18,
    SI_z    = 21,
    SI_y    = 24
} SI_lower_prefix;

// Define upper prefix type
typedef enum upper_prefixes
{
    SI_upper_none =  0,
    SI_da   =  1,
    SI_h    =  2,
    SI_k    =  3,
    SI_M    =  6,
    SI_G    =  9,
    SI_T    = 12,
    SI_P    = 15,
    SI_E    = 18,
    SI_Z    = 21,
    SI_Y    = 24
} SI_upper_prefix;

// Define units

// Define lower unit
typedef struct lower
{
    long double size;
    SI_lower_prefix prefix;
} SI_lower;

// Define upper unit
typedef struct upper
{
    long double size;
    SI_upper_prefix prefix;
} SI_upper;

// Define function prototypes

// Convert lower function
SI_lower SI_convert_lower(long double, SI_lower_prefix);

// Convert upper function
SI_upper SI_convert_upper(long double, SI_upper_prefix);

#endif
