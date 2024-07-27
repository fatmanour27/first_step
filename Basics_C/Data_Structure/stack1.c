//* we use stack to get letters in reverse order or to calculate mathematic value or to save all URLs you have visited previously in browser by using back button

//* pop (top) : deleting or drawing data from top of stack "last element in stack"
//* push (bottom) : inserting or adding data to stack
//* last element entered into stack is the first element can draw it (top) --> last in, first out LIFO

//* func of stack with array : Top, Pop, IsEmpty, IsFull

//* stack with array : 
//*  fixed num of data (size of array)
//*  top set to -1 (must be empty)(underflow)
//*  0 = one element in stack
//*  N - 1 = stack is full, N = stack is (overflow)

//*Prototypes of func of stack :
/* 
   int Isfull(Stack *);
   int IsEmpty(Stack *);
   int Push(DATA_TYPE, Stack *);
   int Pop(DATA_TYPE *, Stack *);
   int StackSize(Stack *);
   void Init(Stack *);
   void ClearStack(Stack *);
*/
#include <stdio.h>
#define MAX_SIZE 10      //* maximum size of num of elemnts in stack
#define DATA_TYPE char   //* type of array is char

typedef struct
{
    DATA_TYPE elements[MAX_SIZE];  //* DATA_TYPE = char

    int top;
}Stack;

   int Isfull(Stack *);
   int IsEmpty(Stack *);
   int Push(DATA_TYPE, Stack *);
   int Pop(DATA_TYPE *, Stack *);
   int StackSize(Stack *);
   void Init(Stack *);
   void ClearStack(Stack *);
//*******************************************************************
int main()
{
    Stack stack;   //* type of var stack is Stack so that type of pointer is the same type
    Stack *ptr_stack = &stack;

    DATA_TYPE element;
    DATA_TYPE *ptr_element = &element;

    int x = 0, temp = 0;

    Init(ptr_stack);   //* func to fill stack by 6 elements

    Push('F', ptr_stack);
    Push('a', ptr_stack);
    Push('t', ptr_stack);
    Push('o', ptr_stack);
    Push('m', ptr_stack);
    Push('a', ptr_stack);

    if(IsFull(ptr_stack))
    {
        printf("\n stack is full");
    }
    else if(IsEmpty(ptr_stack))
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("\n stack size %d", StackSize(ptr_stack));
    }
    temp = ptr_stack->top;   //* put the element into stack/ temp by using pointer to top of stack "last element in stack = m"

    for(x = 0; x <= temp; ++x)
    {
        Pop(ptr_element, ptr_stack);
        printf("\n element: %c", *ptr_element);
        printf("\n size: %d", StackSize(ptr_stack));
        
    }
    return 0;
}
//* func initializing of stack:

  /*  1)Top = -1;
      2)Exit   */
      
void Init(Stack *ptr_stack){    // *ptr_stack: pointer to stack its type is Stack
ptr_stack->top = -1;
}
//* func checking if stack is full
/*   1) if Top = Max - 1, then return 1 otherwize return 0
     2)Exit    */

int IsFull(Stack *ptr_stack)
{
    if (ptr_stack->top == MAX_SIZE - 1){
        return 1;
    }else{
        return 0;
    }
}
//* func checking if stack is empty
 /*   1) if Top = Max - 1, then return 1 otherwize return 0
      2) Exit   */

int IsEmpty(Stack *ptr_stack)
{
    if (ptr_stack->top == - 1){
        return 1;
    }else{
        return 0;
    }
}
//*func to add data into stack
/*   1) if Top = Max - 1, then return 1 otherwize Top = Top + 1
     2) Exit   */

  int Push(DATA_TYPE element, Stack *ptr_stack)
  {
    if (ptr_stack->top == MAX_SIZE - 1){  //* if stack full
        return 0;
    }else{        //*if stack is not full
        ptr_stack->top++;
        ptr_stack->elements[ptr_stack->top] = element;  //* pointer to stack to pointed to array named elements to pointed to [index of array(top)] to store value of parametre named element
        return 1;
    }
  }
//*func to pop data from stack
/*   1) if Top = -1, then return 0 otherwize Top = Top - 1
     2) Exit   */

  int Pop(DATA_TYPE *ptr_element, Stack *ptr_stack)
  {
    if (ptr_stack->top == -1){ //* if stack empty 
        return 0;
    }else{        //*if stack is not empty
        *ptr_element = ptr_stack->elements[ptr_stack->top];
        ptr_stack->top--;   //* num of elements of array became less because of drawing process but the size of array is not change
        return 1;
    }
  }
//*func return num of elements exist into stack
int StackSize(Stack *ptr_stack)
{
    if(ptr_stack->top == -1){  //if stack is empty
        return 0;
    }else{
        return (ptr_stack->top + 1);
    }
}
//* func to clear or delete stack
void ClearStack(Stack *ptr_stack)
{
    ptr_stack->top = -1;
}