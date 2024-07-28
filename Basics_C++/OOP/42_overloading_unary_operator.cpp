#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 1000;
    int y = 0; 
    
    if(x)    //because x = 1000 any num (positive or negative ) excluding zero, it will print (true)
    {
        cout<<"true"<<"\n";
    }
    else
    {
        cout<<"false"<<"\n";
    }
    if(y)  //because y = 0, it will print (false)
    {
        cout<<"true"<<"\n";
    }
    else
    {
        cout<<"false"<<"\n";
    }
    return 0;
}