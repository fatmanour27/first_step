#include <iostream>
#include <cstring>

using namespace std;

class Myclass         //*we must initialize the friend func inside the class to can get the private members or if we initialize the func outside the class we must write the prototype of this func inside the class and before it write (friend statement) to can get private members
{
    int a, b;     //*private members
    
    public:
    Myclass(int i, int j)
    {
        a = i;
        b = j;
    }
   
    friend int sum(Myclass ob);   //*we initialize the prototype of non memeber (friend) func inside the class to we can access the private members(a, b)
};
int sum(Myclass ob)  //*non member func recieve object(ob) access private members (a,b) from the class(Myclass) 
{
    return ob.a + ob.b;   //*notice: friend func must recieve object because this object access private members, but may return int or object
}

int main()
{
    Myclass m(5, 5);
    
    cout<<sum(m)<<"\n";     //*we passed (m) object to (sum) func, because this func access (a,b) private memebrs by object(ob/m), the sum func is not a member func we can not access it by object(m.sum(m))
    
}