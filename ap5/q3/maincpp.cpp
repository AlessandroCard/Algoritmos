#include "queuecpp.h"
#include <iostream>

using namespace std;

int main()
{
    queue fila;

    fila.insert(90);
    fila.insert(45);
    fila.insert(28);
    fila.insert(92);

    for(int i = 0; i < 4; i++)
        cout << fila.removal() << endl;

    return 0;
}
