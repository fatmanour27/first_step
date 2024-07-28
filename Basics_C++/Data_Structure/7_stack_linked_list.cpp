#include <iostream>

using namespace std;

struct node
    {
        int value;
        node *next;
    };

class Stack
{
    node *top;
    
    public:
    Stack():top(NULL){}
    
    bool isEmpty()
    {
        return top == NULL;    //*if top = NULL return true, else return false
    }
    
    void push(int new_value)
    {
        node *new_node_ptr = new node;
        
        if(new_node_ptr == NULL)
        {
            cout<<"we can't allocate memory to new pointer\n";
        }
        else
        {
            new_node_ptr->value = new_value;
            new_node_ptr->next = top;
            top = new_node_ptr;
        }
    }
    void pop(int &node_will_be_deleted)
    {
        if(isEmpty())
        {
            cout<<"stack is empty!\n";
        }
        else
        {
            node_will_be_deleted = top->value;
            node *temp = new node;
            temp = top;
            top = top->next;
            temp = temp->next = NULL;
            free(temp);
        }
    }
     int get_top(int &top_element)    //*get_top func return value
    {
        if(isEmpty())
        {
            cout<<"stack is empty!\n";
        }
        else
        {
            top_element = top->value;
            return top_element;
        }
    }
    
    
    void print()
    {
        node *counter;
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
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    
    s1.print();
    
    int x = 0;
    x = s1.get_top(x);           //*get_func recieve and return int (top element) of stack
    cout<<"Top element = "<<x<<"\n";
    
    return 0;
    
}