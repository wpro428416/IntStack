#include "IntStack.h"
#define NULL 0
IntStack::IntStack(){
    node=NULL;
}

IntStack::~IntStack(){}

bool IntStack::isEmpty(){
    return node==NULL;
}

void IntStack::push(int data){
    if(isEmpty()){
        node = new Node;
        node->next=NULL;
    }
    node->top = new Node;
    node->data=data;
    Node * temp = node;
    node=node->top;
    node->next=temp;

}

void IntStack::pop(){
    if(!isEmpty()){
    node=node->next;
    }
}

int IntStack::stackSize(){
    Node * p = this->node;
    int count=0;
    while(p!=NULL){
        p=p->next;
        count++;
    }
    return --count;
}
