#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
#define size 5

class queue
{
private:
    int rear;
    int front;
    int arr[size];
public:

    queue();

    bool isempty();

    void push_back(int); //enqueue

    void pop(); //dequeue

    void showfront();

    void display();


};

#endif // QUEUE_H
