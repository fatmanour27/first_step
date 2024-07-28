#include <iostream>

using namespace std;

int main()
{
    int arr[5] ={10, 50, 70, 77, 33};
    
    cout<<arr[0]<<"\n";     //*will print the value of first element with index 0
    cout<<arr<<"\n";        //*will print the address of first element in array
    cout<<arr + 0<<"\n";    //*will print the address of first element in array
    cout<<arr + 1<<"\n";    //*will print the address of second element with index 1 and so on
    
    cout<<(*arr + 1)<<"\n";   //*will print the value of first element(10) plus (1)
    cout<<*(arr + 1)<<"\n";    //*will print the value of second element(50) with index(1)
    cout<<*(arr + 4)<<"\n";    //*will print the value of last element(33) with index(4)

    
    return 0;
}
