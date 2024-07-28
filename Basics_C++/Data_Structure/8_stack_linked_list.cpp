#include <iostream>

using namespace std;

template<typename T>
class Stack
{
    struct node
    {
        T value;   
        node *next;
    };
    node *top;

    public:
    Stack():top(NULL){}    

    bool isEmpty()
    {
        return top == NULL;    
    }

    void push(T new_value)   
    {
        node *new_node_ptr = new node;    
        
        if(new_node_ptr == NULL)    
        {
            cout<<"This stack is empty !\n";
        }
        else
        {
            new_node_ptr->value = new_value;  
            new_node_ptr->next = top;         
            top = new_node_ptr;               
        }
    }

    T peek()
    {
        if(top == NULL)
        {
            cout<<"stack is empty "<<"\n";

            return T();    //*that mean if(int) or (double) or (float) or (short) or (bool) or (long) or (unsigned - unsigned int) return (0), if(char) will return (NULL)
        }
        else
            return top->value;
    }
    
    bool isfull()
    {
        node *ptr = new node;
        if(ptr == NULL)
        {
            cout<<"we can't allocate memory for this pointer because the stack is full\n";
            return true;
        }
        else
        {
            cout<<"we can allocate memory for this pointer because the stack not full yet\n";
            return false;
        }

    }
    
};

int main()
{
    Stack<int> s;                    //*if we not pushed value onto stack, peek func of(int) or (double) or (float) or (short) or (bool) or (long) or (unsigned - unsigned int) return (0)
    int top_ele = s.peek();
    cout<<"(int) Top element in stack is "<<top_ele<<"\n";

    Stack<double> s2;
    double topv = s2.peek();
    cout<<"(double) Top element in stack is "<<topv<<"\n";

    Stack<float> s3;
    float topv1 = s3.peek();
    cout<<"(float) Top element in stack is "<<topv1<<"\n";

    Stack<short> s4;
    short topv2 = s4.peek();
    cout<<"(short) Top element in stack is "<<topv2<<"\n";

    Stack<bool> s5;
    bool topv3 = s5.peek();
    cout<<"(bool) Top element in stack is "<<topv3<<"\n";

    Stack<long> s6;
    long topv4 = s6.peek();
    cout<<"(long) Top element in stack is "<<topv4<<"\n";

    Stack<unsigned int> s7;
    unsigned int topv5 = s7.peek();
    cout<<"(unsigned int) Top element in stack is "<<topv5<<"\n";

    Stack<char> s8;
    char topv6 = s8.peek();
    cout<<"(char) Top element in stack is "<<topv6<<"\n";       //*if we not pushed value onto stack, peek func of (char) will return (NULL)

    Stack<string> s9;
    string topv7 = s9.peek();
    cout<<"(string) Top element in stack is "<<topv7<<"\n";   //*if we not pushed value onto stack , peek func of (string) will not return (0) or (NULL) or anything 

    Stack<string> s10;
    s10.push("fatoma");                                 //*if we pushed value onto stack, peek func of (string) will return the value we pushed
    string topv8 = s10.peek();
    cout<<"(string) Top element in stack is "<<topv8<<"\n";
//**************************************************************************************************************************
    Stack<int> s11;
    s11.push(1);
    s11.push(2);
    s11.isfull();

}