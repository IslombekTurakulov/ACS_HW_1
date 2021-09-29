//
// Created by Islombek on 27.09.2021.
//
#ifndef __functional__
#define __functional__

#include <fstream>
#include <string>
#include <cstring>

struct functional {
    const char *name;
    bool lazy_calculation;
    int age;
    int popularity;
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

#endif //__functional__
