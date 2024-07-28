//*template specialization: two classes which call depend on type of data type
//*template specialization: class call a specific data type, and we not use this data type unless we wanted call this specific data type into the class
#include <iostream>
 using namespace std;

 template <class T>
 class A_char
 {
    public:
    A_char(T x)
    {
        cout<<x<<" "<<"is not a charater."<<"\n";
    }
 };

template <>          //*template specialization(special class)
class A_char<char>   //*this mean not call this class unless return parameter of (char) data type to the constructor(A_char)
{
    public:
    A_char(char x)
    {
        cout<<x<<" "<<"is a character."<<"\n";
    }
};

int main()
{
    A_char<int> obj1(123);        //*will call template class, because we return(int) data type not (char) 
    A_char<double> obj2(2.345);   //*will call template class, because we return (double) data type not (char)
    A_char<char> obj3('A');       //*will call specialist template class, because we return (char) value that declared into (specialist template class)
}