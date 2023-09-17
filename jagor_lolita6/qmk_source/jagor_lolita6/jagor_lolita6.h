/* Copyright 2021 IsaacDynamo
 * Copyright 2022 Eduardo Fernandes
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

// readability
#define XXX KC_NO

#define LAYOUT_fullsize_ansi( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012,       k014, k015, k016,                              \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, k114, k115, k116,       k118, k119, k120,k121, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, k214, k215, k216,       k218, k219, k220,k221, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311,       k313,                         k318, k319, k320,      \
    k40,      k42, k43, k44, k45, k46, k47, k48, k49, k410, k411,       k413,       k416,             k418, k419, k420,k421, \
    k50, k51, k52,                k54,      k56, k57, k58,  k59,              k516, k518, k519,       k520, k521       \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, XXX,  k014, k015, k016, XXX,  XXX,  XXX,  XXX, XXX }, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, k114, k115, k116, XXX,  k118, k119, k120,k121}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, k214, k215, k216, XXX,  k218, k219, k220,k221}, \
    {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, XXX,  k313, XXX,  XXX,  XXX,  XXX,  k318, k319, k320,XXX }, \
    {k40, XXX, k42, k43, k44, k45, k46, k47, k48, k49, k410, k411, XXX,  k413, XXX,  XXX,  k416, XXX,  k418, k419, k420,k421}, \
    {k50, k51, k52, XXX, k54, XXX, k56, k57, k58, k59, XXX,  XXX,  XXX,  XXX,  XXX,  XXX,  k516, XXX,  k518, k519, k520,k521}  \
}
