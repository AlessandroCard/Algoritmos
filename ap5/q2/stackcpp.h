#ifndef STACKCPP_H
#define STACKCPP_H

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
        int removal();
};

#endif