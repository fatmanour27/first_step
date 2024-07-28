#include <iostream>
#include <string>

using namespace std;

class Triangle
{
    private:
    float length;
    float width;

    public:
    Triangle(float len = 0, float wid = 0):length(len), width(wid)
    {}

    void getdata()  //*func to input the data of first object c1
    {
        cout<<"Enter the length: "<<"\n";
        cin>>length;
        cout<<"Enter the width: "<<"\n";
        cin>>width;
    }

    void printdata()
    {
        cout<<" the length = "<<length<<"\n";
        cout<<"the width = "<<width<<"\n";
    }
    //*func receive two objects(c1,c2) from Triangle class for addition them
    void addition(Triangle c1, Triangle c2)
    {
        length = c1.length + c2.length;  //*length is affiliate to object c3 that call pairing of (c1,c2);
        width = c1.width + c2.width;     //*width is affiliate to object c3;
    }
};
int main()
{
    Triangle c1;
    Triangle c2(3.5, 2.5); //* 3.5 is a length, 2.5 is a width
    Triangle c3;
    c1.getdata();         //*length and width of object c1 will input by calling getdata func then add to them the length and width of object c2
    c3.addition(c1, c2);  //*store result of addition into c3, length of c2 added to length of c1, width of c2 added to width of c1.
    c3.printdata();

    return 0;
}