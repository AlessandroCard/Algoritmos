#include <iostream>

using namespace std;

/*Questão 1: Escreva uma função recursiva que some todos os elementos de um vetor de ta-
manho t. Para pensar: onde a recursão pode ser aplicada nesse caso?*/

float SomVet(int tam, float vet[])
{
    tam--;
    if(tam > 0)
        return vet[tam] + SomVet(tam, vet);
    else
        return vet[tam];
}

int main()
{
    float vet[5] = {1, 2, 3, 4, 5};

    cout << "A soma dos elementos do vetor vale " << SomVet(5, vet) << endl;

    return 0;
}
