#include <iostream>
#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

class FactoryLinux : public Factory {
    public:
    virtual ProductA* getProductA() {
        std::cout << "Product A for Linux is creating" << std::endl;
        ProductA *toBeSent = new ProductAforLinux();
        return toBeSent;
    }

    virtual ProductB* getProductB() {
        std::cout << "Product B for Linux is creating" << std::endl;
        ProductB *toBeSent = new ProductBforLinux();
        return toBeSent;
    }

    void describe() {
        std::cout << "This is a concrete factory class for Linux" << std::endl;
    }
};