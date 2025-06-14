#include "queuecpp.h"
#include <cstddef>
#include <cstdlib>

queue::queue()
{
    head = NULL;
}

queue::queue(int value) : queue()
{
    insert(value);
}

bool queue::insert(int value)
{
    element *aux = (element *) malloc(sizeof(element));
    
    if(aux == NULL)
        return false;

    aux->value = value;
    aux->next = head;
    head = aux;

    return true;
}

int queue::removal()
{
    if(head != NULL)
    {
        element *aux = head, *aux2 = head->next;
        int value;

        if(aux2 != NULL)
        {
            while (aux2->next != NULL) {
                aux = aux2;
                aux2 = aux2->next;
            }

            value = aux2->value;
            free(aux2);
            aux->next = NULL;
        }
        else {
            value = aux->value;
            free(aux);
            head = NULL;
        }
        
        return value;
    }
    else {
        return false;
    }
}
