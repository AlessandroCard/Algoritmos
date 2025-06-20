#ifndef DOUBLELIST_H
#define DOUBLELIST_H

class doublelist
{
    private:
        int value;
        doublelist *next, *previous;

    public:
        doublelist();
        doublelist(int value);
        bool insert(int value);
        bool removal(int value);
        void printlist();
};

#endif