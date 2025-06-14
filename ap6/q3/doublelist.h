#ifndef DOUBLELIST_H
#define DOUBLELIST_H

typedef struct Element
{
    int value;
    struct Element *next, *previous;
}element;

class doublelist
{
    private:
        element *head;

    public:
        doublelist();
        doublelist(int value);
        bool insert(int value);
        int removal();
        void printlist();
};

#endif