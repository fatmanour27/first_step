#include <iostream>

using namespace std;

int main()
{
    int hour;

    try
    {
        cin>>hour;

        if(hour < 0)
        {
            throw("erorr");
        }
        else
        {
            cout<<"the hour is "<<hour<<"\n";
        }
    }
    catch(...)   //catch statement recieve the erorr from throw
    {
        cout<<"we find a wrong in your program input\n";
    }
    return 0;
    
}