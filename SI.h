// SI.h - Main header file
// Written by Ercan Ersoy.

#ifndef SI_H
#define SI_H

// Include header files
#include <stdint.h>

// Define prefixes

// Define lower prefix type
typedef enum lower_prefixes
{
    SI_d  =  1,
    SI_c  =  2,
    SI_m  =  3,
    SI_mc =  6,
    SI_n  =  9,
    SI_p  = 12,
    SI_f  = 15,
    SI_a  = 18,
    SI_z  = 21,
    SI_y  = 24
} SI_lower_prefix;

// Define upper prefix type
typedef enum upper_prefixes
{
    SI_da =  1,
    SI_h  =  2,
    SI_k  =  3,
    SI_M  =  6,
    SI_G  =  9,
    SI_T  = 12,
    SI_P  = 15,
    SI_E  = 18,
    SI_Z  = 21,
    SI_Y  = 24
} SI_upper_prefix;

// Define lower units

// Lower 8 byte decimal unit
typedef struct lower_decimal_8
{
    int8_t size;
    SI_lower_prefix prefix;
} SI_lower_decimal_8;

// Lower 16 byte decimal unit
typedef struct lower_decimal_16
{
    int16_t size;
    SI_lower_prefix prefix;
} SI_lower_decimal_16;

// Lower 32 byte decimal unit
typedef struct lower_decimal_32
{
    int32_t size;
    SI_lower_prefix prefix;
} SI_lower_decimal_32;

// Lower 64 byte decimal unit
typedef struct lower_decimal_64
{
    int64_t size;
    SI_lower_prefix prefix;
} SI_lower_decimal_64;

// Lower float unit
typedef struct lower_float
{
    float size;
    SI_lower_prefix prefix;
} SI_lower_float;

// Lower double unit
typedef struct lower_double
{
    double size;
    SI_lower_prefix prefix;
} SI_lower_double;

// Lower long double unit
typedef struct lower_long_double
{
    long double size;
    SI_lower_prefix prefix;
} SI_lower_long_double;

// Define upper units

// Upper 8 byte decimal unit
typedef struct upper_decimal_8
{
    int8_t size;
    SI_upper_prefix prefix;
} SI_upper_decimal_8;

// Upper 16 byte decimal unit
typedef struct upper_decimal_16
{
    int16_t size;
    SI_upper_prefix prefix;
} SI_upper_decimal_16;

// Upper 32 byte decimal unit
typedef struct upper_decimal_32
{
    int32_t size;
    SI_upper_prefix prefix;
} SI_upper_decimal_32;

// Upper 64 byte decimal unit
typedef struct upper_decimal_64
{
    int64_t size;
    SI_upper_prefix prefix;
} SI_upper_decimal_64;

// Upper float unit
typedef struct upper_float
{
    float size;
    SI_upper_prefix prefix;
} SI_upper_float;

// Upper double unit
typedef struct upper_double
{
    double size;
    SI_upper_prefix prefix;
} SI_upper_double;

// Upper long double unit
typedef struct upper_long_double
{
    long double size;
    SI_upper_prefix prefix;
} SI_upper_long_double;

#endif
