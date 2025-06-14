#include <stdio.h>
#include <stdlib.h>
#include "q5.h"

void Embaralha(carta *baralho)
{
  for(int i = 0; i < 1000; i++)
  {
    int n1 = rand() % 52;
    int n2 = rand() % 52;

    carta aux;
    aux.naipe = baralho[n1].naipe;
    aux.num = baralho[n1].num;
    baralho[n1].naipe = baralho[n2].naipe;
    baralho[n1].num = baralho[n2].num;
    baralho[n2].naipe = aux.naipe;
    baralho[n2].num = aux.num;
  }
}

void printbaralho(carta *baralho)
{
  for(int i = 0; i < 52; i++)
  {
    printf("%d de %c ", baralho[i].num, baralho[i].naipe);

    if((i + 1)%13 == 0)
      printf("\n");
  }
}
