#include <iostream>
#include "Coffee.cpp"
#include "AddonList.cpp"


int main() {
    std::cout << "Hello to bizz buzz coffee.." << std::endl;

    Beverage *simpleCoffee = new Espresso();
    std::cout << "This is a simple coffee: ";
    simpleCoffee->getDescription();
    std::cout << " and it costs: " << simpleCoffee->cost() << std::endl;

    Beverage *americano = new Water(simpleCoffee);
    std::cout << "This is an americano: ";
    americano->getDescription();
    std::cout << " and it costs: " << americano->cost() << std::endl;

    Beverage *aCoffee = new Caramel(new Soy(new Water (new Decaf)));
    std::cout << "This is a coffee: ";
    aCoffee->getDescription();
    std::cout << " and it costs: " << aCoffee->cost() << std::endl;

    Beverage *anotherCoffee = new Caramel(new Caramel(new Water (new Espresso)));
    std::cout << "This is an another coffee: ";
    anotherCoffee->getDescription();
    std::cout << " and it costs: " << anotherCoffee->cost() << std::endl;
}