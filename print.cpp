//
// Created by dyf on 2020/4/28.
//
#include "print.h"

bool cmp(table &t1, table &t2) {
    int *pointer1, *pointer2;
    pointer1 = &(t1.table[0][0]);
    pointer2 = &(t2.table[0][0]);

    for (int i = 0; i < 9; i++)
        if (*(pointer1 + i) != *(pointer2 + i))
            return false;
    return true;
}

void print(table temp, fstream &fs) {
    int *pointer;
    pointer = &(temp.table[0][0]);
    for (int i = 0; i < 9; i++)
        fs << *(pointer + i) << ' ';
    switch (temp.last) {
        case 0:
            fs << "NO OP";
            break;
        case UP:
            fs << "UP";
            break;
        case DOWN:
            fs << "DOWN";
            break;
        case LEFT:
            fs << "LEFT";
            break;
        case RIGHT:
            fs << "RIGHT";
            break;
    }
    fs << endl;
}