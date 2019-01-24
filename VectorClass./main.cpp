#include <iostream>
#include "myvec.h"
using namespace std;

int main()
{
    myVec vec;
    int tmp;

    while (1)
    {
        cin >> tmp;
        if (tmp==-1)
            break;
        vec.push_back(tmp);
    }

   cout << "YOU HAVE ENTERED ELEMENTS = " << vec.size() << endl;

   for (int i = 0; i<vec.size();i++)
       cout << vec[i] << endl;

   cout << endl;
   return 0;
}
