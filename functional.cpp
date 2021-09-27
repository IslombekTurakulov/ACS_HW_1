//
// Created by Islombek on 27.09.2021.
//

#include <cstring>
#include "functional.h"
#include "utils.h"

void In(functional &func, std::ifstream &stream) {
    std::string typing_type;
    stream >> func.age >> func.popularity >> func.lazy_calculation;
    stream >> typing_type;
    if (typing_type == "dynamic") {
        func.typing_type = func.DYNAMIC;
    } else if (typing_type == "strict") {
        func.typing_type = func.STRICT;
    } else {
        func.typing_type = func.ERROR;
    }
}

void InRandom(functional &func) {
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
    stream << "Functional: " << " popularity = " << func.popularity << "%" << ", age = " << func.age
           << ", typing type = " << func.typing_type << ", lazy calculation = "
           << func.lazy_calculation << "\n";
}


double Quotient(functional &func) {
    return static_cast<double>(func.age) / static_cast<double>(strlen("Functional"));
}