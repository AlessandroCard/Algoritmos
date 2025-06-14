#include "queue.h"
#include <stdio.h>

int main()
{
  queue head;
  head.next = NULL;

  insert(&head, 8);
  insert(&head, 7);
  insert(&head, 6);
  insert(&head, 5);

  while(head.next != NULL)
    printf("%d\n", removal(&head));

  return 0;
}

