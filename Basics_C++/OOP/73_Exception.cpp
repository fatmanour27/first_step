#include <iostream>

using namespace std;

int main()
{
    cin.exceptions(cin.failbit);

    int num;
    cout<<"5 + 7 = \n";

    try
    {
        cin>>num;

        if(num != 12)
        {
            throw("erorr! the number you input is wrong");
        }
        else
        {
            cout<<"the number you input is right\n";
        }
    }
    catch(const char *str)   //catch will recieve a string from throw
    {
        cerr<<"Exception: "<<str<<"\n";
    }
    return 0;
}