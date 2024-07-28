#include <iostream>

using namespace std;

const int SIZE = 100;

class Stack
{
    int top;  
    int arr[SIZE];
    
    public:
    
    Stack():top(-1){};  
    
    void push(int element)     //*note: we not passed the value by (reference) in this context because may add unnecessary complexity to the usage of the push function. the push function is simply adding an element to the stack and does not require any modifications to the input value
    {
        if(top >= 100 - 1)    
        {
            cout<<"The stack is full !\n";
        }
        else
        {
            top++;      
            arr[top] = element;
        }
    }
    bool isEmpty()
    {
        return top < 0;  
    }
    void pop()        
    {
        if(isEmpty())
        {
            cout<<"The stack is empty !\n";
        }
        else
        {
            top--;        
        }
    }
    void pop(int &element)    
    {
        if(isEmpty())
        {
            cout<<"The stack is empty !\n";
        }
        else
        {
            element = arr[top];     
            top--;         
        }
    }
    void get_top(int last_element) 
    {
        if(isEmpty())
        {
            cout<<"The stack is empty !\n";
        }
        else
        {
            last_element = arr[top];                    
            cout<<"Top element = "<<last_element<<"\n";
        }
    }
    void print()
    {
        for(int i = top; i >= 0; i--)  
        {
            cout<<"The elements of Stack from top to deep = "<<arr[i]<<"\n";
        }
    }
    
};


int main()
{
    Stack s;
    s.push(5);     //5 first element in deep of stack
    s.push(10);    //10
    s.push(15);    //15
    s.push(20);    //20
    s.pop();       //delete(20) last element in stack on top is the first element will out/delete
    s.push(25);    //add(25) instead of (20)
    
    s.print();

    
    
    return 0;
}