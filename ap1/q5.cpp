#include <iostream>

using namespace std;

/*Questão 5: Escreva um programa para calcular o resultado de A^B, onde A e B são inteiros
positivos. Faça este exercício de forma iterativa e recursiva.*/

int pow(int a, int b)
{
    if(b > 1)
        return a * pow(a, b - 1);
    else 
        return a;
}

int main()
{
    int a = 5, b = 3, pot = 1;

    cout << pow(a, b) << endl;

    for(int i = b; i >= 1; i--)
    {
        pot *= a;
    }
    cout << pot << endl;

    return 0;
}
