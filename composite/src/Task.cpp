#ifndef TASK_CPP
#define TASK_CPP

#include <iostream>
#include "TodoList.h"

class Task : public TodoList {
    std::string task;
    public:
    Task(std::string t) {
        task = t;
    }

    std::string show() {
        return task;
    }

    std::string getHTML() {
        return task;
    }
};

#endif