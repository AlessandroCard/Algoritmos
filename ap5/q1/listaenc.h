typedef struct List
{
  int value;
  struct List *next;
} list;

int insert(list *head, int nvalue);

int removal(list *head, int rvalue);
