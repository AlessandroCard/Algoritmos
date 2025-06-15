#include <stdio.h>

/*Questão 4: Escreva um programa em C que leia um inteiro n (na base decimal) e imprima
n na base binária. Faça este exercício de forma recursiva, sem usar vetores. Pense também
em como fazer esse mesmo exercício de forma iterativa.*/

void Bin(int n)
{
    if(n / 2 != 0)
    {
        Bin(n/2);
    }
    printf("%d", n % 2);
}

int main()
{
    int n = 1546;

    printf("O numero %d em binario eh: ", n);
    Bin(n);

    return 0;
}
