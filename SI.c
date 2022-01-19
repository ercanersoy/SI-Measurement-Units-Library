// SI.c - Main source file

// Written by Ercan Ersoy.
// Copyright (c) 2021-2022 Ercan Ersoy
// This file is licensed under CC0-1.0 License.

// Include header files
#include <math.h>
#include "SI.h"

// Convert lower function
SI_lower SI_convert_lower(long double size, SI_lower_prefix prefix)
{
    // Declare the value
    SI_lower value;

    // Calculate the value and assign the size
    value.size = size * pow(10, prefix);

    // Assign the prefix
    value.prefix = prefix;

    // Return the value
    return value;
}

// Convert upper function
SI_upper SI_convert_upper(long double size, SI_upper_prefix prefix)
{
    // Define the value
    SI_upper value;

    // Calculate the value and assign the size
    value.size = size / pow(10, prefix);

    // Assign the prefix
    value.prefix = prefix;

    // Return the value
    return value;
}
