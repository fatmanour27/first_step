

#include <iostream>

using namespace std;

int main()
{
    int arr[5] ={10, 50, 70, 77, 33};    //*the array is constant pointer that we can't modify it, can't increment it(arr++)
    for(int i = 0; i < 5; i++)
    {
        cout<<*(arr + i)<<" ";     //*it will print all elements of array by using pointer, (arr + 0 --> print the first element) (arr + 1 --> print the second element) and so on
    }
    cout<<"\n";
    for(size_t i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";         //*it will print all elements of array
    }
}