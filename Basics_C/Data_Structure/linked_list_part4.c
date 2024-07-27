#include <stdio.h>

#define DATA_TYPE char
typedef struct node{
    DATA_TYPE element;
    struct node *next;
    }Node;
    Node *head;
//* program if we have 3 nodes
//*func that delete all nodes after the first node 'first node is exist', delete from sec to last node
int Delete_Node(Node *head, int node_num)   //* we will access to the node that contain address of node will be deleted, where the node contain address is before node will be deleted
{
    if(head == NULL)
    {
        return 0;
    }
    if((node_num > Length(head)) || (node_num < 2)) //*check if number of node which entered greater than main number of nodes existing in linked list or less than 2 in state if we have 3 nods, if that true return -1
    {
        return -1;
    }

    Node *previous_node = head, *deleted_node;  //*previous_node pointer to Penultimate node, it has same value of head and has the same address of last node. last_node pointer to last node that will be deleted

    int x = 1;            //* num of nodes start from 1

    while(x < node_num - 1)                    //* while loop specifies num of node which we want dlete it, if x = 1 < 3 - 1 true, x = 2 < 3 - 1 false then we stop at second node which be before last node 3 and exit from loop 
    {
        previous_node = previous_node->next;
        x++;
    }

    deleted_node = previous_node->next;          //* access to address of node will be deleted and we will put into the next of previous node 'before last node'
    previous_node->next = deleted_node->next;   //* put NULL into the next of previous node because previous node became last node after deleting the last node via its address 
    free(deleted_node);                        //* free : delete the node

    return 1;
}

//*func that add a new node at start of linked list
Node *Insert_first(Node *head, DATA_TYPE element)
{
    if(head == NULL)
    {
        return NULL;   //* return NULL because data type of func Insert_first is struct(node)
    }

    Node *new_first_node;

    new_first_node = (Node *) malloc(sizeof(Node));   //* reserve place for new first node in memory

    if(new_first_node == NULL)                       //* check if first new node hasn't block in linked list, if true then return head = old nodes
    {
        return head;       //* return head without new node if new node doesn't have a place in linked list
    }
    //* otherwise, if first new node reserve a block
    new_first_node->element = element;   //* fill the new first node with data
    new_first_node->next = head;         //* put address of old node "that head was pointing to it" or address of "old head" into next of new node
    head = new_first_node;               //* put address of new node into head instead of old address of old first node, then the head can points to address of new node which became the first node  

    return head;   //* return head with new node
}

//*func that add any node after (first or sec or.... node) of linked list
int Insert_After(Node *head, int node_num, DATA_TYPE element)  //* node_num : is number of the node which will make insertion after it
{
    if(head == NULL)
    {
        return 0;
    }

    if((node_num > Length(head)) || (node_num < 1))
    {
        return -1;
    }
    Node *previous = head, *inserted_node;   //* put address of head into address of previous, then  

    int x = 1;

    inserted_node = (Node *) malloc(sizeof(Node));

    if(inserted_node == NULL)  //* check if node will be inserted doesn't have block in heap of memory, if true return 0  
    {
        return 0;
    }

    while(x < node_num)
    {
        previous = previous->next;
        x++;
    }

    inserted_node->element = element;
    inserted_node->next = previous->next;   //* put address of previous node 'that is before the inserted node' into next of 'inserted node to indicate to next node instead of previous indicate next'. Note: the address of next of previous node = address of the next node
    previous->next = inserted_node;         //* put address of inserted node into next of previous to indicate to inserted node instead of previous was indicating to next node

    return 1;    //* return 1 when new node was inserted
}