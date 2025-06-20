#ifndef QUEUE_H
#define QUEUE_H

class queue
{
    private:
        int value;
        queue *next, *previous;

    public:
        queue();
        queue(int value);
        bool insert(int value);
        int removal();
        void printlist();
};

#endif