#include "Stack.h"

Stack::Stack()
{
    top = NULL;
}

void Stack::push(char opp)
{
    //Creates a new node and assigns a pointer to it
    Node *temp = new Node(opp);

    if(top == NULL)
    {
        top = temp;
    }
    else
    {
        top->next = temp;
        top = temp;
    }
}