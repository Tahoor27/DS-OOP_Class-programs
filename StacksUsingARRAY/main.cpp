#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stack o;

    o.push_back(1);
    o.push_back(2);
    o.push_back(3);
    o.push_back(4);

    o.display();

    o.pop();
    cout << endl;

    o.display();

    o.showTop();


    return 0;

}
