#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int t, int n)
{
    int start, end, pos;
    start = 0;
    end = t - 1;
    while (start<=end&&n>=arr[start]&&n<=arr[end])
    {
        pos = start + (((double)(end-start)/(arr[end]-arr[start])) * (n - arr[start]));

        if (arr[pos]==n)
        {
            return pos;
        }

        else if(n>arr[pos])
        {
            start = pos + 1;
        }
        else {
            end = pos - 1;
        }
    }

    return -1;
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
        cout << "The entered number is at index: " << interpolationSearch(arr,4,e) << endl;
        return 0;
}
