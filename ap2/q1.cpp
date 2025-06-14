#include "q1.h"
#include <iostream>

list::list()
{
    n = 0;
    lista = (funcionario *) malloc(MAX * sizeof(funcionario));
}

list::list(funcionario novo) : list()
{
    inserir(novo);

}

list::~list()
{
}

bool list::inserir(funcionario novo)
{
    if(n < 10)
    {
        lista[n] = novo;
        n++;
        return true;
    }
    else
        return false;
}

int list::busca(int id_procurado)
{
    int aux = 0;
    while (id_procurado != lista[aux].id && aux < n)
        aux++;
    
    return aux;
}

bool list::remover(int id_demitido)
{
    int aux = busca(id_demitido);

    if(aux == n || n == 0 || id_demitido != lista[aux].id)
        return false;
    else
    {
        lista[aux] = lista[n];
        n--;
        return true;
    }
}

bool list::aumento(int id_aumento, float aumento)
{
    int aux = busca(id_aumento);
    if(aux == n || n == 0 || id_aumento != lista[aux].id)
        return false;
    else
    {
        lista[aux].sal += aumento;
        return true;
    }
}

bool list::pagamento(int id_pago)
{
    int aux = busca(id_pago);

    if(aux != n && n != 0 && id_pago == lista[aux].id)
    {
        std::cout << "O funcionario " << lista[aux].nome << " ira receber " << lista[aux].sal << " reais" << std::endl;
        
        return true;
    }
    else
        return false;
}
