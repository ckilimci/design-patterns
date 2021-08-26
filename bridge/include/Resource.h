#ifndef RESOURCE_H
#define RESOURCE_H

#include <iostream>

class Resource {
    public:
    virtual std::string headTitle() =0;
    virtual std::string image() =0;
    virtual std::string snippet() =0;
    virtual std::string url() =0;
};

#endif