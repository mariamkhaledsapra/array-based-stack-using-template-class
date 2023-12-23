#include <iostream>
#include "Stack.h"
using namespace std;
template <class T>
  Stack<T>::Stack(int size){
         top = -1;
         Count=0;
         MAX_SIZE=size;
         stack = new T[MAX_SIZE];
}


template< class T>
  Stack<T>::Stack(const Stack &original)
  {
         top(original.top);
         MAX_SIZE(original.MAX_SIZE );
         stack=new int (MAX_SIZE);
        for(int i=0; i<MAX_SIZE; i++)
        {
          stack(i)=original.stack(i);
        }
  }

//Test if the steak is full
template <class T>
    bool Stack<T>::StackIsFull()const
    {
    return (top == MAX_SIZE - 1);
    }

 //push
template <class T>
    void Stack<T>::Push( T value) 
    {
    if (StackIsFull())
          cout<<"Stack is full";
    else{
        top++;
        stack [top]=value;
        Count++;}
    }

 //Test if the stick is empty
template <class T>
   bool Stack<T>::StackIsEmpty()const
{
    return top == -1;
}

//pop
template <class T>
    void Stack<T>::Pop( T& value) 
    {
        if (StackIsEmpty())
             cout<<"Stack is full & under flow";
    else{
        value =stack [top];
        top--;
        Count--;
        }
}


//To know the size of the stick
template <class T>
   int Stack<T>::StackSize()const
    {
         return Count;
    }


//To know what he holds TOP
template <class T>
   void Stack<T>::StackTop(T& value) const
   {
    if (StackIsEmpty())
             cout<<"Stack is full & under flow";
      else
        value =stack[top];
  }


//deconstructor
template <class T>
  Stack<T>::~Stack() {
          delete [] stack;
}


// template <class T>
//   void Stack<T>::Sort() 
//   { //make two loops to Sort data
//       for (int i = 0; i < top; ++i) { //can store data in the Sort function before =i
//           for (int j = i + 1; j <= top; ++j) { //can store data in the Sort function after =j
//                if (Stack[i] > Stack[j]) {
//                    T temp = Stack[i];
//                    Stack[i] = Stack[j];
//                    Stack[j] = temp;
//             }
//         }
//     }
//     for (int i = MAX_SIZE; i > 0; i--){
//         		push(Stack[i]);
//     }
// }
