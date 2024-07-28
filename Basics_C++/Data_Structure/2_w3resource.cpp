/*
make reverse stack by using array
Input some elements onto the stack:
Stack elements: 0 1 5 2 4 7
Display the reverse elements of the stack:
Stack elements: 7 4 2 5 1 0

*/


#include <iostream>

using namespace std;

const int SIZE = 15;

class Stack
{
    int top;
    int arr[SIZE];
    
    public:
    Stack():top(-1){}
    
    bool isFull()
    {
        return top >= SIZE - 1 ? true:false;
    }
    void push(int element)
    {
        if(isFull())
        {
            cout<<"stack is full\n";
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
    int pop()
    {
        if(isEmpty())
        {
            cout<<"stack is empty\n";
        }
        else
        {
            return arr[top];
            top--;
        }
    }
    int get_top()
    {
        if(isEmpty())
        {
            cout<<"stack is empty\n";
        }
        else
        {
            return arr[top];
        }
    }
    
    void print()
    {
        if(isEmpty())
        {
            cout<<"stack is empty\n";
        }
        else
        {
            for(int i = top; i >= 0; i--)
            {
                cout<<arr[i]<<"\n";
            }
        }
    }

    void reverse()
    {
        int n = top + 1;               //*top = index of last element in stack , adding 1 to get total number of element
        int* tmp = new int[n];         // Create a temporary array to store the reversed elements
        for (int i = 0; i < n; i++)
        {
            tmp[i] = arr[top--]; // Pop elements from the original stack and store them in the temporary array
        }
        for (int i = 0; i < n; i++)
        {
            push(tmp[i]); // Push the reversed elements back onto the original stack
        }
        delete[] tmp; // Free the temporary array
    }  
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"the elements of stack before reversing:\n";
    s.print();
    cout<<"the elements of stack after reversing:\n";
    s.reverse();
    s.print();
}