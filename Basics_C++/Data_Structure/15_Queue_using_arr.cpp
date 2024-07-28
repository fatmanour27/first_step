//* Queue is  non primitive data structure FIFO(first in first out)
//* (front = rear) means that the array of queue contain (one) element
//*operations/applications of queue: printer, services centers, CPU of memory
//*time complexity of Queue = add(rear), remove(front) = O(1),   access(raer, front) = O(1),   search = O(n).

/*

* if rear stand on (last index) of array and we do (rear = rear + 1 % maxsize of array) it will move to the first index (0), rear = 0
* if front stand on (last index) of array and we do (front = front + 1 % maxsize of array) it will move to the first index (0), front = 0

*special case of queue: circular queue
*special case of starting the Queue: front = 0 (index), rear = maxsize - 1

*to check if Queue empty or full we must declare a variable (count), if count increase(rear) that mean that (addition element) then the queue is full, if count decrease(front) that mean the (deleting element) then queue is empty
*if count == maxsize then queue is full, if count == 0 then queue is empty

notice: the range of elements in queue = rear - front
* if maxsize of array of queue = 100 and rear = 70(index) and front = 50(index) then the range of elements in array = rear - front = 20 elements
* if maxsize of array of queue = 100 and rear = 5(index) and front = 99(last index) then the range of element in array = rear 5(index = 6 elements) + 1(last index = front = element) = 7 elements //!important
* if maxsize of array of queue = 15 and front = 13 and count of elements = 5 then the (rear) =  (count of elements - 1 to get index of last element) - (maxsize - front) = (5 - 1) - (15 - 13) = 4 - 2 = 2 (index) of rear
* count of elements = range between front and rear , if maxsize of array = 100 and front = 99(maxsize), and rear = 3 then count = (index 3 = 4 elements) + (last index 1 = one element) then count = 4 + 1 = 5

* if front advanced on rear by (one) that mean else (we delete element without add another element by rear then queue is empty) or (we delete element with adding another elements in rear then queue is full)

*/
/*
*functions of queue:
* isEmpty()
* isFul()
* enqueue()
* dequeue()
* get_front()
* get_raer()
* get_size()
* clear()

*/
#include <iostream>
#include <cassert>

using namespace std;

const int MAX_SIZE = 100;

class Queue
{
    int arr[MAX_SIZE];
    int front;
    int rear;
    int num_elements;  //length or count

    public:

    Queue(): front(0), num_elements(0), rear(MAX_SIZE - 1){}    //rear = MAX_SIZE - 1 to start queue based on circular queue concept 

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
        assert(!isEmpty());   //*assert func: the same of (if) contidition but the assert func has advantage as it find where the erorr/bugs during run time
        return arr[front];
    }
    void getFront(int &front_ele)
    {
        assert(!isEmpty());
        front_ele = arr[front];
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
                cout<<arr[i]<<" ";   //if front = rear loop will break, front = rear that mean(there is one element in queue) will not print because the loop will break so that we will print (rear = last element) out of loop
            }
            cout<<arr[rear]<<"\n";   //will print (last element in queue)
        }
    }
    void print_e()
    {
        if(isEmpty())
        {
            cout<<"the queue is empty\n";
        }
        else
        {
            for(int i = front; i != rear + 1; i = (i + 1) % MAX_SIZE)   //if front = rear loop will break, front = rear that mean(there is one element in queue) this element will not print because the loop will break so that we will print (rear + 1) to get last element in queue
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    void print_el()
    {
        if(isEmpty())
        {
            cout<<"the queue is empty\n";
        }
        else
        {
            int i = front - 1;    

            while(i != rear)
            {
                i = (i + 1) % MAX_SIZE;
                cout<<arr[i]<<" ";
            }
        }
    }
};

int main()
{
    Queue q1;
    q1.Enqueue(5);
    q1.Enqueue(10);
    q1.Enqueue(15);
    q1.Enqueue(20);

    q1.print();

    q1.Dequeue();     //*will delete first element enter in queue(5)
    q1.print_e();
    cout<<"\n";
    q1.Enqueue(25);  
    q1.print_el();      //*will print 25 at the rear of queue/ at last index,  10 15 20 25
    cout<<"\n";
    cout<<q1.get_front()<<"\n";

}