#include <iostream>
#include <cstring>

using namespace std;

class Squar;
class Rectangle
{
    int width, height;

    public:
    int area()
    {
        return width * height;
    }
    void convert(Squar rec);  //*the convert func is a member func from Rectangle class recieve (object from Squar class) as a (friend class) that mean (Rectangle class) can access any data from(Squar class)
 
 //*note: the convert func that inside Rectangle class(member func of Rectangle) can access any private members/funcs from friend class(Squar)
};
class Squar
{
    int side;

    public:
    void set_side(int x)
    {
        side = x;
    }

    friend class Rectangle;   //*the (Squar class is friend to Rectangle class)
};

void Rectangle::convert(Squar rec)
{
    {
        width = rec.side; 
        height = rec.side;
    }
}

int main()
{
    Squar s1;
    Rectangle r1;
    s1.set_side(5);
    r1.convert(s1);    //*object (s1) contain the (side = 5), and the (convert func) will store this side into object(r1) that contain(width, height)

//*(s1) access func(set_side) from (friend class Squar) , (r1) of(Rectangle class) will access the (convert func) that belong to(Rectanglr class) that recieve object(s1) from (friend class)(Squar)

    cout<<r1.area()<<"\n";  //area func is member func of class Rectangle so that we access it by object
}