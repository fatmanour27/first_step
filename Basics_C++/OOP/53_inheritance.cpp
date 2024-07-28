//*private class: access the member of base class only insede the class itself
//*protected class: access the member of base class and inherited class but can't call (protected func) inside the (main func), but we can access protected func inside inherited class
//*public class: access the member of base class and inherited class and can call any (public func) inside the main

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
    int Area()
    {
        return width * height;
    }
};
class Triangle : public Polygon
{
    public:
    int Area()
    {
        return (width * height / 2);
    }
};

int main()
{
    Rectangle rec;
    Triangle tri;
    rec.set_value(4, 6);
    tri.set_value(4, 6);

    cout<<rec.Area()<<"\n";
    cout<<tri.Area()<<"\n";
}

//*notice: the base class can't inherits any atributies from derived class, otherwise the derived can inherits from base