//
// Created by Islombek on 27.09.2021.
//

#ifndef __procedural__
#define __procedural__

#include <fstream>
#include <string>
#include <cstring>

struct procedural {
    const char *name;
    int age;
    int popularity;
    bool has_abstract_variables;
};

//------------------------------------------------------------------------------
// ввод процедурного яп из потока ввода
void In(procedural &procedural, std::ifstream &stream);

//------------------------------------------------------------------------------
// инициализация случайного процедурного яп
void InRandom(procedural &procedural);

//------------------------------------------------------------------------------
// вывод процедурного яп из потока ввода
void Out(procedural &procedural, std::ofstream &stream);

//------------------------------------------------------------------------------
// вычисление процедурного яп
double Quotient(procedural &proc);

#endif //__procedural__
