#include <iostream>
#include <fstream>
#include "Stack.cpp"  //link the page Implementation

using namespace std;

int main() {
    int x;
    Stack<int> stack(5);                     //degradation Stack and gave Type and Size
    stack.Push(3);                          //Enter the data dynamically
    stack.Push(1);
    stack.Push(5);
    stack.Push(2);
    stack.Push(4);                          //Note: It is not possible to store more than 5 elements of the Stack
    cout<<"Before Sorting"<<endl;             //The data will be sorted to be arranged

    while (!stack.StackIsEmpty()) 
    {          //We will do a loop check to see if the stack elements are empty or not
        stack.StackTop(x);
        cout<<x<<" ";            // Print the last stored item add space between them
        stack.Pop(x);                          // removed from the stick Rearrange it
    }

    cout<<endl;

    stack.Push(3);
    stack.Push(1);
    stack.Push(5);
    stack.Push(2);
    stack.Push(4);

    //stack.Sort();
    cout << "After Sorting "<<endl;
    while (!stack.StackIsEmpty()) {
        stack.StackTop(x);
        cout<<x<<" ";
        stack.Pop(x);
    }

    return 0;
}

