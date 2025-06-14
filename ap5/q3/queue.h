typedef struct Queue
{
  int value;
  struct Queue *next;
} queue;

int insert(queue *head, int nvalue);

int removal(queue *head);
