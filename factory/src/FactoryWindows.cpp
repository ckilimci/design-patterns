#include <iostream>
#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"


class FactoryWindows : public Factory {
    public:
    virtual ProductA* getProductA() {
        std::cout << "Product A for Windows is now creating" << std::endl;
        ProductA *toBeSent = new ProductAforWindows();
        return toBeSent;
    }

    virtual ProductB* getProductB() {
        std::cout << "Product B for Windows will be created" << std::endl;
        ProductB *toBeSent = new ProductBforWindows();
        return toBeSent;
    }

    void describe() {
        std::cout << "This is a concrete factory class for Windows" << std::endl;
    }
};

