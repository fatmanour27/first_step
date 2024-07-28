#include <iostream>
#include <fstream>  //file stream header

using namespace std;

int main()
{
    ofstream file("tooma.txt");

    cout<<"Enter student status\n";
    cout<<"press ctrl+z to exit and doesn't have to enter 10 elements of array name\n";

    char name[10];
    int id;

    while(cin>>name>>id)
    {
        file<<name<<" "<<id<<"\n";
    }

    return 0;
}