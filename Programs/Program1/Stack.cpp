#include "Stack.h"

Stack::Stack()
{
    top = NULL;
}

void Stack::push(char opp)
{
    //Creates a new node and assigns a pointer to it
    Node *temp = new Node(opp);

    //If the list is empty then put an op in it
    if(top == NULL)
    {
        top = temp;
    }
    // If list is not empty then stack the new node on top of previous one
    else
    {
        temp->next = top;
        top = temp;
    }
}

char Stack::pop()
{
    char opr; // The operator or operand that will be returned

    Node *temp = top; // setting a temp pointer

    opr = temp-> opp; // storing data inside node so it wont be deleted

    top = top-> next; // top pointer now points to the node below

    delete temp; // temp can now be deleted

    return opr;

}

void Stack::print()
{
    Node * traverse = top;

    while(traverse != NULL)
    {
        cout << traverse->opp << " ->" << endl;
        traverse = traverse->next;
    }
    cout << "Nullptr";

}