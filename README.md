# SI Measurement Units Library

SI meausrement units library

Copyright (c) 2021 Ercan Ersoy

This software licensed under CC0-1.0 License.

## Unit Enumerators

## Enumerators as Lower Units

* SI_lower_none
* SI_d
* SI_c
* SI_m
* SI_mc
* SI_n
* SI_p
* SI_f
* SI_a
* SI_z
* SI_y

## Enumerators as Upper Units

* SI_upper_none
* SI_da
* SI_h
* SI_k
* SI_M
* SI_G
* SI_T
* SI_P
* SI_E
* SI_Z
* SI_Y

## Unit Types

### Type as Lower Units

`SI_lower` struct is for lower units.

`size` is `long double` field as size.

`prefix` is `SI_lower_prefix` field as prefix.

### Type as Upper Units

`SI_upper` struct is for upper units.

`size` is `long double` field as size.

`prefix` is `SI_upper_prefix` field as prefix.

### Function as Lower Units

`SI_lower SI_convert_lower(long double, SI_lower_prefix)`

This function converts a value as lower prefix.

### Function as Upper Units

`SI_upper SI_convert_upper(long double, SI_upper_prefix)`

This function converts a value as upper prefix.
