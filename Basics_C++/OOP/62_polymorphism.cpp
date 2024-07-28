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
    int get_area()  //*if we delete(virtual statement that refer to get_area func initialized inside other(derived) classes but with different performance/body, not the same) the compiler will think that func(get_area of base class) is the same func of (derived class)
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

    
    cout<<ptr1->get_area()<<"\n";   //*will call area of base class, because we not tell the compiler that (get_area func of base class) is virtual func, so that the compiler will think we call the same func each time from(base class because we use pointers) 

    cout<<ptr2->get_area()<<"\n";

    cout<<ptr3->get_area()<<"\n"; 
}