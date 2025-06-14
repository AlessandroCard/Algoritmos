#include <stdio.h>
#include "lista.h"

int main()
{
  list *head = NULL;
  printf("Teste\n");

  insert(&head, 5);
  printf("Teste 1\n");
  insert(&head, 8);
  printf("teste 2\n");
  insert(&head, 6);
  printf("teste 3\n");

  removal(&head, 5);
  printf("teste 4\n");
  removal(&head, 6);

  printf("%d\n", head->value);

  return 0;
}

