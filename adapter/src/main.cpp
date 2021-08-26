#include <iostream>
#include "Target.h"
#include "Adapter.cpp"
#include "Adaptee.cpp"

int main() {
    Target *target = new Adapter(new Adaptee);
    std::cout << "Target is created in the client." << std::endl;
    std::cout << "Calling the request of target." << std::endl;
    target->request();
    std::cout << "The request of target is completed." << std::endl;
    std::cout << "That's all for the adapter pattern." << std::endl;
}