#ifndef QUEUECPP_H
#define QUEUECPP_H

typedef struct Element
{
    int value;
    struct Element *next;
}element;

class queue
{
    private:
        element *head;
    
    public:
        queue();
        queue(int value);
        bool insert(int value);
        int removal();
};

#endif