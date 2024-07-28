#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class Copy
{
    private:
    int a1, a2, a3, a4, a5, a6, a7;
    
    public:
    Copy(int A1, int A2, int A3, int A4, int A5, int A6, int A7)
    {
        a1 = A1;
        a2 = A2;
        a3 = A3;
        a4 = A4;
        a5 = A5;
        a6 = A6;
        a7 = A7;
    }
    //*the Copy constructor recieved object(a) that access all variables(a1,a2,a3,a4,a5,a6,a7) instead of we pass it the 7 parameters and that take a long time
    Copy(const Copy &a)  //*(a) is an object of the Copy constructor to call the all (int variables) without passed it all parameters
    {
        a1 = a.a1;
        a2 = a.a2;
        a3 = a.a3;
        a4 = a.a4;
        a5 = a.a5;
        a6 = a.a6;
        a7 = a.a7;
    }
    void print()
    {
        cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<" "<<a7<<"\n";
    }
};

int main()
{
    Copy ob(1, 2, 3, 4, 5, 6, 7); 
    ob.print();                         //*it will print the first constructor(parameterized constructor)
    Copy ob2(ob);  //copy               //*the boject(ob2) of Copy constructor will call object(ob) of parameterized constructor
    ob2.print();                        //*it will print the Copy constructor via calling the (object of parameterized constructor) by using (ob2)
    
    return 0;
}