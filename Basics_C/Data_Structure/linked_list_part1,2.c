//* linked list is dynamic, insert and delete is easy               'advantages'
//* linked list waste memory and must access each node sequentially 'disadvantages'
//* types of linked list : singly, double, circular, doubly circular

//* linked list declaration:
/*
     #define DATA_TYPE char

     typedef struct node{
        DATA_TYPE element;
        struct node *next;
     }Node;
     Node *head;
*/
//* prototypes func of linked list
/*
Node *Append(Node *, DATA_TYPE);            -->func that add new node to linked list wheather this node was empty or contain elements
int Length(Node *);                         -->func that know how many of nodes in linked list
int Get_Element(Node *, int, DATA_TYPE *);  -->func that get data into node of linked list
Node *Delete_first_Node(Node *);            -->func that delete the first node of linked list 
int Delete_Node(Node *, int);               -->func that delete all nodes after the first node 'first node is exist'
Node *Insert_first(Node *, DATA_TYPE);      -->func that add node at start of linked list
int Insert_After(Node *, int, DATA_TYPE);   -->func that add any node after the first node of linked list
*/
#include <stdio.h>

#define DATA_TYPE char
typedef struct node{
    DATA_TYPE element;
    struct node *next;
    }Node;
    Node *head;

//* func that add new node to linked list wheather this node was empty or contain elements
Node *Append (Node *head, DATA_TYPE element)
{
    Node *new_node = NULL;     //*declear new node pointer is empty and its data type is Node, this pointer will store in stack so that when we want exite from func it will be deleted

    new_node = (Node *) malloc(sizeof(Node));  //*reserve block in heap of memory for the new node pointer its type is Node

    if(new_node == NULL)     //*if new node doesn't have block in memory return NULL
    {
        return NULL;
    }
    //* otherwise
    new_node->element = element;    //*fill new node with data until access to last node'next'
    new_node->next = NULL;          //*when we access to last node fill the next by NULL

    if(head != NULL)
    {
        Node *temp = head;    //* append another pointer 'temp' has the same value and data type of 'head = main pointer' , because if we use the 'head' to get a new node 'last node', head can't back to pointed to the first node so that append 'temp' 

        while(temp->next != NULL)  //* if not access to last node that is before NULL, store value of next node in temp
        {
            temp = temp->next;
        }
        //* otherwise
        temp->next = new_node;  //* if access to last node, append new node and fill it by NULL to end of linked list
    }
    return new_node;

}
//* Note : if we append new node in linked list not used before'new' = return head'new node'
//*      : if we append new node in linked list used before'has old nodes' = not return head'new node' because if we return it that will delete all old nodes which be appened before in linked list