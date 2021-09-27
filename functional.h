//
// Created by Islombek on 27.09.2021.
//

#ifndef ACS_HW_1_FUNCTIONAL_H
#define ACS_HW_1_FUNCTIONAL_H

#include <fstream>
#include <string>

struct functional {
    uint64_t age;
    uint64_t popularity;
    bool lazy_calculation;
    enum typing {DYNAMIC, STRICT, ERROR};
    typing typing_type;
};


void In(functional &func, std::ifstream &stream);

void InRandom(functional &func);

void Out(functional &func, std::ofstream &stream);

double Quotient(functional &func);

#endif //ACS_HW_1_FUNCTIONAL_H
