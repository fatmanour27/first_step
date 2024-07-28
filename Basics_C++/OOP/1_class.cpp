#include <iostream>
#include <cstring>
#include <algorithm>       //code runner-->settings-->extention setting-->clear previous output, sure excution message
using namespace std;       //ctr + shift + p -->minimap

class Car
{
    private:
    char name[15];
    char color[8];
    int max_speed;
    int model;
    
    public:
    void set_name(char n[])
    {
        strcpy(name, n);
    }
    void set_color(char c[])
    {
        strcpy(color, c);
    }
    void set_max_speed(int max)
    {
        max_speed = max;
    }
    void set_model(int m)
    {
        model = m;
    }
    char* get_name()   //*we use pointer to point to the array of name, we can't return the array without point to it
    {
        return name;
    }
    char* get_color()
    {
        return color;
    }
    int get_max_speed()
    {
        return max_speed;
    }
    int get_model()
    {
        return model;
    }
    void print()
    {
        cout<<"The name of car is "<<name<<"\n"
        <<"The color of car is "<<color<<"\n"<<"The max speed of car = "<<max_speed<<"\n"
        <<"The model of car is "<<model<<"\n";
    }
};



int main()
{
    Car x;
    x.set_name("Kia");
    x.set_color("Red");
    x.set_max_speed(300);
    x.set_model(2023);
    x.print();
}