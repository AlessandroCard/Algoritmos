#include "stack.h"
#include <stdio.h>

int main()
{
  stack head;
  head.next = NULL;

  insert(&head, 8);
  insert(&head, 25);
  insert(&head, 4);

  while(head.next != NULL)
    printf("%d\n", removal(&head));

  return 0;
}

