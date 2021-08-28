#ifndef TODOLIST_H
#define TODOLIST_H

class TodoList {
    public:
    virtual std::string show() =0;
    virtual std::string getHTML() =0;
};

#endif