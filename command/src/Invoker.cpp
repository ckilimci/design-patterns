#ifndef INVOKER_CPP
#define INVOKER_CPP

#include <iostream>
#include "Command.h"
#include "CommandList.cpp"

class Invoker {
    Command *onCommand;
    Command *offCommand;
    Command *dimmUpCommand;
    Command *dimmDownCommand;
    public:
    Invoker(Command *on, Command *off, Command *up, Command *down) {
        onCommand = on;
        offCommand = off;
        dimmUpCommand = up;
        dimmDownCommand = down;
    }

    void pressOn() {
        onCommand->execute();
    }

    void pressOff() {
        offCommand->execute();
    }

    void pressDimmUp() {
        dimmUpCommand->execute();
    }

    void pressDimmDown() {
        dimmDownCommand->execute();
    }
};

#endif