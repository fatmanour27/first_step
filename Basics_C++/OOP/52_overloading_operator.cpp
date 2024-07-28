#include <iostream>

using namespace std;

class Array
{
    int arr[3];

    public:
    Array()    //*defualt constructor as we give initial values to the private member of class(arr) that have 3 elements
    {
        for(int i = 0; i < 3; i++)   //we will print elements of array
        {
            arr[i] = i + 2;         //*arr[0] = 0 + 2 then the first element in array = 2, arr[1] = 1 + 2 then the second element of array = 3, arr[2] = 1 + 2 then the third element in array = 4, then the loop will broken
        }
    }

    int &operator[](int index)     //*operator func recieve(index) of array and return(arr[]) any element of array, we must use (reference sign &) when we want to modify/change value of array of object
    {
        return arr[index];
    }
    
};

int main()
{
    Array a1;
    cout<<"The last element of array = "<<a1[2]<<"\n";     //*the(a) object will call the operator func that return the third element of array with index 2 (arr[2])

    a1[2] = 20;   //a1.operator[](2),                 
    cout<<"The last element of array after change its value = "<<a1[2]<<"\n";  //*will print 20 because we modified/changed the value of a1[2] by reference (&) and make it = 20
}