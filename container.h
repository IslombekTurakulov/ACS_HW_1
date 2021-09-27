//
// Created by Turakulov Islombek on 26.09.2021.
//

#ifndef ACS_HW_1_CONTAINER_H
#define ACS_HW_1_CONTAINER_H

#include "transport.h"
#include <algorithm> // для std::swap

struct container {
    enum {max_len = 10000};
    int len;
    transport *cont[max_len];
};

// Инициализирует пустой контейнер
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c);

// Ввод содержимого контейнера из указанного потока
void In(container &c, std::ifstream &ifst);

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container &c, std::ofstream &ofst);

// Вычисление суммы периметров всех фигур в контейнере
void StraightSelectionSort(container &c);

#endif //ACS_HW_1_CONTAINER_H
