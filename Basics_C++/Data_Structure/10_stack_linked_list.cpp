#include <iostream>

using namespace std;

class Node {                  
    
    public: 
    int value;
    Node *next;

    public:
    Node() : value(0), next(nullptr) {}  //default constructor
   
};

class Stack : public Node
{
public:
   //Stack() : Node(NULL) {}     //*(Stack class) inherit automatically constructors from base class(Node class) as we initialize data of (Node class) within (Stack class) by default inherited constructor(Node) value = 0; next = nullptr
   
    bool isEmpty()
    {
        return (this->next == NULL);  //* (this) pointer points to the (top) of stack because the pointer of next of (first node) in stack points to NULL and the (top) pointer of stack points to NULL when stack is empty and (this) pointer points to next of first node = NULL so that (this) pointer points to (top)
    }

    void push(int new_value)
    {
        Node *new_node_ptr = new Node;

        if (new_node_ptr == NULL)
        {
            cout << "stack is underflow and we failed to allocate memory for ptr \n";
        }
        else
        {
            new_node_ptr->value = new_value;
            new_node_ptr->next = this->next;            //*new_node_ptr->next = top , new_node_ptr->next = this->next, this->next(next of top node that top pointer points to it)
            this->next = new_node_ptr;                  //*this->next->top = new_node_ptr
        }
    }

    void pop(int &last_top)
    {
        if (isEmpty())
        {
            cout << "stack is empty\n";
            return;                      //*return statement exit from (pop func) and prevent excute (else block) if stack is empty
        }
        else
        {
            last_top = this->value;

            Node *temp = this->next;
            this->value = this->next->value;
            this->next = this->next->next;

            free(temp);  
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "stack is empty/underflow\n";
        }
        else
        {
            Node *current;
            current = this->next;

            while (current != NULL)
            {
                cout << "elements of stack = " << current->value << "\n";
                current = current->next;
            }
        }
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);

    int x;
    s.pop(x);
    cout << "we popped the last element of the stack (15)\n";
    s.display();

    return 0;
}