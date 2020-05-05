//
// Created by dyf on 2020/4/28.
//

#include "swap.h"

table swapUP(table t, int pre, int current) {
    table temp{};
    int *pointer1, *pointer2;
    pointer1 = &(t.table[0][0]);
    pointer2 = &(temp.table[0][0]);
    for (int i = 0; i < 9; i++)
        *pointer2++ = *pointer1++;
    temp.table[t.row][t.col] = t.table[t.row - 1][t.col];
    temp.table[t.row - 1][t.col] = 0;
    temp.row = t.row - 1;
    temp.col = t.col;
    temp.last = UP;
    temp.pre = pre;
    temp.current = current;
    return temp;
}
table swapDOWN(table t, int pre, int current) {
    table temp{};
    int *pointer1, *pointer2;
    pointer1 = &(t.table[0][0]);
    pointer2 = &(temp.table[0][0]);
    for (int i = 0; i < 9; i++)
        *pointer2++ = *pointer1++;
    temp.table[t.row][t.col] = t.table[t.row + 1][t.col];
    temp.table[t.row + 1][t.col] = 0;
    temp.row = t.row + 1;
    temp.col = t.col;
    temp.last = DOWN;
    temp.pre = pre;
    temp.current = current;
    return temp;
}
table swapLEFT(table t, int pre, int current) {
    table temp{};
    int *pointer1, *pointer2;
    pointer1 = &(t.table[0][0]);
    pointer2 = &(temp.table[0][0]);
    for (int i = 0; i < 9; i++)
        *pointer2++ = *pointer1++;
    temp.table[t.row][t.col] = t.table[t.row][t.col - 1];
    temp.table[t.row][t.col - 1] = 0;
    temp.row = t.row;
    temp.col = t.col - 1;
    temp.last = LEFT;
    temp.pre = pre;
    temp.current = current;
    return temp;
}
table swapRIGHT(table t, int pre, int current) {
    table temp{};
    int *pointer1, *pointer2;
    pointer1 = &(t.table[0][0]);
    pointer2 = &(temp.table[0][0]);
    for (int i = 0; i < 9; i++)
        *pointer2++ = *pointer1++;
    temp.table[t.row][t.col] = t.table[t.row][t.col + 1];
    temp.table[t.row][t.col + 1] = 0;
    temp.row = t.row;
    temp.col = t.col + 1;
    temp.last = RIGHT;
    temp.pre = pre;
    temp.current = current;
    return temp;
}