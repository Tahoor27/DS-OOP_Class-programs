#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    queue q;
    /*int val;
    int op;
    while (1)
    {
        cout << "enter 1 to push_back" << endl;
        cout << "enter 2 to pop" << endl;
        cout << "enter 3 to show front" << endl;
        cout << "enter 4 to display queue" << endl;
        cout << "enter 5 to exit" << endl;

        cin >> op;
        switch(op)
        {
            case 1:
         {
            cin >> val;
            cout << "Element added: " << val << endl;
            q.push_back(val);
            break;
         }
        case 2:
        {
            q.pop();
            break;
        }
        case 3:
        {
            q.showfront();
            break;
        }
        case 4:
        {
            q.display();
            break;
        }

        case 5:
        {
            exit(0);
        }
        }

    }*/

    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.push_back(4);

    q.display();
    q.showfront();
    q.pop();

    q.display();

    return 0;
}
