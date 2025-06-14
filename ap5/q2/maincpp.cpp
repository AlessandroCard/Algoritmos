#include "stackcpp.h"
#include <iostream>

using namespace std;

int main()
{
    list stack;

    stack.insert(45);
    stack.insert(56);
    stack.insert(98);
    stack.insert(12);

    cout << stack.removal() << endl;
    cout << stack.removal() << endl;
    cout << stack.removal() << endl;
    cout << stack.removal() << endl;

    return 0;
}
