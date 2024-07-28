#include <iostream>
using namespace std;

//*The pointer has no type ,but it points to a specific data type in memery 

int main()
{
    int v = 5;
    int *p = &v;

    cout<<v<<"  "<<*p<<endl;
    
    *p = 100;

    cout<<v<<"  "<<*p<<endl;  //*will print 100 not 5 because any change in pointer will occur in value and any change in value will occur in pointer

    v = 10;

    cout<<v<<"  "<<*p<<endl;

    cout<< &*p <<endl;     //*will print address of pointer
    cout<< *&*p <<endl;    //*will print the value the pointer points to it through variable v

    void *ptr;               //*void  one pointer can points to more than one data type at type casting
    int x = 1;
    float y = 1.5;

    ptr = &x;
    ptr = &y;

    float *a = static_cast<float*>(ptr);

    cout<<*a<<endl;
}