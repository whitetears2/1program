#include "Base.h"

Base::Base() {
    std::cout << "Base: конструктор без параметров\n";
}

Base::Base(const Base&) {
    std::cout << "Base: конструктор копирования\n";
}

Base::~Base() {
    std::cout << "Base: деструктор\n";
}