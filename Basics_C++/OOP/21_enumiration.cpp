#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string day[7] = {"sat", "sun", "mon", "tue", "wed", "thur", "fri"};

enum Days {sat = 1, sun, mon, tue, wed, thur, fri};

class Week
{
    Days num[7];

    public:
    void set_day(Days w[])
    {
        for(size_t i = 0; i < 7; i++)   
        {
            num[i] = w[i];
        }
    }

    void print()
    {
        for(size_t i = 0; i < 7; i++)
        {
            cout<<"the number  "<<num[i]<<"  of day  "<<day[i]<<"\n";   //*num[0] will print thr first number of days that is started with (1), day[0] will print the the first day of week (saturday)

        }
    }
};

int main()
{
    Days day[7] = {sat, sun, mon, tue, wed, thur, fri};  //array of object
    Week ob;

    ob.set_day(day);
    ob.print();
}