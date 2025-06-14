#include <stdio.h>
#include "q1.h"
#include "q2.h"
#include "q3.h"
#include <time.h>
#include <stdlib.h>
#define TAM 100000

int main()
{
  srand(time(NULL));
  int list1[TAM], list2[TAM], list3[TAM];

  for(int i = 0; i < TAM; i++)
  {  
    list1[i] = rand();
    list2[i] = list1[i];
    list3[i] = list1[i];
  }

  clock_t ini, fim;

  ini = clock();

  bubblesort(list1, TAM);

  fim = clock();

  printf("O bubble sort ordenou a lista em %.6lfs\n", (double) (fim - ini)/CLOCKS_PER_SEC);

  ini = clock();

  mergesort(list2, 0, TAM - 1);

  fim = clock();

  printf("O merge sort ordenou a lista em %.6lfs\n", (double) (fim - ini)/CLOCKS_PER_SEC);

  ini = clock();

  quicksort(list3, 0, TAM - 1);

  fim = clock();

  printf("O quick sort ordenou a lista em %.6lfs\n", (double) (fim - ini)/CLOCKS_PER_SEC);


  return 0;
}
