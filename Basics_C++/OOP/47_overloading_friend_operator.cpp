#include <iostream>

using namespace std;

class Binary
{
    int x, y;

    public:
    Binary():x(0), y(0){}
    Binary(int a, int b):x(a), y(b){}

    Binary operator +(Binary c2)   //*it is opearator get sum of (2 objects)
    {
        Binary c3;
        c3.x = x + c2.x;
        c3.y = y + c2.y;
        return c3;
    }
    Binary operator +(int n)   //*it is opearator get sum of (object and int(n))
    {
        Binary c3;
        c3.x = x + n;
        c3.y = y + n;
        return c3;
    }
    void print()
    {
        cout<<"x = "<<x<<" and "<<"y = "<<y<<"\n";
    }

    friend Binary operator + (int num, Binary c1);  //*we declare the operator func inside the class as a friend func
};
Binary operator+(int num, Binary c1)     //*we initialize the operator func outside the class as non member func because this func recieve (int data type), so that we can access private members(x,y) of class by using (friend func)
{
    Binary c3;
    c3.x = num + c1.x;
    c3.y = num + c1.y;
    return c3;
}

int main()
{
    Binary c1(3, 1);
    Binary c2(1, 2);
    Binary c3;

    c3 = c1 + c2;  //c3 = c1.operator + (c2)
    c3.print();         //*it will print sum of x(c1) + x(c2) = 3 + 1 = 4, sum of y(c1) + y(c2) = 1 + 2 = 3, then c1 + c2 = (4, 3) as x = 4, y = 3

    c3 = c1 + 10;  //c3 = c1.operator + (int)
    c3.print();         //*it will print sum of x(c1) + x(10) = 3 + 10 = 13, sum of y(c1) + y(10) = 1 + 10 = 11, then c1 + 10 = (13, 11) as x = 13, y = 11
    
    //*notice: we can not write (c3 = 10 + c1) or(c3 = 10.operator + c1) because we can not call (operator func) via int(10) it must be called via object, so that we will passed(10 and c1) to(operator func) and initialize operator func outside the class and declare it inside the class as a (friend func)

    c3 = 10 + c1;  //c3 = operator(10, c1)  it will return object(c3) and recieve int(10) and object(c1)
    c3.print();      //*it will print sum of x(10) + x(c1) = 10 + 3 = 13, sum of y(10) + y(c1) = 10 + 1 = 11, then 10 + c1 = (13, 11) as x = 13, y = 11

}