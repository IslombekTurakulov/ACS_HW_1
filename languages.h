//
// Created by Turakulov Islombek on 27.09.2021.
//

#ifndef __languages__
#define __languages__

#include "functional.h"
#include "objectOriented.h"
#include "procedural.h"
#include <string>

struct languages {
    enum key {
        FUNCTIONAL, OBJECT_ORIENTED, PROCEDURAL
    };
    key k;
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


#endif //__languages__
