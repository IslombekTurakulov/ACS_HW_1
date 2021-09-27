#include <iostream>
#include <cstring>
#include "utils.h"
#include "container.h"

void first_error_message() {
    std::cout << "incorrect command line!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n";
}

void second_error_message() {
    std::cout << "incorrect qualifier value!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n";
}

void third_error_message(int size) {
    std::cout << "incorrect number of items = "
              << size
              << ". Set 0 < number <= 10000\n";
}

int main(int argc, char *argv[]) {
    if (argc != 5) {
        first_error_message();
        return 1;
    }

    std::cout << "Start" << std::endl;
    container c{};
    Init(c);

    if (!strcmp(argv[1], "-f")) {
        std::ifstream in_stream(argv[2]);
        In(c, in_stream);
    } else if (!strcmp(argv[1], "-n")) {
        auto size = std::atoi(argv[2]);

        if ((size < 1) || (size > 10000)) {
            third_error_message(size);
            return 3;
        }
        srand(static_cast<unsigned int>(time(0)));
        InRnd(c, size);
    } else {
        second_error_message();
        return 2;
    }

    std::ofstream of_stream(argv[3]);
    of_stream << "Input container:\n";
    Out(c, of_stream);

    std::ofstream out_stream(argv[4]);
    StraightSelectionSort(c);
    out_stream << "Sorted container:\n";
    Out(c, out_stream);
    Clear(c);
    std::cout << "Stop" << std::endl;
    return 0;
}
