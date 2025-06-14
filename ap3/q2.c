#include "q2.h"
#include <stdio.h>

int binsearch(int *list, int value, int ini, int fim)
{
  int mid = (ini + fim)/2;
  if(ini >= fim)
  {
    return ini;
  }
  else if (list[mid] == value)
  {
    return mid;
  }
  else
  {
    if(value < list[mid])
    {
      return binsearch(list, value, ini, mid - 1);
    }
    else
      return binsearch(list, value, mid + 1, fim);
  }
}

int insert(int *list, int value, int *tam)
{
  if(*tam == 0)
  {
    list[*tam] = value;
    *tam += 1;
    return 1;
  }
  else
  {
    int pos = binsearch(list, value, 0, *tam - 1);

    /*if(list[pos] == value)
      return -1;*/

    if(list[pos] > value)
    {
      for(int i = *tam; i > pos; i--)
      {
        list[i] = list[i - 1];
      }

      list[pos] = value;
      
      *tam += 1;
      
      return 1;
    }
    else
    {
      for(int i = *tam; i > pos + 1; i--)
        list[i] = list[i - 1];

      list[pos + 1] = value;
      
      *tam += 1;

      return 1;
    }
  }
} 

int remover(int *list, int *tam, int value)
{
  int pos = binsearch(list, value, 0, *tam - 1);

  if(list[pos] != value)
    return -1;
  else
  {
    for(int i = pos; i < *tam - 1; i++)
      list[i] = list[i + 1];
    
    *tam -= 1;
    
    return 1;
  }
}

void PrintList(int *list, int tam)
{
  for(int i = 0; i < tam; i++)
    printf("%d ", list[i]);

  printf("\n");
}

