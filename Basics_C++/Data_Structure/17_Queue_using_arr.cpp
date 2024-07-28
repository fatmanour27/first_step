//dynamic array

#include <iostream>
#include <cassert>

using namespace std;

//const int MAX_SIZE = 1000;  //*dynamic array not has constant size

class Queue
{
    int *arr;  //*dynamic array as a pointer , the size of array is not fixed and we can control and specify the size of array as we want
    int maxSize;
    int front;
    int rear;
    int num_elements;  //length or count

    public:

    Queue(int size) 
    {
        if (size <= 0)  //* we check if (size) that user input = negative value , by default make size = 100 to ignore any erorr may occurs if user input size by negative value
        { 
            maxSize = 100; 
        }
        maxSize = size;       //*maxSize of array if we call this constructor and specify a certain size the q1 object receive it that mean we can't add any other elements greater than this size
        arr = new int[size];
        front = 0;
        rear = maxSize - 1;
        num_elements = 0;
       
    }

    bool isEmpty()
    {
        return num_elements == 0;
    }
    bool isFull()
    {
        return num_elements == maxSize;
    }

    void Enqueue(int element)
    {
        if(isFull())
        {
            cout<<"The queue is full\n";
        }
        else
        {
            rear = (rear + 1) % maxSize;
            arr[rear] = element;
            num_elements++; 
        }
    }

    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"The queue is empty\n";
        }
        else
        {
            front = (front + 1) % maxSize;
            num_elements--;
        }
    }

    int get_front()
    {
        assert(!isEmpty());   //*assert func: the same of if contidition but the assert func has advantage as it find where the erorr/bugs
        return arr[front];
    }
    int get_rear()
    {
        assert(!isEmpty());
        return arr[rear];
    }

    int search(int key)
    {
        int index = -1;
        if(!isEmpty())
        {
            for(int i = front; i != rear + 1; i = (i + 1) % maxSize)
            {
                if(arr[i] == key)
                {
                    index = i;
                    break;
                }
            }
        }
        else
        {
            cout<<"queue is empty\n";
        }
        return index;
    }

    int search2(int key)
    {
        int index = -1;
        if(!isEmpty())
        {
            for(int i = front; i != rear; i = (i + 1) % maxSize)
            {
                if(arr[i] == key)
                {
                    index = i;
                    break;
                }

                if(index == -1)     //in this step we check if key there is in rear as a last element that missed in for loop when rear = front(the loop will break)
                {
                    arr[rear] = key;
                    index = rear;
                }
            }
        }
        else
        {
            cout<<"queue is empty\n";
        }
        return index;
    }

    void print()
    {
        if(isEmpty())
        {
            cout<<"the queue is empty\n";
        }
        else
        {
            for(int i = front; i != rear; i = (i + 1) % maxSize)
            {
                cout<<arr[i]<<" ";
            }
            cout<<arr[rear]<<"\n";
        }
    }
};

int main()
{
    Queue q1(4);  
    q1.Enqueue(5);
    q1.Enqueue(10);
    q1.Enqueue(15);
    q1.Enqueue(20);
    q1.Enqueue(30);

    q1.print();       //*will not print any elements added to array greater than its size 4 , will not print 30, because 4 is a max size of array

    cout<<"The index of element we search for = "<<q1.search(15)<<"\n";
    cout<<"The index of element we search for = "<<q1.search2(15)<<"\n";
    q1.print();

}