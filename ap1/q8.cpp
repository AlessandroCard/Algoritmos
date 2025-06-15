#include <iostream>

using namespace std;

/*Questão 8: Implemente e teste os exemplos vistos na aula teórica, incluindo a Função de
Ackermann.*/

long Ackermann(long m, long n)
{
    if(m == 0)
        return n + 1;
    else
        if(n == 0)
            return Ackermann(m - 1, n);
        else
            return Ackermann(m - 1, Ackermann(m, n - 1));
}

long Fat(long n)
{
    if(n == 0)
        return 1;
    else
        return n * Fat(n - 1);
}

int main()
{
    long n = 16, m = 16;

    cout << Ackermann(m, n) << endl;
    cout << Fat(n) << endl;

    return 0;
}
