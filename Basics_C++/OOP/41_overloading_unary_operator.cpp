//minus operator
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
    //unary minus/negative operator not recieve any parameters , but binary minus operator that recieve parameters
    Unary operator -()
    {
        y = -y;
        x = -x;

        return *this;
    }
};
int main()
{
    Unary k(1, 2);
    -k;
    k.print_value();
}