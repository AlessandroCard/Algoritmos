#include "q3.h"

void quicksort(carta *list, int ini, int fim)
{
  int pivo = list[(fim + ini)/2].num;

  int i = ini, j = fim;

  while(i <= j)
  {
    while (list[i].num < pivo && i < fim)
      i++;

    while(list[j].num > pivo && j > ini)
      j--;
    
    if(i <= j)
    {
      carta aux;
      aux.num = list[i].num;
      aux.naipe = list[i].naipe;
      list[i].num = list[j].num;
      list[i].naipe = list[j].naipe;
      list[j].num = aux.num;
      list[j].naipe = aux.naipe;

      i++;
      j--;
    }
  }
  if(i < fim)
  {
    quicksort(list, i, fim);
  }
  if (j > ini) 
  {
    quicksort(list, ini, j);
  }

}
