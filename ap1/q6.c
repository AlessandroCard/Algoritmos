#include <stdio.h>

/*Questão 6: Implemente um programa para descobrir o i-ésimo elemento da sequência de
Fettuccine de forma iterativa. Em seguida, construa um segundo programa usando recursão.

Compare o tempo de execução dos dois programas. Vale observar que na sequência de Fettuc-
cine, ao contrário da sequência de Fibonacci, os dois primeiros termos n1 e n2 são lidos. Já os

demais termos são calculados pela seguinte expressão:*/

int Fet(int n1, int n2, int i)
{
    if(i != 4 && i != 3)
    {
        if(i % 2 == 1)
        {
            return Fet(n1, n2, i - 1) + Fet(n1, n2, i - 2);
        }
        else
            return Fet(n1, n2, i - 1) - Fet(n1, n2, i - 2);
    }
    else if(i == 4)
    {
        return Fet(n1,n2, i - 1) - n2; 
    }
    else
        return n1 + n2;
    
}

int main()
{
    int pos = 15, n1 = 4, n2 = 2, fetatual, fetanterior, aux;

    fetanterior = n1 + n2;
    fetatual = fetanterior - n2;

    for(int i = 5; i <= pos; i++)
    {
        if(i % 2 == 0)
        {
            aux = fetatual;
            fetatual -= fetanterior;
            fetanterior = aux;
        }
        else
        {
            aux = fetatual;
            fetatual += fetanterior;
            fetanterior = aux;

        }
    }

    printf("O %d termo da sequencia comecando com %d e %d eh %d\n", pos, n1, n2, fetatual);
    printf("O %d termo da sequencia comecando com %d e %d eh %d\n", pos, n1, n2, Fet(n1, n2, pos));

    return 0;
}
