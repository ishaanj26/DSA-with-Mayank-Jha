/*
BINARY OPERATORS
arithemtic---> - +, -, /, *
relatonal---> - <=, >=, ==, !=
logical ----> and(&&) , or(||) , not(!)
Compound assignment ----> *=, /=,+=,-+,%=

UNARY OPERATORS
+,-,++,--,&(unary add and reference/address of operator)

&---> address of operator,when we want the address of a variable and can be used at binary addition as well
*--->value at operator

int * p= &x;

a++ fastest
a+=1 2nd fastest
a=a+1  3rd fastest

LOOPS
-STARTING PT,-ENDING POINT, -TASK, -NEXT STAGE
1. FOR LOOP
2. WHILE LOOP
3. DO WHILE LOOP

while loop is less efficient bt execution time is same.
for loop- till the condition is true do the task.
for each loop-used on data container
    for (e : ds_name){
    cout<<e
    }
    here when we are working on each element of the data structure
the only difference is in the syntax.




*/

#include <iostream>
using namespace std;

int main()
{
    int x = 8;
    int *p = &x; // the data type of p is int*, not int. value of p is the address of x.
    cout << p << endl
         << *p;
    // if i dont give the data type of *p as same as of x then this PROBLEM will happen in
    // POINTER arithmetic
    // char *t = &x; /r/compiler error

    return 0;
}