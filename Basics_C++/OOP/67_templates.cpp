#include <iostream>

using namespace std;

template <typename T1, typename T2>

T1 sum (T1 x, T2 y)   //* T1 and T2 that mean parameter(x int) has a different data type compairing parameter(y double)
{
    return x + y;
}

int main()
{
    int x = 5, y = 5;          //* generic return value which is (int)
    double j = 6.5, k = 1.5;  //* generic return value which is (double)

    cout<<"sum of two different data type(int and double) = "<<sum(x, j)<<"\n";  //* sum of x + j = 5 + 6.5 = 11 not 11.5 because x mentioned first and x is int then total return value will int
    cout<<"sum of two different data type(int and double) = "<<sum(j, x)<<"\n";  //* sum of j + x = 6.5 + 5 = 11.5 not 11 because j mentioned first and j is double then total return value will double 
}