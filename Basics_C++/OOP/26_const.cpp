//*we use const statement to refere that variable can not modify it or change its value, it is a constant variable
#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.14;
    cout<<PI<<"\n";

    //PI = PI + 1;              //*we can't modify the value of PI because it's a constant value
}