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

    class xBig{
        
        public:
        xBig(){}

        void big()
        {
            cout<<" Big element\n";
        }
    };
    class xSmall{

        public:
        xSmall(){}

        void small()
        {
            cout<<"Small element\n";
        }
    };
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
    catch(Exception::xSmall sm)
    {
        sm.small();
    }
    catch(Exception::xBig bg)
    {
        bg.big();
    }
}