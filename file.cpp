//
// Created by dyf on 2020/4/28.
//

#include "file.h"

bool openFile(fstream &fs, string &str, ios_base::openmode io) {
    fs.open(str, io);
    return fs.is_open();
}

void closeFile(fstream &fs) {
    fs.close();
}