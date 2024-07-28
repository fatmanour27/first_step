#include <iostream>

using namespace std;

class Node
{
    public:
    int value;
    Node *next;

    public:
    Node(): value(0), next(NULL){}    //default constructor
};

class Stack
{
    Node *top;

    public:
    Stack(): top(NULL){}

    bool isEmpty()
    {
        return (top == NULL);     //if top = NULL return true else return false
    }

    void push(int new_value)
    {
        Node *new_node_ptr = new Node;

        if(new_node_ptr == nullptr)            //*note: we can write (NULL) or (nullptr), Using nullptr makes the code more explicit and avoids some of the pitfalls associated with using 0 or NULL to represent null pointers, such as unintended conversions and overloaded function ambiguities
        {
            cout<<"stack is underflow \n";
        }
        else
        {
            new_node_ptr->value = new_value;
            new_node_ptr->next = top;
            top = new_node_ptr;
        }

    }
    void pop(int &last_top)
    {

        if(isEmpty())
        {
            cout<<"stack is empty\n";
        }
        else
        {
            last_top = top->value;
            Node *temp = new Node;
            temp = top;
            top = top->next;
            temp = temp->next = NULL;
            
            free(temp);
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"stack is empty/underflow\n";
        }
        else
        {
            Node *current;
            current = top;

            cout<<"elements of stack = ";
            while(current != nullptr)
            {
                cout<<current->value<<" ";
                current = current->next;
            }
        }
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);

    int x;
    s.pop(x);
    cout<<"we poped last element of stack(15)\n";

    s.display();
}
