#ifndef ADDONDECORATOR_H
#define ADDONDECORATOR_H

#include <iostream>
#include "Beverage.h"

class AddonDecorator : public Beverage {
    public:
    Beverage *beverage = NULL;
};

#endif