#include <iostream>

using namespace std;

class base
{
    int i;

    public:
    int j, k;

    protected:
    int h;

    void set_i(int x)
    {
        i = x;
    }
    int get_i()
    {
        return i;
    }
};
class derived : private base
{
    public:
    int a;
    base::j;
    base::k;
    base::set_i;
    base::get_i;
    base::h;           //*we make protected member(h) inside(base class) as a (private member) inside (derived class) then convert(h) from private to public member inside(derived class)
};

int main()
{
    derived ob;
    ob.h;
    ob.set_i(10);
    cout<<ob.get_i()<<"\n";
}

//*notice: when we inherit ***public members*** from(base class) as a(private members) inside(derived class) , we can convert this (private members) to (public members) inside (derived class)
//* but when we inherit ***private members*** from(base class) as a(private members) inside(derived class) , we can't convert this (private members) to (public members) inside (derived class), because this members(private) inherits from(base class) as a private so that we can not access it via(derived class)