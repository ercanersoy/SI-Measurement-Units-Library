// SI.h - Main header file
// Written by Ercan Ersoy.

#ifndef SI_H
#define SI_H

#include <stdint.h>

// Define prefixes

// Define lower prefix type
typedef enum lower_prefixes
{
    d  =  1,
    c  =  2,
    m  =  3,
    mc =  6,
    n  =  9,
    p  = 12,
    f  = 15,
    a  = 18,
    z  = 21,
    y  = 24
} SI_lower_prefix;

// Define upper prefix type
typedef enum upper_prefixes
{
    da =  1,
    h  =  2,
    k  =  3,
    M  =  6,
    G  =  9,
    T  = 12,
    P  = 15,
    E  = 18,
    Z  = 21,
    Y  = 24
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
