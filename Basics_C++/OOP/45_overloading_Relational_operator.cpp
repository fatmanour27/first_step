//relational operators return true or false values
//play with Relational operators and try all them on this code(==, <=, >=, !=)

#include <iostream>

using namespace std;

class Relational
{
    int x, y, z;

    public:

    Relational():x(0), y(0), z(0)
    {}
    Relational(int i, int j, int k):x(i), y(j), z(k)
    {}
    bool operator ==(Relational r)
    {
        if(x == r.x && y == r.y && z == r.z)
        return 1;  //if true
        else
        return 0;  //if false
    }
};
//*notice: in unary operator (operator func) not recieve any object , in the binary operator(operator func) must recieve object   

int main()
{
    Relational r1(1, 1, 1);
    Relational r2(1, 1, 1);

    if(r1 == r2)   //* if(r1.operator==(r2)) , if(1, 1, 1) = (1, 1, 1) -->yes, then return 1/true
    cout<<"two objects are equal"<<"\n";
    else
    cout<<"two objects are not equal"<<"\n";

    Relational r3(1, 2, 3);
    if(r1 == r3)  //* if(r1.operator==(r3)) , if(1, 1, 1) = (1, 2, 3) -->no, then return 0/false
    cout<<"two objects are equal"<<"\n";
    else
    cout<<"two objects are not equal"<<"\n";

}