#include <iostream>

using namespace std;

/*Questão 2: Escreva uma função recursiva que, dados um vetor V e seu tamanho t, retorne
o vetor V invertido.*/

void InverteVet(int tam, float vet[], int i)
{
    if(i < (tam - 1)/2)
    {
        float aux = vet[i];
        vet[i] = vet[tam - 1 - i];
        vet[tam - 1 - i] = aux;
        InverteVet(tam, vet, i + 1);
    }
}

void PrintVet(int tam, float vet[])
{
    for(int i = 0; i < tam; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main()
{
    float vet[5] = {1, 2, 3, 4, 5};

    PrintVet(5, vet);
    InverteVet(5, vet, 0);
    PrintVet(5, vet);

    return 0;
}
