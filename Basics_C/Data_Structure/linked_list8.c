//*Array is fixed according to size: hard in insert and delete process"sequential"
//*linked list is dynamic according to size: easy in insert and delete process"not sequential"
//*single linked list --> navigation is forward only"node cosist of data and link that has address of next node"
//*double linked list --> navigation is forward and backward
//*circular linked list --> last element linked to first element
//*insert process = Enqueue(back)  delete process = Dequeue(front) -->two pointers(front-back)
//*FIFO style--> first in, first out
//*insert process = Push           delete process = Pop
//*LIFO style--> last in, first out(top)/stack -->one pointer at the Top
#include <stdio.h> //*!Code of FIFO Style
#include <stdlib.h>
struct node //*declear a struct one of its elements is a pointer to struct of the same type
{
    int data;
    struct node * link;
};
void main(void)
{
    struct node * front, * back, * ptr;  //*front,back,ptr are pointers to struct node
    int size, i;  //*to know size of queue of lined list, i for loop

    printf("size:");
    scanf("%d", &size);

    front = NULL;  //*no value to pointer it

    for (i = 1; i <= size; i++)
    {
        if (front == NULL)
        {
            ptr = (struct node *) malloc (sizeof(struct node));
            front = ptr;
        }
        else
        {
            ptr->link = (struct node *) malloc(sizeof(struct node)); //*ptr is a pointer of link to pointer to memory allocation to save data in it
            ptr = ptr->link;
            back = ptr;
        }
        if (ptr != NULL)  //*ptr pointer to new place(has data)
        {
            printf("value of data[%d]:", i);
            scanf("%d", &ptr->data);
            ptr->link = NULL;
        }

    }
    //*front is a main pointer of linked list so that shouldn't use front, but use ptr"helper"
    printf("print queue by front at first time\n");
    ptr = front;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    printf("print queue by front at second time\n");
    ptr = front;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    printf("value of data in front is %d\n", front->data);
    printf("value of data in back is %d\n", back->data);
}