#include "function.h"
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    freopen("test.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    List_stack L_stack;
    char command[10];
    int n;
    while (cin >> command)
    {
        if (strcmp(command, "pop") == 0)
        {
            L_stack.pop();
        }
        else if (strcmp(command, "push") == 0)
        {
            cin >> n;
            L_stack.push(n);
        }
        else if (strcmp(command, "print") == 0)
        {
            L_stack.print();
            cout << endl;
        }
    }
    return 0;
}
