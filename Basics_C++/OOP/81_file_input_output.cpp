#include <iostream>
#include <fstream>  //file stream header

using namespace std;

int main()       //!this code doesn't creat a file find what's wrong?
{
    int arr[10];

    ifstream file("ffff.txt", ios::binary);    //*ifstrem built class in c++, let us read file via its object(file) that access read func

    file.read((char*)&arr, sizeof arr);    

    for(int i = 0; i < 10; i++)  //*will print the previous five elements(0 - 40) from(file_input_output76.c++) and five elements(50 - 90)
    {
        arr[i] = i * 10;
    }
    for(int i = 0; i < 10; i++)  //will print the element on console not into file
    {
        cout<<arr[i]<<"\n";
    }
    file.close();
}