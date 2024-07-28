#include <iostream>
#include <string>
using namespace std;

const int SIZE = 100;

template <typename T>
class Stack
{
    int top;  
    T arr[SIZE];
    
    public:
    
    Stack():top(-1){};  
    
    void push(T element)     
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
    void pop(T &element)    
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
    void get_top(T &last_element)   //*passed generic data type to (get_top) by reference
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
            cout<<arr[i]<<"\n";
        }
    }
    
};


int main()
{
    Stack<int> s;
    s.push(5);     
    s.push(10);    
    s.push(15);    
    s.push(20);   
    cout<<"(int) elements of Stack = \n";
    s.print();

    Stack<double> s2;
    s2.push(5.5);     
    s2.push(10.4);    
    s2.push(15.7);    
    s2.push(20.2);   
    cout<<"(double) elements of Stack = \n";
    s2.print();

    Stack<char> s3;
    s3.push('A');
    s3.push('B');    
    s3.push('C');    
    s3.push('D');
    cout<<"(char) elements of Stack = \n";
    s3.print();

    Stack<string> s4;
    s4.push("fatoom");
    s4.push("batbot");    
    s4.push("bataboto");    
    s4.push("Dad");
    cout<<"(string) elements of Stack = \n";
    s4.print();
}