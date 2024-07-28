#include <iostream>

using namespace std;

class Distance
{
    int feet;
    int inches;

    public:
    Distance():feet(0), inches(0){}

    Distance(int f, int i):feet(f), inches(i){}

    friend istream&operator >> (istream&input, Distance&d);
};
istream&operator >> (istream&input, Distance&d)  //*the (operator>>) func return (istream) means return (input from stream library), and recieve two object from different data type(input is object its type istream)(d is object its type Distance)
{
    input>>d.feet>>d.inches; 
    return input;
}

int main()
{
    Distance d1(3, 5);
    Distance d2(2, 4);
    Distance d3;

    cin>>d3;  //* we will initialize (operator >>)func to can input the object(d3) and this func will be a (friend func) because it recieve (2 objects from different data type "Diatance ob, istream ob") and it return (istream)--> that is not a return data type of class), so that we will initialize it outside the class, but declare it as a friend func inside the class
}