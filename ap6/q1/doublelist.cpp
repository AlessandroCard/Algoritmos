#include "doublelist.h"
#include <cstddef>
#include <cstdlib>
#include <iostream>

doublelist::doublelist()
{
    head = NULL;
}

doublelist::doublelist(int value) : doublelist()
{
    insert(value);
}

bool doublelist::insert(int value)
{
    element *aux = (element *) malloc(sizeof(element));
    if(aux == NULL)
        return false;

    aux->value = value;

    if(head == NULL)
    {
        aux->next = NULL;
        aux->previous = NULL;
    }
    else
    {
        aux->next = head;
        aux->previous = NULL;
        head->previous = aux;
    }
    head = aux;

    return true;
}

bool doublelist::removal(int value)
{
    element *aux = head;

    while (aux != NULL && aux->value != value)
        aux = aux->next;

    if(aux == NULL)
        return false;

    if(aux == head)
        head = head->next;
    if(aux->next != NULL)
        aux->next->previous = aux->previous;
    if(aux->previous != NULL)
        aux->previous->next = aux->next;

    free(aux);
    return true;
}

void doublelist::printlist()
{
    if(head == NULL)
        std::cout << "Lista vazia" << std::endl;

    element *aux = head;

    while (aux != NULL) {
        std::cout << aux->value << " ";
        aux = aux->next;
    
    }
    std::cout << std::endl;
}
