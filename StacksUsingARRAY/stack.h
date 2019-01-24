#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#define size 5


class stack
{
public:

    stack();

    bool isempty();

    void push_back(int);

    void pop();

    void showTop();

    void display();

private:
    int top;
    int arr[size];
};

#endif // STACK_H
