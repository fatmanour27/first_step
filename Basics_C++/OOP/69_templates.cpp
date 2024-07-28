#include <iostream>

using namespace std;

template <class T>

class Number
{
    T first;   //the data type of two var (forst, second) is template(T)
    T second;

    public:
    Number(T a, T b)
    {
        first = a;
        second = b;
    }

    T max();  //definition of max func is out of the class
};
template <class T>
T Number<T>::max()  //definition of max func which return template(T), and the class(Number) is a template class
{
    return (first > second ? first : second);
}

int main()
{
    Number<int> n1(10, 20);           //*(int) data type is a template data type(generic), int = T so that each T in the code is compensated with (int)
    cout<<n1.max()<<"\n";

    Number<double> n2(10.5, 20.5);   //*(double) data type is a template data type(generic), double = T so that each in the code T is compensated with (double)
    cout<<n2.max()<<"\n";
}