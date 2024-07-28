#include <iostream>

using namespace std;

const int SIZE = 100;

class Stack
{
    int top;  
    int arr[SIZE];
    
    public:
    
    Stack():top(-1){};  
    
    void push(int value)     
    {
        if(top >= 100 - 1)    
        {
            cout<<"The stack is full !\n";
        }
        else
        {
            top++;      
            arr[top] = value;
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
    void get_top(int last_element)        //*when we can not modify on (last_element) because we not use reference sing(&), and (x) seprated to (last_elemnet) as (x has own its value) and (last_element too)
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
    Stack org_stack;
    org_stack.push(5);
    org_stack.push(10);
    org_stack.push(15);
    org_stack.push(20);

    cout<<"Original stack:\n";
    org_stack.print();
/***************************************************************************************************************************/  
    cout<<"Reversed stack:\n";
    Stack rev_stack;

    int arr[4] = {5, 10, 15, 20}; 
    for(int i = 3; i >= 0; i--)
    {
        rev_stack.push(arr[i]);
    }
    rev_stack.print();

    int x = 0, y = 0;
    org_stack.get_top(x);
    rev_stack.get_top(y);
    cout<<"x by value = "<<x<<"\ny by vlue = "<<y<<"\n";  //will print x = 0 because we don't tell compiler that x = last_element var by reference sign(&)*/
    
    
    
    return 0;
}
