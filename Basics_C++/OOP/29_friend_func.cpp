//another way to write the previous code(friend_func28.c++) without use the friend func
#include <iostream>
#include <cstring>

using namespace std;

class Myclass
{
    int a, b;     
    
    public:
    Myclass(int i, int j)
    {
        a = i;
        b = j;
    }
   
    int sum(Myclass ob);          //*we declare the prototype of func inside the class, member func
};
int Myclass::sum(Myclass ob)      //*we initialize the (sum) func as a memeber func from class(Myclass) 
{
    return ob.a + ob.b;
}

int main()
{
    Myclass m(5, 5);
    
    cout<<m.sum(m)<<"\n";    //*we access the memeber func by object because it is a member func
}