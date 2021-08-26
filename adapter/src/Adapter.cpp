#ifndef ADAPTER_CPP
#define ADAPTER_CPP

#include <iostream>
#include "Target.h"
#include "Adaptee.cpp"

class Adapter : public Target {
    Adaptee * adaptee;

    public:
    Adapter(Adaptee * a) {
        adaptee = a;
    }
    void request() {
        std::cout << "Calling the specific request from the Adaptee" << std::endl;
        adaptee->specificRequest();
    }
};

#endif