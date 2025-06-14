#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

int insert(stack *head, int nvalue)
{
  stack *aux = (stack *) malloc(sizeof(stack));

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

int removal(stack *head)
{
  stack *aux = head;

  if(aux->next == NULL)
  {
    printf("Err\n");
    return 0;
  }
  else
  {
    stack *rnode = aux->next;
    aux->next = rnode->next;
    int rvalue = rnode->value;
    free(rnode);
    return rvalue;
  }
}

