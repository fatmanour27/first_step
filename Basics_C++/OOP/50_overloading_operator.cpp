#include <iostream>

using namespace std;

class Number
{
    int num;

    public:
    Number():num(0){}   //default constructor

    Number(int x):num(x){}   //parameterized constructor

    Number(const Number &ob):num(ob.num){}  //copy constructor

    int get_num()
    {
        return num;
    }
};

int main()
{
    Number ob;
    int x = 10;
    ob = x;
    cout<<ob.get_num()<<"\n";

//*notice: we can not assign variable(x) to object(ob), x = ob, to solve this problem we must use (opertor==) func
}