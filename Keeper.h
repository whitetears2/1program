#pragma once
#include "Base.h"

class Keeper {
private:
    Base** objects;
    int count;

public:
    Keeper();
    ~Keeper();

    // Копирование временно запрещено:
    // глубокое копирование добавим на следующем этапе.
    Keeper(const Keeper&) = delete;
    Keeper& operator=(const Keeper&) = delete;

    void showAll() const;
    int getCount() const;
};