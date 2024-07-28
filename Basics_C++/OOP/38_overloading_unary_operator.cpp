//another way to write the code(prefix increment)
#include <iostream>
#include <string>

using namespace std;

class Unary
{
    private:
    int x, y;
    
    public:
    
    Unary(int f = 0, int s = 0)   //* unary is a constructor
    {
        x = f;
        y = s;
    }
    
    void print_value()
    {
        cout<<x<<" "<<y<<"\n";
    }
    //prefix operator
    Unary operator ++()  //* unary is return data type (object)
    {
        ++x;
        ++y;

        return *this;   //* this is a pointer points to address of object(k) to store value of (++v)  
    }
};

int main()
{
    Unary v(10,20);  //* 10,20 values will be incremented by 1
    Unary k;
    k = ++v;    //*for storing value of ++v into k we must have (return data type of k at operator func)
    v.print_value();
    k.print_value();
    
}