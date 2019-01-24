#ifndef MYVEC_H
#define MYVEC_H

#include <iostream>
using namespace std;

class myVec
{
    int vsize, maxSize;
    int * arr;
    void alloc_new();

public:

    myVec();
    myVec(int);
    myVec(const myVec&);
    ~myVec();
    void push_back(int);
    int size();
    int operator[](int);
    int at(int i);

};

#endif // MYVEC_H
