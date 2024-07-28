#include <iostream>

using namespace std;
//*note: for example, if you're trying to read an integer from the user and the user enters a non-numeric character, this would normally set the (failbit) flag
int main()
{
    cin.exceptions(cin.failbit);  //means that an exception will be (thrown) if an input operation fails on the cin stream , if we input num < 0 in this example
    
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
    catch(const char e[])   //catch statement recieve the (erorr) from throw as (array of character), we can write catch(const *e) instead of write catch(const e[]), the two ways are the same
    {
        cerr<<e<<"\nwe find a wrong in your program input\n";  //we print the array and the erorr message, we can write cerr instead of cout as we like but cerr is a better than cout in this case for the compiler
    }
    return 0;
}