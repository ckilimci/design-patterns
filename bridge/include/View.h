#ifndef VIEW_H
#define VIEW_H

#include "Resource.h"

#include <iostream>

class View {
    public:
    Resource* resource;

    virtual void show() =0;
};

#endif