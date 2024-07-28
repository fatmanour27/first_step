#include <iostream>

using namespace std;

int main()
{
    int arr[5] ={10, 50, 70, 77, 33};
    int *ptr;
    ptr = &arr[0];        
    ptr = arr;

    for(size_t i = 0; i < 5; i++)
    {
        cout<<*(ptr + i)<<" ";        //*will print the all element of array
    }
    cout<<"\n";
    for(size_t i = 0; i < 5; i++)
    {
        cout<<*ptr<<" ";       //*will print the all element of array, as print the first element in array(10) then make (prefix) increment to pointer so move to second index(1) and print second element in array(50) and so on
        ++ptr;        
    }
    cout<<"\n";
    for(size_t i = 0; i < 5; i++)
    {
        cout<<*(ptr++)<<" ";        //*will print the all element of array, as print the first element in array(10) then make (postfix) increment to pointer so move second index(1) and print second element in array(50) and so on
        //will move to addresses of elements
    }

}