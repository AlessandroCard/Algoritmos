#include <iostream>

using namespace std;

/*Questão 7: Escreva uma função recursiva tal que dado um vetor V e seu tamanho t, a função
(i) identifica o menor elemento do vetor, (ii) desloca esse elemento para a primeira posição do
vetor e (iii) aplica o mesmo procedimento ao restante do vetor (todas as demais posições, exceto
a primeira). Implemente o programa para exemplificar o uso da sua função.*/

void OrdemVet(float vet[], int tam, int pos)
{
    int posmenor = pos;
    float menor = vet[pos], aux;
    
    if(pos < tam - 1)
    {
        for(int i = pos + 1; i < tam; i++)
        {
            if(vet[pos] > vet[i])
            {
                aux = vet[pos];
                vet[pos] = vet[i];
                vet[i] = aux;
            }
        }
        OrdemVet(vet, tam, pos + 1);
    }
}

void PrintVet(float vet[], int tam)
{
    for(int i = 0; i < tam; i++)
        cout << vet[i] << " ";
    cout << endl;    
}

int main()
{
    float vet[7] = {7,6,5,4,3,2,1};
    
    PrintVet(vet, 7);
    OrdemVet(vet, 7, 0);
    PrintVet(vet, 7);

    return 0;
}