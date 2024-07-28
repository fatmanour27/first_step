//*Abstract class contain pure virtual func, we can't initialized object to asbstract class, we only can initialize pointers to this class
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

    //area of Rectangle class = 3 * 4
    cout<<ptr1->get_area()<<"\n";    //*we access func(get_area) via pointer from base class(Polygon) connect with object from derived class(Rectangle) because we initialized func(get_area) inside the (base class) , so that the pointer from (base class) can access (get_area) func from base class
    //area of Triangle class = 3 * 4 /2
    cout<<ptr2->get_area()<<"\n";

}
//*notice: we can't create (object) belong to (Polygon class = abstract class) because abstract class only contain (pointers), based on that, the (abstract class/base class) can't use its pointers to connect to with (object belong to it) as abstract class doesn't have object, as well as it can't use its pointer to point to any func(belong to it = abstract) 