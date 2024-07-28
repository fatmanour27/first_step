//*get size of stack

#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node *next;
};

class Stack
{
    int size_stack;
    Node *top;

    public:
    Stack(): size_stack(0), top(NULL) {}

    void push(int new_val)
    {
        Node *new_node_ptr = new Node;

        if(new_node_ptr == NULL)
        {
            cout<<"we can't allocate memory for new pointer\n";
        }
        else
        {
            new_node_ptr->value = new_val;
            new_node_ptr->next = top;
            top = new_node_ptr;

            size_stack++;
        }
    }

    void pop(int &new_val)
    {
        if(top == NULL)
        {
            cout<<"stack is empty\n";
        }
        else
        {
            new_val = top->value;

            Node *temp = new Node;
            temp = top;
            top = top->next;
            temp = temp->next = NULL;
            size_stack--;

            delete temp;
        }
    }

    int get_size()
    {
        return size_stack;
    }

    void print()
    {
        Node *counter;
        counter = top;
        
        while(counter != NULL)
        {
            cout<<"the elements of stack = "<<counter->value<<"\n";
            counter = counter->next;
        }
    }

};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"size of stack before pop() "<<s.get_size()<<"\n";
    s.print();

    int x;
    s.pop(x);
    cout<<"size of stack after pop() "<<s.get_size()<<"\n";
    s.print();

    return 0;
}