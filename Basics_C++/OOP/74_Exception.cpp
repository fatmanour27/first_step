#include <iostream>

using namespace std;

int main()
{
    cin.exceptions(cin.failbit);
    
    int arr[] = {10, 30, 80, 20, 60};
    int index;
    cout<<"Enter the index of element: \n";
    
    try
    {
        cin>>index;
        
        if(index < 0)
        {
            throw("Exception: erorr!! this negative index");
        }
        else if(index >= 5)
        {
            throw index;
        }
        else
        {
            for(int i = 0; i < 5; i++)
            {
                cout<<"The element of array = "<<arr[i]<<"\n";
            }
        }
    }
    catch(const char *str)
    {
        cerr<<str<<"\n";
    }
    catch(const int)
    {
        cerr<<"erorr: the index is greater than elements of array\n";
    }
    return 0;

}