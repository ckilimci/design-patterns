#ifndef BEVERAGE_H
#define BEVERAGE_H

class Beverage {
    public:
    virtual void getDescription() =0;
    virtual int cost() =0;
};

#endif