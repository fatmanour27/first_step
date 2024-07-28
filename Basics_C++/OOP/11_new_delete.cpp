
#include <iostream>

using namespace std;

int main()
{
    int *ptr;         //*pointer to address of integer data type
    
    ptr = new int;   //*initialize new location in memory for pointer(ptr) , this location has address for int data type
    *ptr = 10;
    
    cout<<*ptr<<"\n";   //will print the value of int data type
    cout<<ptr<<"\n";    //will print the new address(in memory) that pointer points to
    cout<<&ptr<<"\n";   //will print the old address that pointer points to
    
    delete ptr;        //*will delete the reserved location in memory, but not delete the pointer(ptr) itself, the pointer will exist to points to address
    ptr = new int;
    *ptr = 20;        
    
    cout<<*ptr<<"\n";
    cout<<ptr<<"\n";    //*notice: pointer will points to the same address that it was points to before deleting , *ptr = 10 point to the same address that *ptr = 20 points to
}