#include <iostream>

using namespace std;

void f()
{
    int x = 0;          //*var(x) only increment onetime even we call (f func) more than onetime
    x++;
    cout<<x<<" ";
    
    
}
void n()
{
    static int y = 0;    //*static mean partnership as when call (n func) more than onetime it the value of variable  will change as this var is the same var at each time we call the func so that it will (increment) at each time we call func
    y++;
    cout<<y<<" ";
    
}
int main()
{
    f();            //*the increment of variable will not affect when calling the func more than onetime, because it not a static func, will print the same value each time(1)
    f();
    f();
    cout<<"\n";
    n();          //*the increment of variable will affect when calling the func more than onetime, because it is a static func, will print the value after increment each time we call it
    n();
    n();
}