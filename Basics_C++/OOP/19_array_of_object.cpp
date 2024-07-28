#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    char name[20];
    int Id;

    public:
    Student()
    {
        strcpy(name, "no name");
        Id = 0;
    }
    Student(char n[], int id)
    {
        strcpy(name, n);
        Id = id;
    }
    void print()
    {
        cout<<"the name is: "<<name<<" "<<"the ID is: "<<Id<<"\n";
    }
};

int main()
{
    Student s1("fatma", 1324356);
    Student s2("nour", 6578947);

    Student arr[3] = {s1, s2};    //*(s1, s2) the first and second objects in array
    for(int i = 0; i < 3; i++)
    {
        arr[i].print();           //*will print the first and second objects in array (parameterized constructor) and the third object in array will has initil value(defualt constructor)
    }
}