//
// Created by Turakulov Islombek on 27.09.2021.
//

#include <cstring>
#include <iostream>
#include "procedural.h"
#include "utils.h"


void In(procedural &procedural, std::ifstream &stream) {
    bool has_abstract_variable;
    stream >> procedural.age >> procedural.popularity >> has_abstract_variable;
    procedural.has_abstract_variables = has_abstract_variable;
}

void InRandom(procedural &procedural) {
    procedural.age = randomInteger(1940, 2021);
    procedural.popularity = randomInteger(0, 100);
    procedural.has_abstract_variables = randomInteger(0, 1) == 0;
}

void Out(procedural &procedural, std::ofstream &stream) {
    stream << "Procedural: " << " popularity = " << procedural.popularity << "%" << ", age = " << procedural.age
           << ", has abstract variables = " << procedural.has_abstract_variables << "\n";
}

double Quotient(procedural &obj) {
    return static_cast<double>(obj.age) / static_cast<double>(strlen("Procedural"));
}