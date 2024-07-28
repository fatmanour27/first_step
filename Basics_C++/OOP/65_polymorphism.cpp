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
        cout<<this->get_area()<<" ";   //this->get_area()  =  ptr1->get_area()
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

    ptr1 = &rec; //early binding: take short run time          
    ptr2 = &tri;
    
    ptr1->set_value(3, 4);  
    ptr2->set_value(3, 4);

    //rec = first element[0], tri = second element[1]
    Polygon *ptr[2] = {&rec, &tri};     //*pointer of array to (2 objects), array (contain 2 elements)

    for(int i = 0; i < 2; i++)  //print 12, 6
    {
        //late binding: take long run time
        ptr[i]->get_area();      //*in the first loop (ptr) will point to first element of array(rec) so that will access the (get_area func) of(Rectangle class), in the second loop (ptr) will point to second element(tri) of array so that will access the (get_area) func of(Triangle class) 
        ptr[i]->print_area();    //*in the first loop (ptr) will point to first element of array(rec) so that will access the (print_area func) of(Rectangle class), in the second loop (ptr) will point to second element(tri) of array so that will access the (print_area) func of(Triangle class)
    }
    cout<<"\n";
    for(int i = 0; i < 2; i++) 
    {
        ptr[i]->print_area();   // print 12, 6
    }
    cout<<"\n";
    for(int i = 0; i < 1; i++)  //*will print area of first element(rec) = 12 then the loop will broken and will not print the area of second element(tri) = 6
    {
        ptr[i]->print_area();  //print 12 
    }
    cout<<"\n";
    for(int i = 0; i < 2; i++)
    {
        ptr[i]->get_area();
        cout<<"This func not print output\n";
    }

}