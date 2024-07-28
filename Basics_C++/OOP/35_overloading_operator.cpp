//we will write the code of (oveloading operators1.c++) by another way
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
    //*func return the result of addition and receive one objects(c2) of Triangle data type
    Triangle addition(Triangle c2)
    {
        Triangle c3;
        c3.length = length + c2.length;  // length affiliate with c1, c1 call the pairing with c2 then store result (length, width)
        c3.width = width + c2.width;    // width affiliate with c1

        return c3;   
    }
};
int main()
{
    Triangle c1;
    Triangle c2(3.5, 2.5); //* 3.5 is a length, 2.5 is a width of object c2
    Triangle c3;
    c1.getdata();  
    c3 = c1.addition(c2);  //* we call addition func via c1 object to add to c1 the length,width of c2 then store the result into c3
    c3.printdata();

    return 0;
}