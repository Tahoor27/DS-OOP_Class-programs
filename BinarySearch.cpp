#include <iostream>
using namespace std;

int binarySearch(int A[], int t, int n)
{

    int start = 0;
    int end = t-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(A[mid]==n)
        {
           return mid;
        }
        else {
                    if(n>A[mid])
                    {
                        start = mid+1;

                    }
                    else if(n<A[mid])
                    {
                        end = mid - 1;
                    }
        }
    }


}

int main()
{
    int arr[5] = {1,3,5,4,2};
    int temp, e;
    for (int i=0; i<5; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i=0; i<=5; i++)
    {
        for (int j=0; j<=5; j++)
        {
            if(arr[j] > arr[j+1])
            {
             temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1]= temp;
            }
        }
    }

    cout << "array after sorting: " << endl;
    for (int i=0; i<5; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Enter the number you want to find: " << endl;
    cin >> e;
    cout << "The entered number is at index: " << binarySearch(arr,5,e) << endl;
    return 0;
}
