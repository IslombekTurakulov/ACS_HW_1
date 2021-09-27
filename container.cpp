//
// Created by Turakulov Islombek on 26.09.2021.
//

//------------------------------------------------------------------------------
// container.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(container &c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c) {
    for (int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
// я решил игнорировать невалидные обьекты
void In(container &c, std::ifstream &stream) {
    while (!stream.eof()) {
        if ((c.cont[c.len] = In(stream)) != 0) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
// InRnd по идее никогда не возвращает nullptr
void InRnd(container &c, int size) {
    while (c.len < size) {
        if ((c.cont[c.len] = reinterpret_cast<languages *>(rand() % 100 + 1)) != nullptr) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Out(container &c, std::ofstream &stream) {
    stream << "Container contains " << c.len << " elements." << std::endl;
    for (int i = 0; i < c.len; i++) {
        stream << i << ": ";
        Out(*(c.cont[i]), stream);
    }
}


//------------------------------------------------------------------------------
// Сортировка прямым выбором минимума. Сортирует контейнер по возрастанию
void StraightSelectionSort(container &c) {
    for (int i = 0; i < c.len; ++i) {
        int min_index = i; // первые i мы уже отсортировали
        for (int j = i; j < c.len; ++j) {
            if (Quotient(*(c.cont[j])) < Quotient(*(c.cont[min_index]))) {
                min_index = j;
            }
        }
        // мы нашли индекс минимального не отсортированного элемента
        std::swap(c.cont[i], c.cont[min_index]);
        // устанавливаем минимум, на первую не отсортированную позицию тем самым делаем её сортирванной
    }
}