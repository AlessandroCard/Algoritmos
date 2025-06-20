#include "doublelist.h"
#include <cstddef>
#include <cstdlib>
#include <iostream>

doublelist::doublelist()
{
    next = NULL;
    previous = NULL;
}

doublelist::doublelist(int value) : doublelist()
{
    insert(value);
}

bool doublelist::insert(int value)
{
    doublelist *aux = new doublelist;

    if(aux == NULL)
        return false;

    aux->value = value;

    if(next == NULL)
    {
        aux->next = NULL;
        aux->previous = NULL;
    }
    else
    {
        aux->next = next;
        aux->previous = NULL;
        next->previous = aux;
    }
    next = aux;

    return true;
}

bool doublelist::removal(int value)
{
    doublelist *aux = next;

    while (aux != NULL && aux->value != value)
        aux = aux->next;

    if(aux == NULL)
        return false;

    if(aux == next)
        next = next->next;
    if(aux->next != NULL)
        aux->next->previous = aux->previous;
    if(aux->previous != NULL)
        aux->previous->next = aux->next;

    free(aux);
    return true;
}

void doublelist::printlist()
{
    if(next == NULL)
        std::cout << "Lista vazia" << std::endl;

    doublelist *aux = next;

    while (aux != NULL) {
        std::cout << aux->value << " ";
        aux = aux->next;
    
    }
    std::cout << std::endl;
}
