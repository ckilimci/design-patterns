#ifndef LIGHT_CPP
#define LIGHT_CPP

#include <iostream>

class Light {
    int min_light = 0;
    int max_light = 255;
    int status = min_light;
    public:
    Light() {
        std::cout << "Light is created" << std::endl;
    }

    void turnOn() {
        std::cout << "Turning on the light" << std::endl;
        status = 255;
    }

    void turnOff() {
        std::cout << "Turning off the light" << std::endl;
        status = 0;
    }

    void dimmUp() {
        std::cout << "Dimming up the light" << std::endl;
        if (status < max_light) {
            status = status + 1;
        } else {
            std::cout << "The light is already at max" << std::endl;
            status = max_light;
        }
    }

    void dimmDown() {
        std::cout << "Dimming down the light" << std::endl;
        if (status > min_light) {
            status = status - 1;
        } else {
            std::cout << "The light is already off" << std::endl;
            status = min_light;
        }
    }


};

#endif