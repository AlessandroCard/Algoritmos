#include "list.h"
#include <iostream>

using namespace std;

int main()
{
    list lista(98);

    lista.insert(56);
    lista.insert(12);

    lista.printlist();

    lista.removal(98);
    lista.removal(12);

    lista.printlist();

    return 0;
}
