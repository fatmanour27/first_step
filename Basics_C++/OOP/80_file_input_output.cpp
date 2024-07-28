#include <iostream>
#include <fstream>  //file stream header

using namespace std;

int main()       //!this code doesn't creat a file find what's wrong?
{
    int arr[5];
    int j;

    for(int i = 0; i < 5; i++)
    {
        j = i * 5;
        arr[i] = j;
    }
    for(int i = 0; i < 5; i++)   //will print elements on console
    {
        cout<<arr[i]<<"\n";
    }

    ofstream file;   //*ios::binary means more security on the file(fatoma) and the content of file will writen in binary
    file.open("fatoma.txt", ios::binary);   //must print element into file but not happens enything

    file.write((char*)&arr, sizeof arr);  //*write func get size of array and convert the elements of array to characters and write thecontent of array into file
    
    file.close(); 

}