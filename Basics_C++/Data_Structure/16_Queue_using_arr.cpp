//dynamic array

#include <iostream>
#include <cassert>

using namespace std;

const int MAX_SIZE = 1000;

class Queue
{
    int *arr;  //*dynamic array as a pointer , the size of array is not fixed and we can control and specify the size of array as we want
    int front;
    int rear;
    int num_elements;  //length or count

    public:

    Queue(int size)
    {
        if (size <= 0)  //* we check if (size) that user input = negative value , by default make size = 100 to ignore any erorr may occurs if user input size by negative value
        { 
            size = 100; 
        }
        arr = new int[size];
        front = 0;
        num_elements = 0;
        rear = (MAX_SIZE - 1);
    }
    bool isEmpty()
    {
        return num_elements == 0;
    }
    bool isFull()
    {
        return num_elements == MAX_SIZE;
    }

    void Enqueue(int element)
    {
        if(isFull())
        {
            cout<<"The queue is full\n";
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
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
            front = (front + 1) % MAX_SIZE;
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

    void print()
    {
        if(isEmpty())
        {
            cout<<"the queue is empty\n";
        }
        else
        {
            for(int i = front; i != rear; i = (i + 1) % MAX_SIZE)
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

    q1.Enqueue(25);
    q1.Enqueue(30);

    q1.print();  //*will print any another elements even greater than size(4), will print 25 as a fifth element of array that its size was 4 but after we add the fifth element the size of array became (5) 

}

