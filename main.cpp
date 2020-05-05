//
// Created by dyf on 2020/4/30.
//
#pragma once
#include "puzzle.h"

//int main() {
//    fstream ifs;
//    fstream ofs;
//    string str = "start.txt";
//    if (!openFile(ifs, str, ios::in)) {
//        cout << "file is not opened" << endl;
//        return ERR;
//    }
//    str = "result.txt";
//    if (!openFile(ofs, str, ios::out)) {
//        cout << "file is not opened" << endl;
//    }
//
//    int *pointer;
//    table s0{}, target{};
//    pointer = &(s0.table[0][0]);
//    for (int i = 0; i < 9; i++) {
//        ifs >> *pointer;
//        if (*pointer++ == 0) {
//            s0.row = i / 3;
//            s0.col = i % 3;
//        }
//    }
//    pointer = &(target.table[0][0]);
//    for (int i = 0; i < 9; i++) {
//        ifs >> *pointer;
//        if (*pointer++ == 0) {
//            target.row = i / 3;
//            target.col = i % 3;
//        }
//    }
//
//    vector<table> vt_out;
//    int count=puzzle(s0, target, vt_out, false);
//
//    if(count==ERR){
//        ofs << "目标状态不可达" << endl;
//        return ERR;
//    }
//
//    for(int i=0;i<vt_out.size();i++)
//        print(vt_out[i], ofs);
//    ofs << count << endl;
//    ofs.close();
//    closeFile(ifs);
//    return ACC;
//}