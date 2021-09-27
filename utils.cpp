//
// Created by Turakulov Islombek on 26.09.2021.
//

#include <cstring>
#include "utils.h"

void initRand() {
    srand((unsigned) time(nullptr));
}

int randomInteger(int min, int max) {
    return std::rand() % (max - min + 1) + min;
}
