//*compile time errors: syntax errors
//*Exceptions errors: occur during run time/excution program 
//*Exception handling: resolving the problems or errors occuring during excution

#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0;

    cout<<"Enter value of x and y"<<endl;
    cin>>x;
    cin>>y;

    try
    {
        if(y == 0)
        {
            throw exception();
            cout<<x / y<<endl;
        }
        
    }
    catch(exception e)
    {
        cout<<e.what()<<endl;
        cout<<"please review your input"<<endl;
    }
    cout<<"the program continued: "<<"\t"<<x + y + 100<<endl;

    return 0;
}