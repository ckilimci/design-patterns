#include <iostream>
#include "Factory.h"
#include "FactoryLinux.cpp"
#include "FactoryMac.cpp"
#include "FactoryWindows.cpp"



int main() {
    Factory *f1 = new FactoryWindows();
    f1->describe();
    f1->getProductA()->description();
    f1->getProductB()->description();
    std::cout << std::endl;

    Factory *f2 = new FactoryLinux();
    f2->describe();
    f2->getProductA()->description();
    f2->getProductB()->description();
    std::cout << std::endl;

    Factory *f3 = new FactoryMac();
    f3->describe();
    f3->getProductA()->description();
    f3->getProductB()->description();
    std::cout << std::endl;
}