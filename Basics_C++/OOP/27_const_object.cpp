#include <iostream>
#include <cstring>

using namespace std;

class Time
{
    int hour, min, sec;
    
    public:
    Time(int h, int m, int s):hour(h), min(m), sec(s)
    {}
    
    void print() const   //*we must write the const statement at the right side of func
    {
        cout<<"The time is "<<hour<<":"<<min<<":"<<sec<<"\n";
    }
    void print2()
    {
        cout<<"The time is "<<hour<<":"<<min<<":"<<sec<<"\n";
    }
};

int main()
{
    const Time t1(12, 45, 7);    
    t1.print();                  //*when initializing objct(t1) as (const object) this object must only call const func, it can't call any func that isn't const func(print) 
    /*t1.print2();*/ //erorr
    Time t2(5, 0, 0);
    t2.print2();        //func        //*this object(t2) can call any func wheather this func is const func or not, because the object not const object(normal object can call any func)
    t2.print();         //const func
}