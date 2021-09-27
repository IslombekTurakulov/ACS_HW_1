//
// Created by Islombek on 27.09.2021.
//

#ifndef ACS_HW_1_LANGUAGES_H
#define ACS_HW_1_LANGUAGES_H

#include "functional.h"
#include "objectOriented.h"
#include "procedural.h"
#include "utils.h"

struct languages {
    enum key {
        FUNCTIONAL, OBJECT_ORIENTED, PROCEDURAL
    };
    key key;
    union {
        functional func;
        objectOriented obj;
        procedural proc;
    };
};

//------------------------------------------------------------------------------
// ввод ЯП из потока ввода
languages *In(std::ifstream &stream);


//------------------------------------------------------------------------------
// инициализация случайного ЯП
languages *InRnd();

//------------------------------------------------------------------------------
// вывод ЯП в поток вывода
void Out(languages &lang, std::ofstream &stream);


//------------------------------------------------------------------------------
// вычисление оптимального времени, для ЯП
double Quotient(languages &lang);


#endif //ACS_HW_1_LANGUAGES_H
