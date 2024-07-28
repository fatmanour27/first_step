#include <iostream>
#include <cstring>

using namespace std;

class Rectangle
{
    int width, height;
    
    public:
    void set_value(int w, int h);
    friend Rectangle dublicate(Rectangle r);   //*friend func return object and recieve object
    
    int get_area()
    {
        return width * height;
    }
};
void Rectangle::set_value(int w, int h)     //*member func access it by object when we call it
{
    width = w;
    height = h;
}
Rectangle dublicate(Rectangle r)           //*non member (friend) func access it directily when we call it
{
    Rectangle t;
    
    t.width = r.width * 2;       //4 * 2 = 8 the width after dublicate
    t.height = r.height * 2;     //6 * 2 = 12 the height after dublicate , then the area = 8(width) * 12(height) = 96
    
    return t;
    
}

int main()
{
    Rectangle r1;
    r1.set_value(4, 6);
    cout<<"the area of rectangle before dublicate it = "<<r1.get_area()<<"\n";   //*get_area func is member func so that we use the object (r1) to access this func
    
    Rectangle r2;
    r2.set_value(4, 6);
    r2 = dublicate(r2);      //*we call friend func(dublicate) without using (object) to access it (non member func),we store the the result into object(r2) because this func return object if it didn't reurn object we will write func directily without need to store it in object
    cout<<"the area of rectangle after dublicate it = "<<r2.get_area()<<"\n";
}