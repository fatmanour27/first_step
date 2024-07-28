#include <iostream>

using namespace std;

struct Car
{
    string name;
    string color;
    int model;
};

int main()
{
   /*int arr[5] = {10, 20, 30, 40, 50};
    cout<<arr[0]<<"\n";*/                 //*we get the first element of array named(arr) via its index

    Car g = {"Kia", "Red", 2023};
    cout<<g.name<<"\n";                 //*we get the first element of struct array(g) via its object(j) that access the (name) member of struct
    cout<<g.color<<"\n";                //*we get sec element

    return 0;
}