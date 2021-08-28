#ifndef TODO_CPP
#define TODO_CPP

#include <iostream>
#include <list>
#include "TodoList.h"

class Todo : public TodoList {
    std::string todo;
    std::list<TodoList*> todolist;
    public:
    Todo(std::string t) {
        todo = t;
    }

    Todo(std::string t, std::list<TodoList*> l) {
        todo = t;
        todolist = l;
    }

    std::string show() {
        std::string output = "\n" + todo + "\n";
        for (TodoList* item : todolist) {
            output = output + "\\_>" + item->show() + "\n";
        }
        return output;
    }

    std::string getHTML() {
        std::string html = todo + "\n<ul>\n";
        for (TodoList* item : todolist) {
            html = html + "<li>" + item->getHTML() + "</li>\n";
        }
        html = html + "</ul>";
        return html;
    }
};


#endif