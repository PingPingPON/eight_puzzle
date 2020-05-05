//
// Created by dyf on 2020/4/28.
//
#pragma once
#ifndef EIGHT_PUZZLE_SWAP_H
#define EIGHT_PUZZLE_SWAP_H
#include "global.h"
#endif //EIGHT_PUZZLE_SWAP_H

table swapUP(table t, int pre, int current);
table swapDOWN(table t, int pre, int current);
table swapLEFT(table t, int pre, int current);
table swapRIGHT(table t, int pre, int current);