#ifndef FACTORY_H
#define FACTORY_H

#include "ProductA.h"
#include "ProductB.h"


class Factory {
    public:
    Factory() {};
    virtual ProductA* getProductA() { return NULL; }
    virtual ProductB* getProductB() { return NULL; } 

    virtual void describe() {
        std::cout << "This is the default describe function for Factory" << std::endl;
    }
};

#endif