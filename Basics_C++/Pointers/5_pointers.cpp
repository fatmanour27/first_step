#include <iostream>
using namespace std;

int main()
{
    char arr[6] = "Hello";
    char *p = arr;

    for(int i = 0; i < 5; i++)
    {
        cout<< *(arr + i)<<" ";
    }
    cout<<endl;

    *p = 'm';
    for(int i = 0; i < 5; i++)
    {
        cout<< *(arr + i)<<" ";
    }
    cout<<endl;

    p++;      //*pointer move to the second location of array that has (e) element then modify this value to (a)
    *p = 'a';

    for(int i = 0; i < 5; i++)
    {
        cout<< *(arr + i)<<" ";
    }
    cout<<endl;

    p += 2;    //*pointer will move two steps from last location it pointed to
    *p = 'f';

    for(int i = 0; i < 5; i++)
    {
        cout<< *(arr + i)<<" ";
    }
    cout<<endl;


}