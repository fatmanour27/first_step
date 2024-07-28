#include <iostream>

using namespace std;

int main()
{
    int arr[5] ={10, 50, 70, 77, 33};
    int *ptr;
    ptr = &arr[0];         //*we will get the address of first element in array 
    ptr = arr;            //*we will get the address of first element in array (2 ways the same)

    cout<<*ptr<<"\n";      //will print the value of first element in array(10)
    cout<<ptr<<"\n";       //will print the address of first elememt in array
    cout<<*ptr + 1<<"\n";  //will print the first element plus(1)
    cout<<*(ptr + 1)<<"\n";  //will print the second element in array with index(1)
}