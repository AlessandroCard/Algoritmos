#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
    int r = 4, value;
    stack list;

    do {
        cout << "[1] Inserir um valor" << endl;
        cout << "[2] Remover um valor" << endl;
        cout << "[3] Imprimir a lista" << endl;
        cout << "[4] Sair" << endl;
        cin >> r;

        switch (r) {
            case 1:
                cout << "Digite o valor a ser inserido" << endl;
                cin >> value;
                if(list.insert(value))
                    cout << "Valor inserido" << endl;
                else
                    cout << "Erro, valor nao inserido" << endl;
                break;

            case 2:
                cout << list.removal() << endl;
                break;

            case 3:
                list.printlist();
                break;
        }

    }while (r != 4);

    return 0;
}
