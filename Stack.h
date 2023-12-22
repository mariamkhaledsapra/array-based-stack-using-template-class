#ifndef STACK_H
#define STACK_H


template <class T >
class Stack {
private:
    int top;
    int Count;
    T* Stack;
   int MAX_SIZE;
public:
    Stack(int size=128); //constructor
    ~Stack(); // deconstructor
    Stack(const Stack &original);// copy constructor
    void Push( T value);
    void Pop( T& value);
    bool StackIsEmpty() const;
    void StackTop(T& value) const;
    bool StackIsFull() const;
    int StackSize() const;
    //void Sort();
};

#endif
