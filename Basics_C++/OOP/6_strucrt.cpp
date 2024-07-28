#include <iostream>

using namespace std;

struct Car
{
    string name;
    string color;
    int model;
};

int main()
{
    Car g;
    g.name = "fatoma";
    g.color = "Red";
    g.model = 2024;
    cout<<g.name<<" "<<g.color<<" "<<g.model<<"\n";
    
    return 0;
}