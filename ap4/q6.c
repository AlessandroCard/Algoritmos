#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "q5.h"
#include "q3.h"
#include "q2.h"

void Desembaralha(carta *baralho, int tam)
{
  quicksort(baralho, 0, tam - 1);
  printbaralho(baralho);
  printf("\n");
  mergesort(baralho, 0, tam -1);
}

int main()
{
  carta *baralho = (carta *) malloc(52 * sizeof(carta));

  for(int i = 0; i < 4; i++)
  {
    for(int j = 1; j <= 13; j++)
    {
      baralho[13 * i + j - 1].naipe = naipes[i];
      baralho[13 * i + j - 1].num = j;
    }
  }

  srand(time(NULL));

  Embaralha(baralho);

  printbaralho(baralho);

  Desembaralha(baralho, 52);

  printbaralho(baralho);



  return 0;
}
