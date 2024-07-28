#include <iostream>

using namespace std;

class Polygon   //abstract class
{
    protected:
    int width, height;

    public:
    void set_value(int w, int h)
    {
        width = w;
        height = h;
    }
    virtual int get_area() = 0;    //*pure virtual func that created to

    void print_area()             //*func (print_area) has pointer(this) that point to (pointer ptr1 or ptr2) that access (get_area func from derived classes)
    {
        cout<<this->get_area()<<"\n";   //this->get_area()  =  ptr1->get_area()
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
    Polygon *ptr1, *ptr2;      

    ptr1 = &rec;              
    ptr2 = &tri;
    
    ptr1->set_value(3, 4);  
    ptr2->set_value(3, 4);

    //area of Rectangle = 3 * 4
    ptr1->print_area();      //*pointer(ptr1) call func(print_area) and this func has (this) pointer that point to (ptr1) pointer, (this) pointer will call func (get_area) that belong to (Rectangle class) because we use(ptr1) that access (print_area func) and that connect to (object/rec) from (Rectangle class) and (this) point to (ptr1) that mean (ptr1) call func(get_area) of (Rectangle class)
    //area of Triangle = 3 * 4 / 2
    ptr2->print_area();      //*pointer(ptr2) call func(print_area) and this func has (this) pointer that point to (ptr2) pointer, (this) pointer will call func (get_area) that belong to (Triangle class) because we use(ptr2) that access (print_area func) and that connect to (object/tri) from (Triangle class) and (this) point to (ptr2) that mean (ptr2) call func(get_area) of (Triangle class)

}