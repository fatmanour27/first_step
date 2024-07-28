#include <iostream>

using namespace std;

struct Car
{
    string name;
    string color;
    int model;
}g;                      //*we declare a var g as we we not need to declare this var in main func -->(Car g)

int main()
{
    g.name = "fatoma";
    g.color = "Red";
    g.model = 2024;
    cout<<g.name<<" "<<g.color<<" "<<g.model<<"\n";
    
    return 0;
}