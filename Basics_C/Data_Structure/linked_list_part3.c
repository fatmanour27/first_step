#include <stdio.h>

#define DATA_TYPE char
typedef struct node{
    DATA_TYPE element;
    struct node *next;
    }Node;
    Node *head;

//*func that counts the nodes in linked list
int Length(Node *head)
{
    int len = 1;

    if(head == NULL)   //* if linked list is empty
    {
        return 0;
    }
    Node *temp = head;

    while(temp->next != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

//*func that get data into node of linked list
int Get_Element(Node *head, int node_num, DATA_TYPE *element)  //* head: pointer to first node, node_num: give number of node that we want to its value, element: pointer to address of data type to store value of node
{
    if(head == NULL)  //*check if linked list is empty
    {
        return 0;    //* return 0 because the data type of func Get_element is (int)
    }
    if((node_num > Length(head)) || (node_num < 1)) //*check if number of node which entered greater than main number of nodes existing in linked list or = 0, if that true return -1
    {
        return -1;
    }
    
    Node *temp = head;
    int x = 1;

    while(x < node_num)  //* if not access to last node that is before NULL, store value of next node in temp
        {
            temp = temp->next;
            x++;
        }
        //* otherwise
        
        *element = temp->element;  //* store value of certain node via using element pointer to get address of element var by using pointer temp to address of element

        return 1;   //* when success
}

//*func that delete the first node of linked list 
Node *Delete_first_Node(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }

    if(Length(head) == 1)  //* check if number of nodes = 1, that mean we have only one node will be deleted
    {
        free(head);
        return NULL;
    }
    //* otherwise, if we have more than one node (2, 3, ...)
    else
    {
        Node *second_node;         //* second_node pointer to second node after the first has been deleted
        second_node = head->next;  //* make value of head = value of second node "not the first" to points to address of sec node

        free(head);   //* delete old value of head which was pointing to first node"deleted" to save space in memory
        
        return second_node;
    }
}