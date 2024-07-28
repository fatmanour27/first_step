#include <iostream>
using namespace std;


int increase_by_one(int *p)  //*Computes *p + 1 and returns it, but does not modify the original value of *p, x remains 1.
{
    return *p + 1;
}
int incre_by_one(int *p)  //*Computes *p + 1, stores the result back into the memory location pointed to by p (thus modifying *p), and returns the new value, x (which p points to) is now changed from 1 to 2.
{
    *p = *p + 1;
    return *p;
}

int main()
{
    int x = 1;
    int *p = &x;

    cout<<increase_by_one(p)<<endl; 
    cout<< x <<endl;                 //*value of x not be changed

    cout<<incre_by_one(p)<<endl;  
    cout<< x <<endl;                //*value of x changed

    

}