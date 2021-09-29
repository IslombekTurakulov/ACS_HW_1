//
// Created by Turakulov Islombek on 27.09.2021.
//

#ifndef __objectoriented__
#define __objectoriented__


#include <fstream>
#include <string>

struct objectOriented {
    const char *name;
    int age;
    int popularity;
    enum legacy {
        SINGLE, MULTIPLE, INTERFACE, ERROR
    };
    legacy legacy_type;
};

//------------------------------------------------------------------------------
// ввод ооп из потока ввода
void In(objectOriented &obj, std::ifstream &stream);

//------------------------------------------------------------------------------
// инициализация случайного ооп
void InRandom(objectOriented &obj);

//------------------------------------------------------------------------------
// вывод ооп из потока ввода
void Out(objectOriented &obj, std::ofstream &stream);

//------------------------------------------------------------------------------
// вычисление ооп
double Quotient(objectOriented &obj);


#endif //__objectoriented__
