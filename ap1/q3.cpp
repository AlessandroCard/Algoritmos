#include <iostream>

using namespace std;

/*Questão 3: Escreva um programa que calcule e imprima o número de dígitos de um número
inteiro n lido. Faça este exercício de forma iterativa e recursiva.*/

int Digits(int d, int n)
{
    if(n / 10 != 0)
    {
        if(n % 10 == d)
            return 1 + Digits(d, n/10);
        else
            return Digits(d, n/10);
    }
    else
        if(n % 10 == d)
            return 1;
        else
            return 0;
}

int main()
{
    int num = 6564, d = 6, ct = 0, n = num;

    cout << "O numero " << num << " apresenta " << Digits(d, num) << " digitos " << d << endl;

    while(n != 0)
    {
        if(n % 10 == d)
            ct++;
        n /= 10;
    }

    cout << "O numero " << num << " apresenta " << ct << " digitos " << d << endl;

    return 0;
}
