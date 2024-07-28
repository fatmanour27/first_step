// not operator(!)

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
};
int main()
{
    Unary k(0, 0);  //x = 0, y = 0 then return (false/0) but via (! not operator) the return value will transform to (true/1)
    if(!k)
    cout<<true<<"\n";
    else
    cout<<false<<"\n";

    Unary p(1,1); //x = 1, y = 1 then return (true/1) but via (! not operator) the return value will transform to (false/0)
    if(!p)
    cout<<true<<"\n";
    else
    cout<<false<<"\n";
    
}