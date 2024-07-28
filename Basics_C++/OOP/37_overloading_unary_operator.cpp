//prefix increment
#include <iostream>
#include <string>

using namespace std;

class Unary
{
    private:
    int x, y;
    
    public:
    
    Unary(int f = 0, int s = 0)
    {
        x = f;
        y = s;
    }
    
    void print_value()
    {
        cout<<x<<" "<<y<<"\n";
    }
    //prefix operator
    void operator ++()  //*operator func increment two variables(x,y)
    {
        ++x;
        ++y;
    }
};

int main()
{
    Unary v(10,20);  //* 10,20 values will be incremented by 1
    ++v;
    v.print_value();
}