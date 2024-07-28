#include <iostream>

using namespace std;

class Dad
{
    public:
    int a;
    Dad():a(0){cout<<"This is defualt constructor of base class "<<a<<"\n";}

    Dad(int x):a(x){cout<<"This is parameterized constructor of base class "<<a<<"\n";}
};
class Duaghter : public Dad
{
    public:
    int b;
    Duaghter():b(0){cout<<"This is defualt constructor of derived class "<<b<<"\n";}

    Duaghter(int x) : Dad(x)     //*we passed(x) from parameterized constructor(Duaghter) to parameterized constructor(Dad) for when we call the parameterized constructor from(Daughter class) we will call the parameterized constructor from(Dad class) not defualt constructor from(Dadd class)
    {
        b = x;
        cout<<"This is parameterized constructor of derived class "<<b<<"\n";
    }
};

int main()
{
    Duaghter tooma(1);     //*object(tooma) will call the parameterized class from(Dad class first) then call it from(Duaghter class)

}