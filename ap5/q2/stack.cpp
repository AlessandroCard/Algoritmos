#include "stackcpp.h"
#include <cstddef>
#include <cstdlib>
#include <stdlib.h>

list::list()
{
    head = NULL;
}

list::list(int value) : list()
{
    insert(value);
}

bool list::insert(int value)
{
    element *aux = (element *) malloc(sizeof(element));

    if(aux == NULL)
        return false;

    aux->value = value;
    aux->next = head;
    head = aux;

    return true;
}

int list::removal()
{
    if(head == NULL)
        return false;

    element *aux = head;
    head = head->next;
    int value = aux->value;

    free(aux);

    return value;
}
