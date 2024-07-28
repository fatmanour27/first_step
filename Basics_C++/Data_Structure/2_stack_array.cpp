
/*
*ADT(abstract data type): structure data type to deal with data and instruction or operations
*importance of data structure: storage and manipulate data in effecient way
*Data structure: -primitive data structure -non primitive
*primitive: int float char pointer etc..
*non primitive: linear, non linear

*linear: array , linked list , stack , queue
*non linear: trees , graphes

*array - linked list: physical data structure because we store an organize data by them
*stack - queue - trees - graphes: logical data structure depend on physical data structure (aray or linked list)

*static data structure: fixed size(array)
*dynamic data structure: changable size(linked list)

*operations on data structure: -traversing(accessing each data and display it) -searching(find location of data(key)) -insertion(adding new data)  -deletion(delete data) -sorting(arrange data in logical fashion)  -merge(cobining data from two or more data structure together into one)

*memory RAM: code->stack->heap
*static memory allocation: (stack of memory) during (compile time) initialize in it primitive data type (int , float ...) because the size of primitive data type is fixed/static, and the data of code deleted automatically 
*dynamic memory allocation: (Heap of memory), during (run time) by keywords as(new) and we must delete the memory that reserved in heap after benfit from it

*the code can't access the heap in memory but it can access the stack so that we can use pointer in stack points to the address of any var in heap as we can access heap location by (pointer)


*/


//*stack(based on array): LIFO, last in first out
/*
* push(): add elements
* pop(): delete elements
* getop(): get last element in stack
* isEmpty(): check if stack is empty or not, use this func when we want to delete elements or get the top element
*/

#include <iostream>

using namespace std;

const int SIZE = 100;

class Stack
{
    int top;       //top represented to (index) in Stack of array
    int arr[SIZE];
    
    public:
    
    Stack():top(-1){};  //give initial value to (top) = -1, because we will add 1 in the first addition process in stack to get (0 --> the first index in array) = -1(top) + 1(first addition in stack) index which the first place in stack(top)
    
    void push(int value)     //push func to add elements in stack
    {
        if(top >= 100 - 1)        //*check if stack is full(if top = 0 >= 99) 0 to 99 index = 100 elements
        {
            cout<<"The stack is full !\n";
        }
        else
        {
            top++;      //*by increment the (top) we increment the index of stack as we move to the next element in stack, we move up in stack during addition elements
            arr[top] = value;
        }
    }
    /*bool isEmpty()    is the same top < 0
    {
        return top < 0;   //*if top < 0 (top = -1) return true, else return false
    }*/
    void pop()        //*we delete the element without keep its value after deleting
    {
        if(top < 0)
        {
            cout<<"The stack is empty !\n";
        }
        else
        {
            top--;         //*decrement (top) when deleting element
        }
    }
    void pop(int &val)   //*we delete the element and we keep its value after deleting 
    {
        if(top < 0)
        {
            cout<<"The stack is empty !\n";
        }
        else
        {
            val = arr[top];     //*before deleting keep the value of element then delete by decrement
            top--;         
        }
    }
    void get_top(int &last_val)     //*use reference sign (&) to tell compiler that (last_element) var is the same (x) var in main func, this mean when we modify on (x) the (last_element) will be modified too
    {
        if(top < 0)
        {
            cout<<"The stack is empty !\n";
        }
        else
        {
            last_val = arr[top];                    //*we get the last element in stack
            cout<<"Top element = "<<last_val<<"\n";
        }
    }
    void print()
    {
        for(int i = top; i >= 0; i--)  //*print the elements of stack from top to deep(from last element to first element)
        {
            cout<<"The elements of Stack from top to deep = "<<arr[i]<<"\n";
        }
    }
    
};


int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.print();

    int x = 0;
    s.get_top(x);
    cout<<"x by reference = "<<x<<"\n";  //will print 20(top element) because we tell the compiler that x = last_element var via using reference sign(&)
    
    
    
    return 0;
}
