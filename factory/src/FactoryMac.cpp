#include <iostream>
#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"


class FactoryMac : public Factory {
    public:
    virtual ProductA* getProductA() {
        std::cout << "MAC is creating Product A" << std::endl;
        ProductA *product = new ProductAforMac();
        return product;
    }

    virtual ProductB* getProductB() {
        std::cout << "MAC is creating Product B" << std::endl;
        ProductB *product = new ProductBforMac();
        return product;
    }

    void describe() {
        std::cout << "This is a concrete factory class for MAC" << std::endl;
    }
};