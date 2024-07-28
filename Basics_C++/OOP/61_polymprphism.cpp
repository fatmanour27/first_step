#include <iostream>

using namespace std;

class Polygon
{
    protected:
    int width, height;

    public:
    void set_value(int w, int h)
    {
        width = w;
        height = h;
    }
    virtual int get_area()     //*this func is a virtual func as it is initialized inside other classes, and it return 0 as it return nothing, but we initialized inside the(base class) to we can call it by pointer connect with object from (base class)
    {
        return 0;
    }
};
class Rectangle : public Polygon
{
    public:
    int get_area()
    {
        return width * height;
    }
};
class Triangle : public Polygon     
{
    public:
    int get_area()
    {
        return width * height / 2;
    }
};

int main()
{
    Rectangle rec;
    Triangle tri;
    Polygon poly;
    Polygon *ptr1, *ptr2, *ptr3;      

    ptr1 = &rec;              
    ptr2 = &tri;
    ptr3 = &poly;

    ptr1->set_value(3, 4);  
    ptr2->set_value(3, 4);
    ptr3->set_value(3, 4);

    //area of Rectangle class = 3 * 4
    cout<<ptr1->get_area()<<"\n";    //*we access func(get_area) via pointer from base class(Polygon) connect with object from derived class(Rectangle) because we initialized func(get_area) inside the (base class) , so that the pointer from (base class) can access (get_area) func from base class
    //area of Triangle class = 3 * 4 /2
    cout<<ptr2->get_area()<<"\n";
    //area of Polygon class = 0 because the func(get_area) return 0 inside(Polygon class)
    cout<<ptr3->get_area()<<"\n"; 
}
//*the pointer that come from (base class) and connect with object from (derived class), that pointer when point to any func from (derived class = get_area), this func from(derived class) **must** be initialized inside the (base class), too.
//* if this func like(get_area) not initialized inside the (base class) and only initialized inside (derived class) we can access it via (object) from this class(derived), not by pointer