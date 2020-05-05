//
// Created by dyf on 2020/5/3.
//

#include "puzzle.h"
#include <algorithm>

int main() {
    fstream ifs;
    fstream ofs;
    string str = "start.txt";
    if (!openFile(ifs, str, ios::in)) {
        cout << "file is not opened" << endl;
        return ERR;
    }
    str = "statistic.txt";
    if (!openFile(ofs, str, ios::out)) {
        cout << "file is not opened" << endl;
    }

    int *pointerS, *pointerT;
    table s0{}, target{};
    pointerS = &(s0.table[0][0]);
    for (int i = 0; i < 9; i++) {
        ifs >> *(pointerS + i);
        if (*(pointerS + i) == 0) {
            s0.row = i / 3;
            s0.col = i % 3;
        }
    }
    pointerT = &(target.table[0][0]);
    for (int i = 0; i < 9; i++)
        *(pointerT + i) = i;
    vector<table> vt_out{};
    int count;
    int max=0;

    for(int i=0;i<44466;i++)
        next_permutation(pointerT, pointerT+9);
    do {
        count = puzzle(s0, target, vt_out, true);
        for (int i = 0; i < 9; i++)
            ofs << *(pointerS + i) << ' ';
        ofs << '\t';
        for (int i = 0; i < 9; i++)
            ofs << *(pointerT + i) << ' ';
        ofs << '\t';
        if(max<count)
            max=count;
        if (count == ERR)
            ofs << "目标状态不可达" << endl;
        else
            ofs << count << endl;

    } while (next_permutation(pointerT, pointerT + 9));
    cout<<max<<endl;
    return ACC;
}