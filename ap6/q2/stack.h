#ifndef STACK_H
#define STACK_H

class stack
{
    private:
        int value;
        stack *next, *previous;

    public:
        stack();
        stack(int value);
        bool insert(int value);
        int removal();
        void printlist();
};

#endif