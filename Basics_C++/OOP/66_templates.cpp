//* we use the templates for can deale with return value of any function through make it a generic return value 
//* generic return value: give us a permession to determine return data type and type of parameters of specific func during impelemntation of program  

#include <iostream>

using namespace std;

int sums (int f, int n)
{
    return f + n;
}
template <typename T>
T sum (T x, T y)
{
    return x + y;
}
template <typename T>
T sumi (T j, T k)
{
    return j + k;
}
int main()
{
    double f = 5.5, n = 5.5;   // program will print 10 not 11 because the return data type of (sums func definition) is int not double
    cout<<"sumition of x and y = "<<sums(f, n)<<"\n";

    double x = 6, y = 5.5;  // program will print 11.5 because the return data type of(sum func definition) is a generic'we use the templates' that mean we can determine any return data type as we want "at this example the return data type we choose it is double"
    cout<<"sumition of x and y = "<<sum(x, y)<<"\n";
    int j = 5, k = 5;
    cout<<"sumition of x and y = "<<sumi(j, k)<<"\n";  //generic func (sumi)
}