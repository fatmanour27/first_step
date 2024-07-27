//* circular Queue

#include <stdio.h>
#define MAX_SIZE 10
#define DATA_TYPE char

typedef struct
{
    DATA_TYPE elements[MAX_SIZE];

    int front;
    int rear;
}Queue;

int Isfull(Queue *);
int IsEmpty(Queue *);
int Enqueue(DATA_TYPE, Queue *);
int Dequeue(DATA_TYPE *, Queue *);
int QueueSize(Queue *);
void Init(Queue *);
void ClearQueue(Queue *);
//******************************************************************
int main()
{
    Queue queue;
    Queue *ptr_queue = &queue;

    DATA_TYPE element;
    DATA_TYPE *ptr_element = &element;

    int x = 0, temp = 0;
   

    Init(ptr_queue);

    Enqueue('F', ptr_queue);
    Enqueue('a', ptr_queue);
    Enqueue('t', ptr_queue);
    Enqueue('o', ptr_queue);
    Enqueue('m', ptr_queue);
    Enqueue('a', ptr_queue);

    if(IsFull(ptr_queue))
    {
        printf("\n Queue is full");
    }
    else if(IsEmpty(ptr_queue))
    {
        printf("\n Queue is empty");
    }
    else
    {
        printf("\n Queue size %d", QueueSize(ptr_queue));
    }

    temp = ptr_queue->front;   //* put the element into stack/ temp by using pointer to top of stack "last element in stack = m"

    for(x = temp; x <= ptr_queue->rear; ++x)
    {
        Dequeue(ptr_element, ptr_queue);
        printf("\n element: %c", *ptr_element);
        printf("\n size: %d", QueueSize(ptr_queue));
        
    }
    return 0;

}
void Init(Queue *ptr_queue)  //*initializing of Queue
{
    ptr_queue->front = -1;
    ptr_queue->rear = -1;
}
//*func to check if queue is empty
int IsEmpty(Queue *ptr_queue)
{
    if((ptr_queue->front == -1) && (ptr_queue->rear == -1)){
        return 1;  //* if queue is empty
    }else{
        return 0;
    }
}
//*func to check if queue is full
int IsFull(Queue *ptr_queue)
{
    if((ptr_queue->rear + 1) % MAX_SIZE == ptr_queue->front){
        return 1;
    }else{
        return 0;
    }
}
//* func to delete the queue
void ClearQueue(Queue *ptr_queue)
{
    ptr_queue->front = -1;
    ptr_queue->rear = -1;
}
//* func to add data in queue
int Enqueue(DATA_TYPE element, Queue *ptr_queue)
{
    if((ptr_queue->rear + 1) % MAX_SIZE == ptr_queue->front){  //*if queue is full
        return 0;
    }else if ((ptr_queue->front == -1) && (ptr_queue->rear == -1)){  //*if queue is empty
        ptr_queue->front = ptr_queue->rear = 0;
    }else{
        ptr_queue->rear = (ptr_queue->rear + 1) % MAX_SIZE;  //*increase the rear by 1 to add the element
    
    }
    ptr_queue->elements[ptr_queue->rear] = element;
    return 1;
}
//* func to remove data in queue
int Dequeue(DATA_TYPE *ptr_element, Queue *ptr_queue)
{
    if((ptr_queue->front == -1) && (ptr_queue->rear == -1))
    {  //*if queue is empty
        return 0;
    }
    *ptr_element = ptr_queue->elements[ptr_queue->front];  //*delete the element that exist in front of queue(Dequeue)
    
    if ((ptr_queue->front == ptr_queue->rear))
    {    //* if we have one element in array to dequeue
        ptr_queue->front = ptr_queue->rear = -1;
    }
    else
    {                                        //* if we have two element
        ptr_queue->front = (ptr_queue->front + 1) % MAX_SIZE;  //*decrease the front by 1 to dequeue element
    }
    return 1;  //* if dequeue is success
}
//* func to know num of elements of queue
int QueueSize(Queue *ptr_queue)
{
    if ((ptr_queue->front == -1) && (ptr_queue->rear == -1))
    {  //*if queue is empty
        return 0;   //* zero elements
    }
    else if(ptr_queue->front < ptr_queue->rear)
    {   //* if front = 0, rear = 1   front < rear
        return (ptr_queue->rear - ptr_queue->front + 1);  //* return two elements (1 - 0 + 1 = 2-->rear)
    }
    else if(ptr_queue->rear < ptr_queue->front)
    {   //* if front = 2, rear = 0   rear < front
        return ((MAX_SIZE - ptr_queue->front) + (ptr_queue->rear + 1));  //* return max size (5 by defualt) - front index(2) = 3 + rear index(0) + 1 = 4 index then num of elements = 5 
    }
    else
    {
        return 1;  //*return 1 if front = rear = 0 != -1
    }
}
