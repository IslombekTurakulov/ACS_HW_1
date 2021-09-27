#include <iostream>
#include <cstring>
#include "utils.h"
#include "container.h"

void errMessage1() {
    std::cout << "incorrect command line!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n";
}

void errMessage2() {
    std::cout << "incorrect qualifier value!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n";
}

void errMessage3(int size) {
    std::cout << "incorrect number of items = "
              << size
              << ". Set 0 < number <= 10000\n";
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string s1;
    getline(std::cin, s1)
    return 0;
}
