#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 22, 33};

    cout<<arr<<endl;       //*will print the address of first element
    cout<<arr+1<<endl;     //*will print the address of second element

    cout<<*arr<<endl;     //*will print the value of first element
    cout<<*(arr+1)<<endl; //*will print the value of second element

    cout<<*arr + 1<<endl;  //*will print the value of firts element and increase it by one

    for(int i = 0; i < 3; i++)
    {
        cout<<*(arr + i)<<" ";    //*will print the content of array
    }
    cout<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<*arr + i<<" ";    //*will print the content of first element + 0, content of first element + 1 , content of first element +2
    }

    return 0;
}