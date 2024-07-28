#include <iostream>

using namespace std;

const int SIZE = 100;

class Stack
{
    int top;
    int arr[SIZE];

public:
    Stack() : top(-1) {}

    bool isEmpty()
    {
        return top < 0;
    }
    bool isFull()
    {
        return top = arr[SIZE];
    }
    void push(int element)
    {
        if (top >= SIZE - 1)
        {
            cout << "The stack is full!\n";
        }
        else
        {
            top++;
            arr[top] = element;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "The stack is empty!\n";
            return -1;                         // return a default value to indicate failure
        }
        else
        {
            int poppedElement = arr[top];
            top--;
            return poppedElement;
        }
    }
    void get_top(int &last_element)        //*when we can not modify on (last_element) because we not use reference sing(&), and (x) seprated to (last_elemnet) as (x has own its value) and (last_element too)
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
        if (isEmpty())
        {
            cout << "The stack is empty!\n";
        }
        else
        {
            for (int i = top; i >= 0; i--)
            {
                cout<<arr[i]<<"\n";
            }
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

    cout<<"Reversed stack:\n";
    Stack rev_stack;

    while(!org_stack.isEmpty())    //*we use object(stack) from (original stack before reverse it) to test if the stack will be reversed is empty or not
    {
        int element = org_stack.pop();  //pop(20(top) original stack) then push(20((top) rev stack), pop(15) then push(15 (top)), pop(10)
        rev_stack.push(element);    
    }
    rev_stack.print();

    int x = 0, y = 0;;
    org_stack.get_top(x);   //*will print stack is empty because we poped all elemnts from(original stack) into (reversed stack), so that original stack became empty and reversed stack became full
    rev_stack.get_top(y);

    cout<<"x by reference = "<<x<<"\ny by reference = "<<y<<"\n";   //*x = 0 because the(original stack is empty as we poped all its elements)

    return 0;
}
