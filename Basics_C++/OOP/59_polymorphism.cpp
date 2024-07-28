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
};
class Rectangle : public Polygon
{
    public:
    int get_area()
    {
        return width * height;
    }
};
class Triangle : public Polygon     //*notice: all derived classes must inherit from base class only, derived classes can't inherit from each other
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
    Polygon *ptr1, *ptr2;      //*we create 2 pointers point to the base class(Polygon), //*notice: we can't create pointers points to (derived class), they must only point to the (base class)

    ptr1 = &rec;              //*we will call any func from derived class(Rectangle) via conecting the (ptr1) pointer with (rec) object that belong to (Rectangle class)
    ptr2 = &tri;

    ptr1->set_value(3, 4);   //rec.set_value(3, 4) if we not use the pointers, as we use the pointers to can change any value of spacific data type into data type as we want
    ptr2->set_value(3, 4);

    cout<<rec.get_area()<<"\n";    //*notice: we can't call the func (get_area) via pointer, because the pointer of base class must point to any func from base class, it can't point to any func outside the (base class)
    cout<<tri.get_area()<<"\n";     //ptr1->get_area()  erorr
}