//
// Created by Turakulov Islombek on 27.09.2021.
//

#include "procedural.h"
#include "utils.h"
#include <cstring>

void In(procedural &procedural, std::ifstream &stream) {
    std::string name;
    int abstract;
    stream >> name >> procedural.age >> procedural.popularity >> abstract;
    procedural.has_abstract_variables = abstract == 0;
    procedural.name = copyElementFromString(name);
}

void InRandom(procedural &procedural) {
    procedural.name = randomWord(randomInteger(5, 10));
    procedural.age = randomInteger(1940, 2021);
    procedural.popularity = randomInteger(0, 100);
    procedural.has_abstract_variables = randomInteger(0, 2) == 0;
}

void Out(procedural &procedural, std::ofstream &stream) {
    stream << "Procedural: " << "name = " << procedural.name << " popularity = " << procedural.popularity << "%"
           << ", age = " << procedural.age
           << ", has abstract variables = " << (procedural.has_abstract_variables ? "TRUE" : "FALSE");
    stream << " age / name.len() = " << Quotient(procedural) << ".\n";
}

double Quotient(procedural &proc) {
    return static_cast<double>(proc.age) / static_cast<double>(strlen(proc.name));
}