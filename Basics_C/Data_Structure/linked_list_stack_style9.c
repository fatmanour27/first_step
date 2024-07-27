#include <stdio.h> //*!Code of LIFO Style"Stack"
#include <stdlib.h>
struct node //*declear a struct one of its elements is a pointer to struct of the same type
{
    int data;
    struct node * link;
};
void main(void)
{
    struct node * top, * ptr;
    int size, i;  //*int size to know size of stack of lined list, i for loop

    printf("size:");
    scanf("%d", &size);

    top = NULL;  //*no value to pointer it

    for (i = 1; i <= size; i++)
    {
        if (top == NULL)
        {
            ptr = (struct node *) malloc (sizeof(struct node));
            top = ptr;
            ptr->link = NULL;
        }
        else
        {
            ptr = (struct node *) malloc (sizeof(struct node));
            ptr->link = top;
            top = ptr;
        }
        if (ptr != NULL)  //*ptr pointer to new place(has data)
        {
            printf("value of data[%d]:", i);
            scanf("%d", &ptr->data);
        }

    }
    printf("print stack by top at first time\n");
    ptr = top;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    printf("print queue by front at second time\n");
    ptr = top;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    printf("value of data in front is %d\n", top->data);
}