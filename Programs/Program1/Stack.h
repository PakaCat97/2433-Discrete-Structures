// Header file for stack
// Wtite skeleton of the stack class. (NO DEFININTIONS)


#include <iostream>

using namespace std;
// Creating node for list based stack
struct Node
{
    char opp; // operator or operand
    Node * next; // Previous pointer to keep track of nodes below

    Node(char o)
    {
        opp = o;
        next = NULL;
    }
};

class Stack
{
    private:
    Node * top;
    public:

    Stack(); //Defualt constructor

    // Function Name: push
    // Parameters: char opp an operator or operand
    // Purpose: stacks a node containing opp on the top returns nothing
    void push(char opp);

    // Function Name: pop
    // Parameters: none
    // Purpose: take the data from the top node to be used for an opperation
    char pop();

    // Print method to see my stack
    void print();

};