#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H

const int N = 4;
const int QUEUESIZE = 4;

struct DynamicNode{ // node is the same as in the dynamic list code
    char info;
    DynamicNode *next;
};

class DynamicQueue {
public:
    //---------------------------------------------------------------
    // constructors
    DynamicQueue();

    //---------------------------------------------------------------
    // methods (inserts and deletes)

    bool empty();
    void insert(char x);
    char remove();
    bool keyInQueue(char x);
    void print();
    bool full();
    void findAndRemove(char x);
    char deleteAfter(DynamicNode *p);
    void checkQueueAndInsert(char x);

private:
    DynamicNode* front;
    DynamicNode* rear;
};
#endif

