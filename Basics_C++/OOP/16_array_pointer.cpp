#include <iostream>

using namespace std;

int main()
{
    int arr[5] ={10, 50, 70, 77, 33};
    int *ptr;
    ptr = &arr[0];         //*we connect the pointer with array and we will get the address of first element in array 
    ptr = arr;     
    cout<<*ptr<<"\n";
    cout<<ptr<<"\n";       //*will print the address of first element
    
    ptr += 2;
    cout<<*ptr<<"\n";      //*after add 2 to (ptr) it will print the third element(70) with index(2)
    cout<<ptr<<"\n";       //*will print the address of third element with index(2) after we use (ptr += 2)
}