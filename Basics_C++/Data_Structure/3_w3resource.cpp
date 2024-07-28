#include <iostream>
#include <climits>

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

    double average()
    {
        if(isEmpty())
        {
            return 0.0;
        }
        else
        {
            int sum = 0;
            for(int i = 0; i <= top; i++)
            {
                sum = sum + arr[top];
            }
            return (double)sum / (top + 1);
        }
    }

    int max()
    {
        if(isEmpty()) {return INT_MIN;}   //*INT_MIN is constant var built in c++, its header is <climits>. This is intended to that there's no maximum value because the stack is empty.

        else
        {
            int max_val = arr[0];

            for(int i = 1; i <= top; i++)
            {
                if(arr[i] > max_val)
                {
                    max_val = arr[i];
                }
            }
            return max_val;
        }
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<"the elements of stack before reversing:\n";
    s.print();

    double average = s.average();
    cout<<"The average of elements = "<<average<<"\n";

    int maxv= s.max();
    cout<<maxv<<"\n";
}