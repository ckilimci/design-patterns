#ifndef PRODUCTA_H
#define PRODUCTA_H

#include <iostream>

class ProductA {
    public:
    ProductA() {
        std::cout << "ProductA created." << std::endl;
    }

    virtual void description() { };

};

#endif