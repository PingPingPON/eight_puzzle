//
// Created by dyf on 2020/4/28.
//
#pragma once
#ifndef EIGHT_PUZZLE_FILE_H
#define EIGHT_PUZZLE_FILE_H
#include "global.h"
#endif //EIGHT_PUZZLE_FILE_H

bool openFile(fstream &fs, string &str, ios_base::openmode io);

void closeFile(fstream &fs);