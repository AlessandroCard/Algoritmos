#ifndef LIST_H
#define LIST_H

typedef struct Element
{
    int value;
    struct Element *next;
}element;

class list
{
    private:
        element *head;
    
    public:
        list();
        list(int value);
        bool insert(int value);
        bool removal(int value);
        void printlist();
};

#endif