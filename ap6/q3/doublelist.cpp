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

int doublelist::removal()
{
    element *aux = head;


    if(head == NULL)
    {
        std::cout << "Pilha Vazia" << std::endl;
        return 0;
    }

    while (aux->next != NULL)
        aux = aux->next;

    if(aux->previous != NULL)
        aux->previous->next = NULL;
    else
        head = NULL;

    int value = aux->value;
    free(aux);
    return value;
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
