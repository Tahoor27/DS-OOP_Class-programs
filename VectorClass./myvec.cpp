#include "myVec.h"

myVec::myVec()
{
    maxSize = 5;
    arr = new int[maxSize];
    vsize = 0;
}

myVec::myVec(int i)
{
    maxSize = i;
    arr = new int[maxSize];
    vsize = 0;
}

myVec::myVec(const myVec&){}

myVec::~myVec()
{
    delete [] arr;
}

void myVec::push_back(int i)
{

   if (vsize+1>maxSize)
      alloc_new();



    arr[vsize] = i;
    vsize++;
}

int myVec::operator[](int i)
{
    return arr[i];
}

int myVec::at(int i)
{
    if (i<vsize)
        return arr[i];
    throw(10);
}

int myVec::size()
{
    return vsize;
}

void myVec::alloc_new()
{
    maxSize = vsize * 2;
    int *temp = new int [maxSize];
    for (int i=0; i<vsize; i++)
    {
        temp[i]=arr[i];
    }

    delete [] arr;

    arr = temp;

}
