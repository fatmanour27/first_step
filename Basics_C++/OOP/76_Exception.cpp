#include <iostream>

using namespace std;

class Exception
{
    int arr[100];

    public:
    Exception()   //*defualt constructor give initial values to all elememnts of array
    {
        for(int i = 0; i < 100; i++)
        {
            arr[i] = i;
        }
    }
    int get_element(int x)
    {
        if(x >= 100)
        {
            throw xBig();
        }
        else if(x < 0)
        {
            throw xSmall();
        }
        else
        {
            return arr[x];
        }
    }

    class xBig{};       //*we defined two classes inside class(Exception)
    class xSmall{};
};

int main()
{
    int i;

    Exception a;

    try
    {
        cout<<"choose the element\n";
        cin>>i;
        cout<<"the element: "<<a.get_element(i)<<"\n";
    }
    catch(Exception::xSmall)
    {
        cout<<"Small element\n";
    }
    catch(Exception::xBig)
    {
        cout<<"Big element\n";
    }
}