#include <iostream>
#include <list>
#include "TodoList.h"
#include "Task.cpp"
#include "Todo.cpp"


int main() {
    std::cout << "Welcome to the TO DO Application" << std::endl;

    TodoList *t1 = new Task("First Task");
    TodoList *t2 = new Task("Second Task");
    TodoList *t3 = new Task("Third Task");



    std::list<TodoList*> l;

    l.push_back(t1);

    TodoList *s1 = new Task("First Task for s");
    TodoList *s2 = new Task("Second Task for s");
    TodoList *s3 = new Task("Third Task for s");



    std::list<TodoList*> ls;

    ls.push_back(s1);
    ls.push_back(s2);
    ls.push_back(s3);

    TodoList *todo2 = new Todo("S To do", ls);

    l.push_back(todo2);
    l.push_back(t2);
    l.push_back(t3);

    TodoList *todo1 = new Todo("First To do", l);
    
    std::cout << todo1->show() << std::endl;

    std::cout << todo1->getHTML() << std::endl;
    
}