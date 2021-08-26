#ifndef ADDONLIST_CPP
#define ADDONLIST_CPP

#include <iostream>
#include "AddonDecorator.h"

class Caramel : public AddonDecorator {
    int caramelCost = 6;
    public:
    Caramel(Beverage *b) {
        beverage = b;
    }
    void getDescription() {
        beverage->getDescription();
        std::cout << " + Caramel";
    }

    int cost() {
        return beverage->cost() + caramelCost;
    }
};

class Soy : public AddonDecorator {
    int soyCost = 3;
    public:
    Soy(Beverage *b) {
        beverage = b;
    }
    void getDescription() {
        beverage->getDescription();
        std::cout << " + Soy";
    }

    int cost() {
        return beverage->cost() + soyCost;
    }
};

class Water : public AddonDecorator {
    int waterCost = 1;
    public:
    Water(Beverage *b) {
        beverage = b;
    }
    void getDescription() {
        beverage->getDescription();
        std::cout << " + Water";
    }

    int cost() {
        return beverage->cost() + waterCost;
    }
};

#endif