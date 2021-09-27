//
// Created by Islombek on 27.09.2021.
//

#include "languages.h"

languages *In(std::ifstream &stream) {
    auto *lang = new languages;
    std::string type_of_language;
    stream >> type_of_language;

    if (type_of_language == "functional") {
        lang->key = languages::FUNCTIONAL;
        In(lang->func, stream);
        // Обработка невалидного объекта
        if (lang->func.typing_type == functional::ERROR) {
            delete lang;
            return nullptr;
        }
    } else if (type_of_language == "object_oriented") {
        lang->key = languages::OBJECT_ORIENTED;
        In(lang->obj, stream);
        // Обработка невалидного объекта
        if (lang->obj.legacy_type == objectOriented::ERROR) {
            delete lang;
            return nullptr;
        }
    } else if (type_of_language == "procedural") {
        lang->key = languages::PROCEDURAL;
        In(lang->proc, stream);
    } else {
        delete lang;
        return nullptr;
    }
    return lang;
}

//------------------------------------------------------------------------------
// инициализация случайного ЯП
languages *InRnd() {
    auto *lang = new languages;
    auto type_of_language = randomInteger(1, 3);

    if (type_of_language % 3 == 0) {
        lang->key = languages::FUNCTIONAL;
        InRandom(lang->func);
    } else if (type_of_language % 3 == 1) {
        lang->key = languages::OBJECT_ORIENTED;
        InRandom(lang->obj);
    } else {
        lang->key = languages::PROCEDURAL;
        InRandom(lang->proc);
    }
    return lang;
}


//------------------------------------------------------------------------------
// вывод транспорта в поток вывода
void Out(languages &t, std::ofstream &stream) {
    if (t.key == languages::FUNCTIONAL) {
        Out(t.func, stream);
    } else if (t.key == languages::OBJECT_ORIENTED) {
        Out(t.obj, stream);
    } else {
        Out(t.proc, stream);
    }
}


//------------------------------------------------------------------------------
// вычисление оптимального времени, для транспорта
double Quotient(languages &lang) {
    if (lang.key == languages::FUNCTIONAL) {
        return Quotient(lang.func);
    } else if (lang.key == languages::OBJECT_ORIENTED) {
        return Quotient(lang.obj);
    } else {
        return Quotient(lang.proc);
    }
}