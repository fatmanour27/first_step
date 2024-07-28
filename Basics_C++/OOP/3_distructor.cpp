#include <iostream>
#include <cstring>

using namespace std;

class Phone
{
    char name[10];
    char color[6];
    int price;
    
    public:
    Phone(){}  //*defualt constructor
    
    Phone(char n[], char c[], int p)
    {
        strcpy(name, n);
        strcpy(color, c);
        price = p;
    }
    
    void print();   //*we write the prototype of (print func) and distructor(Phone) inside the class we initialized them outside the class and use(:: scope to indicate that these protoypes are declared inside the class )
    ~Phone();
};

void Phone::print()
{
    cout<<"The name: "<<name<<"\nThe color: "<<color<<"\nThe price = "<<price<<" L.E"<<"\n";
}
Phone::~Phone()
{
    cout<<"The distructor created\n";
}

int main()
{
    Phone p1;
    p1.print();    //*it will print garbage value because the object (p1) its constructor that it will call is a (defualt constructor)
    Phone p2("Redmi", "Gold", 5000);
    
    p2.print();
    
    return 0;
}