#include "q1.h"

void bubblesort(int *list, int tam)
{
  int i = 0;
  while(i < tam)
  {
    int j = 0;

    while(j < tam - i - 1)
    {
      if(list[j] > list[j + 1])
      {
        int aux = list[j + 1];
        list[j + 1] = list[j];
        list[j] = aux;
      }
      j++;
    }
    i++;
  }
}

