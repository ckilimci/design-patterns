#ifndef CONCRETEPRODUCTA_H
#define CONCRETEPRODUCTA_H

#include <iostream>
#include "ProductA.h"

class ProductAforLinux : public ProductA {
    public:
    void description() {
        std::cout << "This is a concrete product A for Linux" << std::endl;
    }
};

class ProductAforMac : public ProductA {
    public:
    void description() {
        std::cout << "This is a concrete product A for Mac" << std::endl;
    }
};

class ProductAforWindows : public ProductA {
    public:
    void description() {
        std::cout << "This is a concrete product A for Windows" << std::endl;
    }
};

#endif