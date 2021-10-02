//
// Created by Turakulov Islombek on 27.09.2021.
//

#include "languages.h"
#include "utils.h"

languages *In(std::ifstream &stream) {
    languages *lang;
    char type_of_language[100];
    stream >> type_of_language;

    if (!strcmp(type_of_language, "functional")) {
        lang = new languages;
        lang->k = languages::FUNCTIONAL;
        In(lang->func, stream);
        // Обработка невалидного объекта
        if (lang->func.typing_type == functional::ERROR) {
            delete lang;
            return nullptr;
        }
    } else if (!strcmp(type_of_language, "object_oriented")) {
        lang = new languages;
        lang->k = languages::OBJECT_ORIENTED;
        In(lang->obj, stream);
        // Обработка невалидного объекта
        if (lang->obj.legacy_type == objectOriented::ERROR) {
            delete lang;
            return nullptr;
        }
    } else if (!strcmp(type_of_language, "procedural")) {
        lang = new languages;
        lang->k = languages::PROCEDURAL;
        In(lang->proc, stream);
    } else {
        lang = new languages;
        delete lang;
        return nullptr;
    }
    return lang;
}

//------------------------------------------------------------------------------
// инициализация случайного ЯП
languages *InRnd() {
    auto *lang = new languages;
    auto type_of_language = randomInteger(1, 4);

    if (type_of_language % 3 == 0) {
        lang->k = languages::FUNCTIONAL;
        InRandom(lang->func);
    } else if (type_of_language % 3 == 1) {
        lang->k = languages::OBJECT_ORIENTED;
        InRandom(lang->obj);
    } else {
        lang->k = languages::PROCEDURAL;
        InRandom(lang->proc);
    }
    return lang;
}


//------------------------------------------------------------------------------
// вывод транспорта в поток вывода
void Out(languages &t, std::ofstream &stream) {
    if (t.k == languages::FUNCTIONAL) {
        Out(t.func, stream);
    } else if (t.k == languages::OBJECT_ORIENTED) {
        Out(t.obj, stream);
    } else {
        Out(t.proc, stream);
    }
}


//------------------------------------------------------------------------------
// вычисление year / name.len()
double Quotient(languages &lang) {
    if (lang.k == languages::FUNCTIONAL) {
        return Quotient(lang.func);
    } else if (lang.k == languages::OBJECT_ORIENTED) {
        return Quotient(lang.obj);
    } else {
        return Quotient(lang.proc);
    }
}