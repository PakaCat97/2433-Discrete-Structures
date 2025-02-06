/*****************************************************************************
*
*  Author:           Carlos Munoz
* 
*  Email:            cmunoz9755@gmail.com
*  Label:            Program 1
*  Title:            Evaluating Bitwise Opps
*  Course:           2433-Discrete-Structures
*  Semester:         Spring 2025
*  Instructor:       Dr. Catherine Stringfellow
*  Description:
*        This program ustilizes stacks to evaluate fully parenthisized boolian
* expressions.
*
*  Usage:
*        how to use the program if necessary
*
*  Files:            (list of all source files used in this program)
*****************************************************************************/

#include <iostream>
#include <fstream>
#include "Stack.h"

using namespace std;

// Function Name: openFiles
// Parameters: infile and outfile
// Purpose: Decalres an ifstream and ofstream
// variable and opens them
void openFiles (ifstream& infile, ofstream& outfile);

int main()
{

    ifstream in;
    ofstream out;
  //  Stack s1;
   // char ca;

    // s1.push('A');
    // s1.push('B');
    // s1.push('C');
    // s1.push('D');
    // s1.push('E');
    // s1.print();
    // ca = s1.pop();
    // cout << "Pop: " << ca;


return 0;
};


void openFiles (ifstream& infile, ofstream& outfile)
{
char inFileName[40];
char outFileName[40];
cout<<"Enter the input file name: ";
cin>>inFileName;
infile.open(inFileName); //open input file
cout<<"Enter the output file name: ";
cin>> outFileName;
outfile.open(outFileName);//open out putfile
}
