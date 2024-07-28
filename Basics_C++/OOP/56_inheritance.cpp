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

    Duaghter(int x):b(x){cout<<"This is parameterized constructor of derived class "<<b<<"\n";}
};

int main()
{
    Duaghter fatma;         //*object(fatma) will call the defualt constructor from(Dad class first) then call it from(Duaghter class)
    Duaghter fatoom(1);     //*object(fatoom) will call the defualt constructor from(Dad class first) then call the parameterized constructor from(Duaghter class)
    cout<<"\n";
    Dad fatoma;            //*object(fatoma) will call the defualt constructor from(base/Dad class only), as the base class can't inherte from any derived class
    Dad tooma(1);          //*object(tooma) will call the parameterized constructor from(base/Dad class only)
}