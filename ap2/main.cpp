#include <iostream>
#include "q1.h"

using namespace std;

int main()
{
    int r = 0;
    list funcionarios;

    do
    {
        funcionario contratado;
        int id, aux;
        float sal;

        cout << "[1] Cadastar funcionario" << endl;
        cout << "[2] Remover funcionario do cadastro" << endl;
        cout << "[3] Aumentar o salario" << endl;
        cout << "[4] Imprimir folha de pagamento" << endl;
        cout << "[5] Sair" << endl;

        cin >> r;

        switch (r)
        {
            case 1:
                cout << "Digite o id" << endl;
                cin >> contratado.id;
                cout << "Digite o nome" << endl;
                cin >> contratado.nome;
                cout << "Digite a carga horaria" << endl;
                cin >> contratado.ch;
                cout << "Digite a data de nascimento" << endl;
                cin >> contratado.nasc;
                cout << "Digite o salario" << endl;
                cin >> contratado.sal;

                funcionarios.inserir(contratado);
                break;

            case 2:
                cout << "Digite o id" << endl;
                cin >> id;
                if(funcionarios.remover(id))
                    cout << "Removido" << endl;
                else
                    cout << "Nao foi possivel remover" << endl;
                break;

            case 3:
                cout << "Digite o id" << endl;
                cin >> id;
                cout << "Digite em quantos o salario ira aumentar" << endl;
                cin >> sal;
                if(!funcionarios.aumento(id, sal))
                    cout << "Funcionario nao encontrado" << endl;
                break;

            case 4:
                cout << "Digite o id" << endl;
                cin >> id;
                if(!funcionarios.pagamento(id))
                    cout << "Funcionario nao encontrado" << endl;
            
            default:
                break;
        }
    } while (r != 5);
    

    
    return 0;
}
