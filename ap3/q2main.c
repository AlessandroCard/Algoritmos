#include "q2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int list[100], tam = 100;

  for(int i = 0; i < 100; i++)
    list[i] = rand() % 100;

  int list_ord[100], tam_ord = 0;

  for(int i = 0; i < tam; i++)
  {
    insert(list_ord, list[i], &tam_ord);
  }

  PrintList(list, tam);
  
  printf("\n %d\n", tam_ord);

  PrintList(list_ord, tam_ord);

  return 0;
}

