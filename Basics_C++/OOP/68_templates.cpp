#include <iostream>

using namespace std;

template <typename first, typename second>
first smaller(first a, second b) 
{
    return (a < b ? a : b);  //* short if statement: if a < b(?) return a else(:) return b
}
int main()
{
    int x = 90;        //*data type of x = a is (int) as (x) has generic data type(first) 
    double y = 80.78;  //*data type of y = b is (double) as (y) has generic data type(second)

    // x = a(first), y = b(second), since the return data type of smaller func is first and x = a(first) and x is (int) then the return data type of smaller func(first) will be (int)
    cout<<smaller(x, y)<<"\n";  //* if x < y return x else reurn/print y, and so y < x then it will print y but as (int) not (double) because x written first and data type of x is (int) 

    // y = a(first), x = b(second), since the return data type of smaller func is first and y = a(first) and y is (double) then the return data type of smaller func(first) will be (double)
    cout<<smaller(y, x)<<"\n";  //* if x < y return x else reurn/print y, and so y < x then it will print y as (double) because y written first and data type of y is (double)

    cout<<smaller<double>(x, y)<<"\n";   //* put the return value of smaller func (first paratmter x/a) = (double)
    cout<<smaller<double, int>(x, y)<<"\n";  //* put the return value of (first parameter x/a) = (double) and return value of (second parameter b/y) = (int) not double
}