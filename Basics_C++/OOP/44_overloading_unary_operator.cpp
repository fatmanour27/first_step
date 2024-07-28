// += operator

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
    //minus/negative operator
    Unary operator -()
    {
        y = -y;
        x = -x;

        return *this;
    }
    //not operator!
    bool operator !()  //*bool is a return data type we can replace it with int data type, two data type are the same return value in this case
    {
        if(x == 0 && y == 0)
        return true; //true = 1 , in normal if x=0,y=0 it will return false/0 , but via using not operator it will return true/1
        else
        return false; //false = 0
    }
    // += operator
    Unary operator +=(Unary b2)
    {
        x += b2.x;    //x = b1 = object that call pairing/func(operator), b2 the object we passed to pairing/func(operator)
        y += b2.y;

        return *this;
    }
};

int main()
{
    Unary b1(1, 2);  //* x = 1 , y = 2 of object(b1)
    Unary b2(3, 3);  //* x = 3 , y = 3 of object(b2)
    
    b1 += b2; //b1.operator(b2)  =  b1 += b2
    b1.print_value();
    b2.print_value();
}