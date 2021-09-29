//
// Created by Turakulov Islombek on 26.09.2021.
//
#include <cstring>
#include "utils.h"
#include <ctime>

void initRand() {
    srand((unsigned) time(nullptr));
}

int randomInteger(int min, int max) {
    return std::rand() % (max - min + 1) + min;
}


char *randomWord(int len) {
    static const char numericalAlphabet[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";

    char *result = new char[len + 1];

    for (int i = 0; i < len; ++i) {
        result[i] = numericalAlphabet[std::rand() % (sizeof(numericalAlphabet) - 1)];
    }

    // Zero terminated string
    result[len] = 0;

    return result;
}

char *copyElementFromString(std::string &str) {
    // Zero terminated string
    char *result = new char[str.length() + 1];

    std::memcpy(result, str.c_str(), str.length() + 1);

    return result;
}
