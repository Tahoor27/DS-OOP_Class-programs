#include"stack.h"

stack::stack()
{
    top = -1;
}

bool stack::isempty()
{
    if(top==-1)
    {
        return true;
    }
    else {
        return false;
    }
}

void stack::push_back(int val)
{
    if(top==size-1)
    {
     cout << "stack is full" << endl;
    }
    else {
        top++;
        arr[top]=val;
    }
}

void stack::pop()
{
    if(isempty())
    {
        cout << "stack is empty" << endl;
    }
    else {
        top--;
    }
}

void stack::showTop()
{
    if(isempty())
    {
        cout << "stack is empty" << endl;
    }
    else {
        cout << "The top element is: " << arr[top] << endl;
    }
}

void stack::display()
{
    if(isempty())
    {
        cout << "stack is empty" << endl;
    }
    else {
        for(int i = 0; i <= top;i++)
        {
            cout << arr[i] << endl;
        }
    }
}
