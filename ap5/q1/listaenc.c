#include "listaenc.h"
#include <stdlib.h>

int insert(list *head, int nvalue)
{
  list *aux = (list *) malloc(sizeof(list));
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

int removal(list *head, int rvalue)
{
  list *aux = head;

  while(aux->next != NULL && aux->next->value != rvalue)
    aux = aux->next;

  if(aux->next == NULL)
    return 0;
  else
  {
    list *rnode = aux->next;
    aux->next = rnode->next;
    free(rnode);
    return 1;
  }
}

