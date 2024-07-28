#include <iostream>

using namespace std;

class base
{
    int i;

    public:
    int j, k;

    void set_i(int x)
    {
        i = x;
    }
    int get_i()
    {
        return i;
    }
};
class derived : private base   //*the derived class inherities all atributies(private and public) from base class and make them (private), as we can not access these private members from derived class because they initialized as private members inside derived class
{
    public:
    int a;
    base::j;     //*we make the public member(j) from (base) class as a (private member) inside the (derived) class, the we convert(private member"j") to (public member) inside the (derived class)
    base::k;
    base::set_i;
    base::get_i;       //base::i;  erorr
//*notice: we can not convert private member to public inside(derived class) if we inherited this member as it was (private member) inside (base class), we can not convert (i) to public because it is declared as a private member in(base class)
};

int main()
{
    derived ob;
    ob.a = 20;
    ob.j = 40;    //ob.i = num  erorr because (i is a private member from base class)
    ob.set_i(50); //set_i func can access private member(i) because it initialized as a public member inside the same class of i (base class), and set_i func inherited as a private member(derived class) then converted to public

    cout<<ob.a<<" "<<ob.j<<"\n";
    cout<<ob.get_i()<<"\n";

    return 0;

}