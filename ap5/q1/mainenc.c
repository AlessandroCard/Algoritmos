#include "listaenc.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
  list head;
  head.next = NULL;

  insert(&head, 5);
  insert(&head, 20);
  insert(&head, 3);

  printf("%d\n", head.next->value);
  removal(&head, 3);
  printf("%d\n", head.next->value);
  removal(&head, 5);
  printf("%d\n", head.next->value);

  return 0;
}
