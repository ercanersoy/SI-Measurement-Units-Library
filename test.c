// SI.h - Test source file
// Written by Ercan Ersoy.

// Include header files
#include <stdio.h>
#include "SI.h"

// Main function
int main(void)
{
    // Define test variables
    SI_lower test_lower;
    SI_upper test_upper;

    // Tests

    test_lower = SI_convert_lower(123.0, SI_lower_none);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_d);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_c);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_m);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_mc);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_n);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_p);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_f);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_a);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_z);
    printf("Value: %.30Lf \n", test_lower.size);

    test_lower = SI_convert_lower(123.0, SI_y);
    printf("Value: %.30Lf \n", test_lower.size);

    test_upper = SI_convert_upper(123.0, SI_upper_none);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_da);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_h);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_k);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_M);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_G);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_T);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_P);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_E);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_Z);
    printf("Value: %.30Lf \n", test_upper.size);

    test_upper = SI_convert_upper(123.0, SI_Y);
    printf("Value: %.30Lf \n", test_upper.size);

    return 0;
}
