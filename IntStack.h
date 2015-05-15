#ifndef INTSTACK_H_INCLUDED
#define INTSTACK_H_INCLUDED
typedef struct Node{
    int data;
    Node * top;
    Node * next;
}Node;

class IntStack
{
public:
    IntStack();
    ~IntStack();
    void push(int data);
    void pop();
    bool isEmpty();
    int stackSize();
private:
    Node* node;
};

#endif // INTSTACK_H_INCLUDED
