//
// Created by Turakulov Islombek on 27.09.2021.
//
#include <cstring>
#include "objectOriented.h"
#include "utils.h"

void In(objectOriented &obj, std::ifstream &stream) {
    std::string legacy_input;
    stream >> obj.age >> obj.popularity;
    stream >> legacy_input;
    if (legacy_input == "single") {
        obj.legacy_type = obj.SINGLE;
    } else if (legacy_input == "multiple") {
        obj.legacy_type = obj.MULTIPLE;
    } else if (legacy_input == "interface") {
        obj.legacy_type = obj.INTERFACE;
    } else {
        obj.legacy_type = obj.ERROR;
    }
}

void InRandom(objectOriented &obj) {
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
    stream << "Object Oriented:" << " popularity = " << obj.popularity << "%"
           << ", age = " << obj.age << ", legacy = " << obj.legacy_type << "\n";
}

double Quotient(objectOriented &obj) {
    return static_cast<double>(obj.age) / static_cast<double>(strlen("Object Oriented"));
}
