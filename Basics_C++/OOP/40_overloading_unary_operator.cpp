#include <iostream>
#include <string>

using namespace std;

class Unary
{
    private:
    int x, y;
    
    public:
    
    Unary(int f = 0, int sh = 0)   //* unary is a constructor
    {
        x = f;
        y = sh;
    }
    
    void print_value()
    {
        cout<<x<<" "<<y<<"\n";
    }
    //prefix operator: add one 1 first(increment) then 
    Unary operator ++()
    {
        ++x;
        ++y;

        return *this;   //* this is a pointer points to address of object(k) to store value of (v++)  
    }
    //postfix operator: store the value into object(postfix) then add one 1(increment)
    Unary operator ++(int)
    {
        Unary postfix;   //*object of unary data type

        postfix = *this;
        x++;
        y++;

        return postfix;
    }
};

int main()
{
    Unary v(10,20);  //* 10,20 values will be incremented by 1
    Unary k;
    v++;     // 11 21  //*incremented v
    k = ++v;  //12 22          //*increment the increamented v(12, 22) then store it into k(12, 22)
    k.print_value(); // 12 22
    v.print_value(); // 12 22
}