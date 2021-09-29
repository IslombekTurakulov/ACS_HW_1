//
// Created by Turakulov Islombek on 26.09.2021.
//

#ifndef __utils__
#define __utils__

#include <string>
#include <cstdlib>

void initRand();

int randomInteger(int min, int max);

char *randomWord(int len);

char *copyElementFromString(std::string &str);

#endif //__utils__
