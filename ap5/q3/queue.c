#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

int insert(queue *head, int nvalue)
{
  queue *aux = (queue *) malloc(sizeof(queue));
  if(aux == NULL)
    return 0;
  else
  {
    aux->value = nvalue;
    aux->next = head->next;
    head->next = aux;
    return 1;
  }
}

int removal(queue *head)
{
  queue *aux = head, *aux2 = aux->next;
  
  if(aux2 == NULL)
  {
    printf("Err\n");
    return 0;
  }

  while(aux2->next != NULL)
  {
    aux = aux2;
    aux2 = aux2->next;
  }
  int rvalue = aux2->value;
  aux->next = NULL;
  free(aux2);
  return rvalue;
}

