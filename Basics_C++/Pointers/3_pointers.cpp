#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 22, 33};    //*array is a constant pointer this mean we (can't) change the address of this pointer(arr) by increament or decreament it arr++, arr--
    int *p;
    p = arr;  //*pointer (p) points to the address of the first element in array

    /*for(int i = 0; i < 3; i++)
    {
        cout<<*p++<<" ";       //*traditional pointer (p) isn't a constant pointer as we can change the address of this pointer 
    }
    cout<<endl;

    for(int i = 0; i < 3; i++)
    {
        cout<<*(p + i)<<" ";    //*another way to print elements of array
    }
    cout<<endl;*/

    for(int i = 0; i < 3; i++)
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
}