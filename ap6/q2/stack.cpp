#include "stack.h"
#include <cstddef>
#include <cstdlib>
#include <iostream>

stack::stack()
{
    next = NULL;
    previous = NULL;
}

stack::stack(int value) : stack()
{
    insert(value);
}

bool stack::insert(int value)
{
    stack *aux = new stack;

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

int stack::removal()
{
    stack *aux = next;  //Guarda o elemento a ser removido

    if(aux == NULL)  //Pilha vazia
    {
        std::cout << "Pilha Vazia" << std::endl;
        return 0;
    }

    next = next->next;

    if(aux->next != NULL)  //Se o elemento removido não for o último
        aux->next->previous = NULL;

    int value = aux->value; //Guarda o valor do elemento removido
    free(aux);  //Libera a memória do elemento removido

    return value;
}

void stack::printlist()
{
    if(next == NULL)
        std::cout << "Lista vazia" << std::endl;

    stack *aux = next;

    while (aux != NULL) {
        std::cout << aux->value << " ";
        aux = aux->next;
    
    }
    std::cout << std::endl;
}
