//
// Created by Turakulov Islombek on 27.09.2021.
//

#ifndef ACS_HW_1_OBJECTORIENTED_H
#define ACS_HW_1_OBJECTORIENTED_H


#include <fstream>
#include <string>

struct objectOriented {
    uint64_t age;
    uint64_t popularity;
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


#endif //ACS_HW_1_OBJECTORIENTED_H
