#ifndef COFFEE_CPP
#define COFFEE_CPP

#include <iostream>
#include "Beverage.h"

class Decaf : public Beverage {
    public:
    void getDescription() {
        std::cout << "Decaf";
    }

    int cost() {
        return 10;
    }
};

class Espresso : public Beverage {
    public:
    void getDescription() {
        std::cout << "Espresso";
    }

    int cost() {
        return 15;
    }
};

#endif