#include <iostream>
using namespace std;

int linearSearch(int A[], int t, int n)
{
    int index = -1;
    for (int i=0;i< t; i++)
    {
        if(A[i]==n)
        {
            index = i;
            break;
        }

    }

    return index;
}

int main()
{
    const int t= 5;
    int e;
    int arr[]={1,2,3,4,5};
    cout << "our array is: " << endl;
    for (int i=0;i<5;i++)
    {
        cout << arr[i] << endl;
    }

    cout << "enter the number you want to find: " << endl;
    cin >> e;
    cout << "the index of the found element = " << linearSearch(arr,t,e);
    return 0;
}
