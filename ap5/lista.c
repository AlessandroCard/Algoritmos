#include "lista.h"
#include <stdlib.h>

int insert(list **head, int value)
{

  list *aux = (list *) malloc(sizeof(list));
  if(aux == NULL)
    return 0;
  aux->value = value;
  aux->next = *head;
  *head = aux;
    
  return 1;
}

int removal(list **head, int value)
{
  if(*head == NULL)
    return 0;

  list *aux = *head;

  if(aux->value == value)
  {
    *head = aux->next;
    free(aux);
    return 1;
  }


  while(aux->next != NULL && aux->next->value != value)
    aux = aux->next;

  if(aux->next == NULL)
    return 0;
  else
  {
    list *aux2 = aux->next;
    aux->next = aux->next->next;
    free(aux2);
    return 1;
  }
}

