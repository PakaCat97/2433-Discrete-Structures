// Header file for stack
// Wtite skeleton of the stack class. (NO DEFININTIONS)


#include <iostream>

using namespace std;
// Creating node for list based stack
struct Node
{
    char opp; // operator or operand
    Node * pre; // Previous pointer to keep track of nodes below

    Node(char o)
    {
        opp = o;
        pre = NULL;
    }
};

class List
{
    

};