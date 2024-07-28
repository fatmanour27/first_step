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

    operator int()
    {
        return int(num);     //*we will return variable(num) that the object(ob) access it
    }
};

int main()
{
    Number ob(10);         //*we passed int(num = 10) to object(ob) and assign int(num) to object
    int x;
    x = ob;
    cout<<ob.get_num()<<"\n";

//*we can assign x to ob by using operator assign func
}