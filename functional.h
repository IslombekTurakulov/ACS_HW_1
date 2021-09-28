//
// Created by Islombek on 27.09.2021.
//

#ifndef ACS_HW_1_FUNCTIONAL_H
#define ACS_HW_1_FUNCTIONAL_H

#include <fstream>
#include <string>

struct functional {
    const char *name;
    uint64_t age;
    uint64_t popularity;
    bool lazy_calculation;
    enum typing {DYNAMIC, STRICT, ERROR};
    typing typing_type;
};

//------------------------------------------------------------------------------
// ввод функционального яп из потока ввода
void In(functional &func, std::ifstream &stream);

//------------------------------------------------------------------------------
// инициализация случайного функционального яп
void InRandom(functional &func);

//------------------------------------------------------------------------------
// вывод функционального яп из потока ввода
void Out(functional &func, std::ofstream &stream);

//------------------------------------------------------------------------------
// вычисление функционального яп
double Quotient(functional &func);

#endif //ACS_HW_1_FUNCTIONAL_H
