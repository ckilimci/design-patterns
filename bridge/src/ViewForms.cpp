#ifndef VIEWFORM_CPP
#define VIEWFORM_CPP

#include <iostream>
#include "View.h"

class LongView : public View {
    public:
    LongView(Resource *r) {
        resource = r;
    }
    void show() {
        std::cout << "Title: " << resource->headTitle() << std::endl;
        std::cout << "Picture: " << resource->image() << std::endl;
        std::cout << "Snippet: " << resource->snippet() << std::endl;
        std::cout << "URL: " << resource->url() << std::endl;
    }
};

class ShortView : public View {
    public:
    ShortView(Resource *r) {
        resource = r;
    }
    void show() {
        std::cout << "Title: " << resource->headTitle() << std::endl;
        std::cout << "Picture: " << resource->image() << std::endl;
        std::cout << "URL: " << resource->url() << std::endl;
    }
};

class NotificationView : public View {
    public:
    NotificationView(Resource *r) {
        resource = r;
    }
    void show() {
        std::cout << "Title: " << resource->headTitle() << std::endl;
    }
};

#endif