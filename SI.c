// SI.c - Main source file
// Written by Ercan Ersoy.

// Include header files
#include <math.h>
#include "SI.h"

#include <stdio.h>

// Convert lower function
SI_lower SI_convert_lower(long double size, SI_lower_prefix prefix)
{
    SI_lower value;

    value.size = size * pow(10, prefix);
    value.prefix = prefix;

    return value;
}

// Convert upper function
SI_upper SI_convert_upper(long double size, SI_upper_prefix prefix)
{
    SI_upper value;

    value.size = size / pow(10, prefix);
    value.prefix = prefix;

    return value;
}
