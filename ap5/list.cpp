#include "list.h"
#include <cstddef>
#include <cstdlib>
#include <iostream>

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

    if(aux != NULL)
    {
        aux->value = value;
        aux->next = head;
        head = aux;

        return true;
    }
    else {
        return false;
    }
}

bool list::removal(int value)
{
    if(head == NULL)
        return false;

    element *aux = head;

    if(head->value == value)
    {
        head = head->next;
        free(aux);
        return true;
    }

    while(aux->next != NULL && aux->next->value != value)
        aux = aux->next;

    if(aux->next == NULL)
        return false;
    else
    {
        element *aux2 = aux->next;
        aux->next = aux2->next;
        free(aux2);
        return true;
    }
}

void list::printlist()
{
    element *aux = head;

    while(aux != NULL)
    {
        std::cout << aux->value << " ";
        aux = aux->next;
    }
    std::cout << std::endl;
}
