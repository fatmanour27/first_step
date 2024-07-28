#include <iostream>
#include <cstring>

using namespace std;

class Rectangle
{
    int *width, *length;        
    
    public:
    Rectangle():width(0), length(0){}
    Rectangle(int w, int l)
    {
        width = new int;           //*we initialize new location in memory for initializing 2 pointers point to value of int 
        length = new int;
        *width = w;                //*we store the value of w into width as pointer points to its this value stored
        *length = l;
    }
    ~Rectangle()
    {
        delete width;             //*we delete the initialized location in memory for pointer but not delete the pointer itself
        delete length;
        cout<<"the distructor called\n";
    }
    int area()
    {
        return ((*width) * (*length));
    }
};

int main()
{
    Rectangle r1(3, 5), r2(4, 6);
    Rectangle r3;
    
    cout<<"Tehe area of r1 rectangle = "<<r1.area()<<"\nThe area of r2 rectangle = "<<r2.area()<<"\n";
    
    return 0;
}