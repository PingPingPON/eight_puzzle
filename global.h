//
// Created by dyf on 2020/4/28.
//
#pragma once
#ifndef EIGHT_PUZZLE_GLOBAL_H
#define EIGHT_PUZZLE_GLOBAL_H

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <fstream>

#define ACC 1
#define ERR -1

#define UP 1
#define DOWN -1
#define LEFT 2
#define RIGHT -2
#endif //EIGHT_PUZZLE_GLOBAL_H

using namespace std;

struct table {
    int table[3][3];
    int last;
    int row, col;
    int pre, current;
};