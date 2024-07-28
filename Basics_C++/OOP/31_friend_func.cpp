#include <iostream>
#include <cstring>

using namespace std;

class Triangle;    //*we must write the name of second class before the first class when we use (friend) func that indicate to different atributies(width, wid) of different two classes(Rectangle, Triangle)
class Rectangle
{
    int width, height;

    public:
    Rectangle(int w, int h):width(w), height(h){}

    friend int sum(Rectangle rec, Triangle tri);  

};
class Triangle
{
    int wid, high;

    public:
    Triangle(int w, int h):wid(w), high(h){}

    friend int sum(Rectangle rec, Triangle tri);
};
int sum(Rectangle rec, Triangle tri)          //*sum is a (friend func) that call private member (width) from (Rectangle class) and call private member(wid) from(Triangle class) via objects(rec, tri), we must declare (sum func) inside two classes as (friend func)
{
    return rec.width + tri.wid;
}

int main()
{
    Rectangle r(5, 7);
    Triangle t(4, 6);

    cout<<"The sum of width(Rectangle) and width(Triangle) = "<<sum(r, t)<<"\n";  //5 + 4 = 9
}