#ifndef STACK_H
#define STACK_H


template <class T>
class Stack 
{
    public:
        Stack(int size=128); //constructor
        Stack(const Stack &original);// copy constructor
        ~Stack(); // deconstructor
        void Push( T value);
        void Pop( T& value);
        bool StackIsEmpty() const;
        void StackTop(T& value) const;
        bool StackIsFull() const;
        int StackSize() const;
        //void Sort();
    private:
        int top;
        int Count;
        T* stack;
        int MAX_SIZE;
};

#endif
