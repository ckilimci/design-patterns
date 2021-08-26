#ifndef COMMANDLIST_CPP
#define COMMANDLIST_CPP

#include <iostream>
#include "Command.h"
#include "Light.cpp"

class LightOnCommand : public Command {
    Light * light;
    public:
    LightOnCommand(Light *l) {
        light = l;
    }
    void execute() {
        light->turnOn();
    }

    void unexecute() {
        light->turnOff();
    }
};

class LightOffCommand : public Command {
    Light * light;
    public:
    LightOffCommand(Light * l) {
        light = l;
    }
    void execute() {
        light->turnOff();
    }

    void unexecute() {
        light->turnOn();
    }
};

class LightDimmUpCommand : public Command {
    Light * light;
    public:
    LightDimmUpCommand(Light * l) {
        light = l;
    }
    void execute() {
        light->dimmUp();
    }

    void unexecute() {
        light->dimmDown();
    }
};

class LightDimmDownCommand : public Command {
    Light * light;
    public:
    LightDimmDownCommand(Light * l) {
        light = l;
    }
    void execute() {
        light->dimmDown();
    }

    void unexecute() {
        light->dimmUp();
    }
};

#endif