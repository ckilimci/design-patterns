#ifndef MEDIARESOURCE_CPP
#define MEDIARESOURCE_CPP

#include <iostream>
#include "Resource.h"

class Artist : public Resource {
    std::string name;
    std::string picture;
    std::string bio;
    std::string URL;
    public:
    Artist(std::string n, std::string p, std::string b, std::string u) {
        name = n;
        picture = p;
        bio = b;
        URL = u;
    }
    std::string headTitle() {
        return name;
    }
    std::string image() {
        return picture;
    }
    std::string snippet() {
        return bio;
    }
    std::string url() {
        return URL;
    }
};

class Book : public Resource {
    std::string title;
    std::string frontPage;
    std::string backWords;
    std::string URL;
    public:
    Book(std::string t, std::string f, std::string b, std::string u) {
        title = t;
        frontPage = f;
        backWords = b;
        URL = u;
    }
    std::string headTitle() {
        return title;
    }
    std::string image() {
        return frontPage;
    }
    std::string snippet() {
        return backWords;
    }
    std::string url() {
        return URL;
    }
};

#endif