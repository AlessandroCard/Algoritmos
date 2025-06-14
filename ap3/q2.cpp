#include "q2cpp.h"
#include <cstdlib>

int binsearch(funcionario *list, int value, int ini, int fim)
{
  int mid = (ini + fim)/2;
  if(ini >= fim)
  {
    return ini;
  }
  else if (list[mid].id == value)
  {
    return mid;
  }
  else
  {
    if(value < list[mid].id)
    {
      return binsearch(list, value, ini, mid - 1);
    }
    else
      return binsearch(list, value, mid + 1, fim);
  }
}

list::list()
{
    n = 0;
    listaord = (funcionario *) malloc(MAX * sizeof(funcionario));
}

list::list(funcionario novo) : list()
{
    listaord[0] = novo;
    n++;
}

int list::busca(int id, int ini, int fim)
{
    int mid = (ini + fim)/2;
  if(ini >= fim)
  {
    return ini;
  }
  else if (listaord[mid].id == id)
  {
    return mid;
  }
  else
  {
    if(id < listaord[mid].id)
    {
      return busca(id, ini, mid - 1);
    }
    else
      return busca(id, mid + 1, fim);
  }
}

bool list::inserir(funcionario contratado)
{
    if(n == MAX)
        return false;

    int aux = busca(contratado.id, 0, n-1);

    if(listaord[aux].id == contratado.id)
        return false;

    for(int i = n; i > aux; i--)
    {
        listaord[i] = listaord[i - 1];
    }

    listaord[aux] = contratado;

    n++;

    return true;
}

bool list::remover(int demitido)
{
    if(n == 0)
        return false;

    int aux = busca(demitido, 0, n-1);

    if(listaord[aux].id != demitido)
        return false;

    for(int i = aux; i < n - 1; i++)
        listaord[i] = listaord[i + 1];

    n--;
    return true;
}

bool list::aumento(int sortudo, float mais_sal)
{
    int aux = busca(sortudo, 0, n - 1);

    if(listaord[aux].id != sortudo)
        return false;

    listaord[aux].sal += mais_sal;
    return true;
}
