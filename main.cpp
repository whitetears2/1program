#include <iostream>
#include <limits>
#include "Keeper.h"

int main() {
    Keeper keeper;
    int choice;

    while (true) {
        std::cout << "\n--- Главное меню ---\n";
        std::cout << "1. Показать все объекты\n";
        std::cout << "2. Показать количество объектов\n";
        std::cout << "0. Выход\n";
        std::cout << "Выберите действие: ";

        if (!(std::cin >> choice)) {
            if (std::cin.eof()) {
                break;
            }

            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            std::cout << "Ошибка: введите целое число.\n";
            continue;
        }

        switch (choice) {
        case 1:
            keeper.showAll();
            break;

        case 2:
            std::cout << "Количество объектов: "
                << keeper.getCount() << '\n';
            break;

        case 0:
            return 0;

        default:
            std::cout << "Такого пункта меню нет.\n";
        }
    }

    return 0;
}