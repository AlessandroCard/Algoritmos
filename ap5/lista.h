struct List
{
  int value;
  struct List *next;
};

typedef struct List list;

int insert(list **head, int value);

int removal(list **head, int value);

