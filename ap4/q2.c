#include "q2.h"
#include <stdlib.h>

char naipes[4] = {'E', 'P', 'C', 'O'};

void merge(carta *list, int ini, int mid, int fim)
{
  int tam = fim - ini + 1;
  carta *aux = (carta *) malloc(tam * sizeof(carta));

  int p1 = ini, p2 = mid + 1;

  for(int i = 0; i < tam; i++)
  {
    int n1 = 0, n2 = 0;
    while(list[p1].naipe != naipes[n1]) n1++;
    while(list[p2].naipe != naipes[n2]) n2++;

    if(p1 <= mid && p2 <= fim)
      if(n1 <= n2)
      {
        aux[i].num = list[p1].num;
        aux[i].naipe = list[p1++].naipe;
      }
      else
      {
        aux[i].num = list[p2].num;
        aux[i].naipe = list[p2++].naipe;
      }
    else
      if(p1 <= mid)
      {
        aux[i].num = list[p1].num;
        aux[i].naipe = list[p1++].naipe;
      }
      else
      {
        aux[i].num = list[p2].num;
        aux[i].naipe = list[p2++].naipe;
      }
  }
  for(int i = 0; i < tam; i++)
  {
    list[ini + i].num = aux[i].num;
    list[ini + i].naipe = aux[i].naipe;
  }
  free(aux);
}

void mergesort(carta *list, int ini, int fim)
{
  if(ini < fim)
  {
    int mid = (ini + fim)/2;

    mergesort(list, ini, mid);
    mergesort(list, mid + 1, fim);

    merge(list, ini, mid, fim);
  }
}

