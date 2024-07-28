//front = rear = NULL there is not any elements in queue
#include <iostream>
#include <cassert>

using namespace std;

class Node
{
    public:

    int data;
    Node *next;
};

class Queue
{
    Node *front;
    Node *rear;
    Node *temp;
    int num_elements;  //length, count

    public:

    Queue()
    {
        front = rear = NULL;
        num_elements = 0;
    }

    bool isEmpty()
    {
        return num_elements == 0;
    }

    void Enqueue(int newElement)
    {
        if(isEmpty())
        {
            front = new Node;        //front is newnode/firstnode if queue is empty
            front->data = newElement;
            front->next = NULL;
            rear = front;
            num_elements++;
        }
        else
        {
            Node *newnode = new Node;
            newnode->data = newElement;
            newnode->next = NULL;
            rear->next = newnode;     //*next of rear points to newnode
            rear = newnode;          //*rear move to next node(newnode)
            num_elements++;
        }
    }

    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty we can not dequeue\n";
            return;
        }
        else if(num_elements == 1)
        {
            cout<<"Queue contain one element\n";
            delete front;
            rear = NULL;                    //*we delete first node that front and rear points to it
            num_elements = 0;
        }
        else
        {
            temp = front;
            front = front->next;
            temp->next = NULL;
            delete temp;
            num_elements--;      //*num of elements will decrement because we delete element
        }
    }
    int get_front()
    {
        assert(!isEmpty());
        {
            return front->data;
        }
    }
    int get_rear()
    {
        assert(!isEmpty());
        {
            return rear->data;
        }
    }

    void get_front_by_reference(int &element)
    {
        if(!isEmpty())
        {
            element = front->data;
        }
        else
        {
            cout<<"Queue is empty\n";
            return;
        }
    }

    void Clear()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty\n";
            return;
        }
        else
        {
            while(front != NULL)
            {
                temp = front;
                front = front->next;
                delete temp;
            }
            rear = NULL;
            num_elements = 0;
        }
    }
    void Display()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty\n";
            return;
        }
        else
        {
            temp = front;
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }
    }

    int get_size()
    {
        return num_elements;
    }
};

int main()
{
    Queue q1;
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    cout<<"Elements of queue = ";
    q1.Display();
    cout<<"\n";
    cout<<"Front element in queue = "<<q1.get_front()<<"\n";
    cout<<"Rear element in queue = "<<q1.get_rear()<<"\n";
    cout<<"Length of queue = "<<q1.get_size()<<"\n";
    cout<<"After dequeue = ";
    q1.Dequeue();
    q1.Display();
    cout<<"\n";
    cout<<"Length of queue = "<<q1.get_size()<<"\n";
    cout<<"After clear queue\n";
    q1.Clear();
    q1.Display();
   
}