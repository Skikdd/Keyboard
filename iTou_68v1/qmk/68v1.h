#pragma once

#include "quantum.h"


#define LAYOUT( \
    k00,  k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e,    \
    k10,  k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e,    \
    k20,  k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k0f,    \
    k30,       k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3e, k3j, k1f,    \
    k40,  k41, k42, k43,                           k4h, k4g, k4i, k4e, k4j,k4f     \
) { \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, }, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, }, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k0f, }, \
    {k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3e, k3j, k1f, }, \
    {k40, k41, k42, k43,                          k4h, k4g, k4i, k4e, k4j, k4f  }  \
}
//    0    1   2    3    4     5     6   7    8    9   10   11  12    13  14   15   16   17   18  19
//    0    1   2    3    4     5     6   7    8    9   a    b    c    d    e   f     g    h   i   j
