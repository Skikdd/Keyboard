#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012,       k014, k015, k016,   \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, k114, k115, k116,   \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, k214, k215, k216,   \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311,       k313,                     \
    k40,      k42, k43, k44, k45, k46, k47, k48, k49, k410, k411,       k413,       k416,         \
    k50, k51, k52,                k54,      k56, k57, k58,  k59,              k516, k517, k518    \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, XXX,  k014, k015, k016, XXX, XXX }, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, k114, k115, k116, XXX, XXX }, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, k214, k215, k216, XXX, XXX }, \
    {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, XXX,  k313, XXX,  XXX,  XXX,  XXX, XXX }, \
    {k40, XXX, k42, k43, k44, k45, k46, k47, k48, k49, k410, k411, XXX,  k413, XXX,  XXX,  k416, XXX, XXX }, \
    {k50, k51, k52, XXX, k54, XXX, k56, k57, k58, k59, XXX,  XXX,  XXX,  XXX,  XXX,  XXX,  k516, k517,k518}  \
}
