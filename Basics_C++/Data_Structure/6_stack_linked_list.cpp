//*node: (int-float...)value + pointer,  type of pointer is (node)
//*advantage of using pointer instead of array in stack is  Not being restricted to a fixed size as we can determine the required size by pointer that save the memory
//*we use tne node as a struct

#include <iostream>

using namespace std;

template<typename T>
class Stack
{
    struct node
    {
        T value;   
        node *next;
    };
    node *top;

    public:
    Stack():top(NULL){}    //*(pointer of first node) will points to NULL and (pointer of top) points to first node that points to NULL

    bool isEmpty()
    {
        return top == NULL;    //*if top = NULL return true, else return false
    }

    void push(T new_value)     
    {
        node *new_node_ptr = new node;    //*we must reserve location(node) at memory for the (new pointer) that points to (new node), new node consist of(value/element and pointer)
        //new_node_ptr points to next pointer = NULL
        if(new_node_ptr == NULL)    //*the pointer of first node in stack points to NULL, that mean we allocate memory for node but pointer of node points to NULL that mean not there values/node tp point to them
        {
            cout<<"This stack is empty !\n";
        }
        else
        {
            new_node_ptr->value = new_value;  //*new value is the value will push/add it in main
            new_node_ptr->next = top;         //*connect (next) of new node with(top/old node= node before new node), the (next) of (new node) points to (top) of the node that before (new node)
            top = new_node_ptr;               //*note: the next of new node points to the same location that top stand it
        }
    }
    /*void push(int value)
        {
            node *newnode;
            newnode->data = value;
            //!if(isempty())//If it is true .We will make new node then make the top point it
               //! newnode->next = NULL;
            else//If it is false .We will make the next of new node = top Cuz top is pointing last element
                newnode->next = top;
            top = newnode;
        }*/

    void pop()
    {
        if(isEmpty())
        {
            cout<<"This stack is empty !\n";
        }
        else
        {
            node *temp = new node;
            temp = top;                  //*temp is a pointer points to the last node on the top of stack to delete it, so that we have to initialize location in memory for this pointer(temp) then it will points to top of stack then top will point to the next of previous node then temp will pont to the next of the node will be deleted and make it = NULL
            top = top->next;
            temp = temp->next = NULL;    //*temp = NULL that mean delete element from top

            delete temp;
        }
    }

    void pop(T &node_will_be_deleted)    //*keep value of element in stack after deleting this element
    {
        if(isEmpty())
        {
            cout<<"This stack is empty !\n";
        }
        else
        {
            node_will_be_deleted = top->value;     //*the node will be deleted store in it the (value) that (top) points to it    

            node *temp = new node;
            temp = top;
            top = top->next;
            temp = temp->next = NULL;

            delete temp;
        }
    }
    T peek()
    {
        if(top == NULL)
        {
            cout<<"stack is empty"<<"\n";

            return T();    //*that mean if(int) or (double) or (float) or (short) or (bool) or (long) or (unsigned - unsigned int) return (0), if(char) or (string) will return (NULL)
        }
        else
            return top->value;
    }
    void get_top(T &topelement)
    {
        if(isEmpty())
        {
            cout<<"This stack is empty !\n";
        }
        else
        {
            topelement = top->value;
        }
    }

    void print()
    {
        if(top != NULL)
        {
            cout<<"elements of stack from top to deep = "<<top->value<<" "<<top->next<<"\n";
        }
    }
    void print2()
    {
        node *counter;
        counter = top;

        while(counter != NULL)
        {
            cout<<"elements of stack from top to deep = "<<counter->value<<"\n";
            counter = counter->next;
        }
    }
    
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.print2();

    int x = 0;
    s.get_top(x);      //*get_top func only recieve/get top element of stack 
    cout<<"The top element of stack = "<<x<<"\n";

    int top_ele = s.peek();
    cout<<"Top element in stack is "<<top_ele<<"\n";
}