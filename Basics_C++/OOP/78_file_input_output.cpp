#include <iostream>
#include <fstream>  //file stream header

using namespace std;

int main()
{
    ofstream file;   //*ofsream class built in c++, let us write into the file via its object(file) 

    file.open("tooma.txt");    //*("tooma.txt") is the name of file(tooma)

    file<<"Not give up !\n";        //*it will print this content(Not give up !) into the file(tooma) that we created
    cout<<"Not give up !\n";        //*it will display this content on console, but not print it into file(tooma) 
    file.close();

    if(file.is_open())   //*is_open func check wheather the file was opened or closed
    {
        cout<<"The file is open\n";
    }
    else
    {
        cout<<"The file is closed\n";
    }

    return 0;
}