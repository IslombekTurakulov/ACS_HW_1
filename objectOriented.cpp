//
// Created by Turakulov Islombek on 27.09.2021.
//
#include <cstring>
#include "objectOriented.h"
#include "utils.h"

void In(objectOriented &obj, std::ifstream &stream) {
    int legacy_input;
    std::string name_temp;
    stream >> name_temp >> obj.age >> obj.popularity >> legacy_input;
    obj.name = copyElementFromString(name_temp);
    if (legacy_input == 0) {
        obj.legacy_type = obj.SINGLE;
    } else if (legacy_input == 1) {
        obj.legacy_type = obj.MULTIPLE;
    } else if (legacy_input == 2) {
        obj.legacy_type = obj.INTERFACE;
    } else {
        obj.legacy_type = obj.ERROR;
    }
}

void InRandom(objectOriented &obj) {
    obj.name = randomWord(randomInteger(4, 10));
    obj.age = randomInteger(1950, 2021);
    obj.popularity = randomInteger(0, 100);
    int kind = randomInteger(1, 3);
    if (kind == 1) {
        obj.legacy_type = obj.SINGLE;
    } else if (kind == 2) {
        obj.legacy_type = obj.MULTIPLE;
    } else {
        obj.legacy_type = obj.INTERFACE;
    }
}

void Out(objectOriented &obj, std::ofstream &stream) {
    stream << "Object Oriented:" << " name = " << obj.name << " popularity = " << obj.popularity << "%"
           << ", age = " << obj.age << ", legacy = "
           << (obj.legacy_type == 0 ? "SINGLE" : obj.legacy_type == 1 ? "MULTIPLE" : obj.legacy_type == 2 ? "INTERFACE"
           : "ERROR");
    stream << " age / name.len() = " << Quotient(obj) << ".\n";
}

double Quotient(objectOriented &obj) {
    return static_cast<double>(obj.age) / static_cast<double>(strlen(obj.name));
}
