#ifndef CONCRETEPRODUCTB_H
#define CONCRETEPRODUCTB_H

#include <iostream>
#include "ProductB.h"

class ProductBforLinux : public ProductB {
    public:
    void description() {
        std::cout << "This is a concrete product B for Linux" << std::endl;
    }
};

class ProductBforMac : public ProductB {
    public:
    void description() {
        std::cout << "This is a concrete product B for Mac" << std::endl;
    }
};

class ProductBforWindows : public ProductB {
    public:
    void description() {
        std::cout << "This is a concrete product B for Windows" << std::endl;
    }
};

#endif
