//
// Created by Turakulov Islombek on 27.09.2021.
//

#include "functional.h"
#include "utils.h"
#include <cstring>

void In(functional &func, std::ifstream &stream) {
    int typing_type;
    std::string name_temp;
    stream >> name_temp >> func.age >> func.popularity >> func.lazy_calculation >> typing_type;
    func.name = copyElementFromString(name_temp);
    if (typing_type == 0) {
        func.typing_type = func.DYNAMIC;
    } else if (typing_type == 1) {
        func.typing_type = func.STRICT;
    } else {
        func.typing_type = func.ERROR;
    }
}

void InRandom(functional &func) {
    func.name = randomWord(randomInteger(4, 10));
    func.age = randomInteger(1950, 2021);
    func.popularity = randomInteger(0, 100);
    int kind = randomInteger(1, 3);
    if (kind == 1) {
        func.typing_type = func.DYNAMIC;
    } else if (kind == 2) {
        func.typing_type = func.STRICT;
    } else {
        func.typing_type = func.ERROR;
    }
}

void Out(functional &func, std::ofstream &stream) {
    stream << "Functional: " << "name = " << func.name << " popularity = " << func.popularity << "%" << ", age = "
           << func.age
           << ", typing type = " << (func.typing_type == 0 ? "DYNAMIC" : func.typing_type == 1 ? "STRICT" : "ERROR") << ", lazy calculation = "
           << (func.lazy_calculation ? "TRUE" : "FALSE");
    stream << " age / name.len() = " << Quotient(func) << ".\n";
}


double Quotient(functional &func) {
    return static_cast<double>(func.age) / static_cast<double>(strlen(func.name));
}