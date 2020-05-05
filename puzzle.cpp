#include "puzzle.h"

int puzzle(table s0, table target, vector<table>& vt_out, bool statistic){
    int *pointer;

    int inversion1 = 0, inversion2 = 0;
    pointer = &(s0.table[0][0]);
    for (int i = 0; i < 8; i++) {
        if (*(pointer + i) == 0)
            continue;
        for (int j = i + 1; j < 9; j++) {
            if (*(pointer + j) == 0)
                continue;
            if (*(pointer + i) > *(pointer + j))
                inversion1++;
        }
    }
    pointer = &(target.table[0][0]);
    for (int i = 0; i < 8; i++) {
        if (*(pointer + i) == 0)
            continue;
        for (int j = i + 1; j < 9; j++) {
            if (*(pointer + j) == 0)
                continue;
            if (*(pointer + i) > *(pointer + j))
                inversion2++;
        }
    }
    if (inversion1 % 2 != inversion2 % 2)
        return ERR;

    queue<table> open;
    vector<table> close;
    table temp{};
    open.push(s0);
    close.push_back(s0);
    while (!open.empty()) {
        if (open.front().last == 0) {
            if (open.front().row != 0) {
                temp = swapUP(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().row != 2) {
                temp = swapDOWN(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().col != 0) {
                temp = swapLEFT(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().col != 2) {
                temp = swapRIGHT(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
        } else if (open.front().last == UP) {
            if (open.front().row != 0) {
                temp = swapUP(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().col != 0) {
                temp = swapLEFT(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().col != 2) {
                temp = swapRIGHT(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
        } else if (open.front().last == DOWN) {
            if (open.front().row != 2) {
                temp = swapDOWN(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().col != 0) {
                temp = swapLEFT(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().col != 2) {
                temp = swapRIGHT(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
        } else if (open.front().last == LEFT) {
            if (open.front().row != 0) {
                temp = swapUP(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().row != 2) {
                temp = swapDOWN(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().col != 0) {
                temp = swapLEFT(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
        } else if (open.front().last == RIGHT) {
            if (open.front().row != 0) {
                temp = swapUP(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().row != 2) {
                temp = swapDOWN(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
            if (open.front().col != 2) {
                temp = swapRIGHT(open.front(), open.front().current, close.size());
                open.push(temp);
                close.push_back(temp);
                if (cmp(temp, target))
                    break;
            }
        }

        open.pop();
    }
    int count = 0;
    while (temp.pre) {
        if (!statistic)
            vt_out.insert(vt_out.begin(), temp);
        temp = close[temp.pre];
        count++;
    }
    if(!statistic) {
        vt_out.insert(vt_out.begin(), temp);
        vt_out.insert(vt_out.begin(), s0);
    }
    count++;
    return count;
}
