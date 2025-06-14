typedef struct Stack
{
  int value;
  struct Stack *next;
} stack;

int insert(stack *head, int nvalue);

int removal(stack *head);
