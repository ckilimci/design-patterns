#include <iostream>
#include "Invoker.cpp"
#include "Light.cpp"
#include "CommandList.cpp"


int main() {

    Light * light = new Light();
    Command *onCommand = new LightOnCommand(light);
    Command *offCommand = new LightOffCommand(light);
    Command *dimmUpCommand = new LightDimmUpCommand(light);
    Command *dimmDownCommand = new LightDimmDownCommand(light);

    Invoker *remoteControl = new Invoker(onCommand, offCommand, dimmUpCommand, dimmDownCommand);

    remoteControl->pressOn();
    for (int i=1; i<=10; i++) {
        remoteControl->pressDimmDown();
    }
    remoteControl->pressOff();
    remoteControl->pressDimmDown();
    for (int i=1; i<=260; i++) {
        remoteControl->pressDimmUp();
    }
    remoteControl->pressOff();

}