//
// Created by Islombek on 27.09.2021.
//

#ifndef ACS_HW_1_PROCEDURAL_H
#define ACS_HW_1_PROCEDURAL_H

#include <fstream>
#include <string>

struct procedural {
    uint64_t age;
    uint64_t popularity;
    bool has_abstract_variables;
};


void In(procedural &procedural, std::ifstream &stream);

void InRandom(procedural &procedural);

void Out(procedural &procedural, std::ofstream &stream);

double Quotient(procedural &proc);

#endif //ACS_HW_1_PROCEDURAL_H
