#ifndef PRODUCTB_H
#define PRODUCTB_H

class ProductB {
    public:
    ProductB() {
        std::cout << "ProductB created." << std::endl;
    }

    virtual void description() { };
};

#endif