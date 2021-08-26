#ifndef ADAPTEE_CPP
#define ADAPTEE_CPP

#include <iostream>

class Adaptee {
    public:
    void specificRequest() {
        std::cout << "This is the specific request in the Adaptee" << std::endl;
    }
};

#endif