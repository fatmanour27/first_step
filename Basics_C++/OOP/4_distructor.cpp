#include <iostream>

using namespace std;

class Rectangle
{
    int width, length;
    
    public:
    Rectangle():width(0), length(0)
    {
        cout<<"width = "<<width<<" and length = "<<length<<"The defualt constructor is created\n";
    }
    Rectangle(int w, int len):width(w), length(len)
    {
        cout<<"The parameterized constructor is created\n";

        Rectangle ob;   //*the object(ob) that existing in the parameterized constructor will call the default constructor, as well as it will call the distructor as it wroten before the closed curvey bracket(})

        //Rectangle(10, 5);
        //!notice: if we use parameterized constructor (Rectangle (10, 5) inside another parameterized constructor this will cause infinite loop"recursive loop doesn't have end")
    }
    ~Rectangle()
    {
        cout<<"width = "<<width<<" and length = "<<length<<" The distructor deleted Rectangle constructors\n";
    }
};

int main()
{
    Rectangle r;            //*object (r) will call the defualt constructor because we not passed to it any parameters
    Rectangle r1(3, 5);     //*object (r1) will call the parameterized constructor because we passed to it parameters as well as it will call (ob) object that be written entire the (parameterized constructor), (ob) has role the distructor and default constructor
    Rectangle r2(4, 7);     
    Rectangle r3;        //*object (r3) will call the defualt constructor then call the distructor to delete all constructors has been called before it from last constructor to first 

    return 0;
}