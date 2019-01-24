#include "queue.h"

queue::queue()
{

    rear = -1;
    front = -1;
}

bool queue::isempty()
{
    if (rear==-1 && front ==-1)
    {
        return true;
    }
    else {
     return false;
    }
}

void queue::push_back(int val) //enqueue
{
    if (rear==size-1)
    {
        cout << "queue is full" << endl;
    }
    else {
        if (front==-1)
            front = 0;
        rear++;
        arr[rear]=val;
    }
}

void queue::pop() //dequeue
{
    if(isempty())
    {
        cout << "queue is empty" << endl;
    }
    else {
        if (front == rear)
            front = rear = -1;
        else {
            front ++;
        }
    }
}

void queue::showfront()
{
    if(isempty())
        cout << "queue is empty" << endl;
    else
        cout << "The front element of the queue is: " << arr[front] << endl;
}

void queue::display()
{
    if(isempty())
        cout << "queue is empty" << endl;
    else {
        for (int i=front; i<=rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
}
