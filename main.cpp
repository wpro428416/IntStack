#include <iostream>
#include <IntStack.h>
using namespace std;

int main(){
    IntStack * s = new IntStack;
    s->push(20);
    //s->push(50);
    //s->push(10);
    //s->push(5);
    cout<<s->stackSize()<<endl;
    s->pop();
    s->pop();
    s->pop();
    s->pop();
    return 0;
}
