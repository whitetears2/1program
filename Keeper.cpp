#include "Keeper.h"
#include <iostream>

Keeper::Keeper() : objects(nullptr), count(0) {
    std::cout << "Keeper: конструктор без параметров\n";
}

Keeper::~Keeper() {
    for (int i = 0; i < count; ++i) {
        delete objects[i];
    }

    delete[] objects;

    std::cout << "Keeper: деструктор\n";
}

void Keeper::showAll() const {
    if (count == 0) {
        std::cout << "Хранилище пустое.\n";
        return;
    }

    for (int i = 0; i < count; ++i) {
        std::cout << "\nОбъект №" << i + 1 << '\n';
        objects[i]->print();
    }
}

int Keeper::getCount() const {
    return count;
}