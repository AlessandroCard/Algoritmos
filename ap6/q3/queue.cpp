#include "queue.h"
#include <cstddef>
#include <cstdlib>
#include <iostream>

queue::queue()
{
    next = NULL;
    previous = NULL;
}

queue::queue(int value) : queue()
{
    insert(value);
}

bool queue::insert(int value)
{
    queue *aux = new queue;

    if(aux == NULL)  // Check if memory allocation was successful
        return false;
    
    aux->value = value;
    aux->next = next;
    aux->previous = NULL;
    next = aux;

    return true;
}

int queue::removal()
{
    queue *aux = next;

    if(next == NULL)  // If the queue is empty, return 0
    {
        std::cout << "Fila Vazia" << std::endl;
        return 0;
    }

    if(aux->next == NULL)  // If there is the last element in the queue
    {
        if(aux->previous != NULL)
            aux->previous->next = NULL;
        else
            next = NULL;

        int value = aux->value;
        free(aux);
        return value;
    }

    return next->removal();  // Recursively remove the last element
}

void queue::printlist()
{
    if(next == NULL)  // If the queue is empty, print a message
        std::cout << "Fila vazia" << std::endl;

    queue *aux = next;

    while (aux != NULL) {  // Traverse the queue and print each value
        std::cout << aux->value << " ";
        aux = aux->next;
    
    }

    std::cout << std::endl;
}
