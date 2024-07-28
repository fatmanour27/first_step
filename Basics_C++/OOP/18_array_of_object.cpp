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
    Student s2("nour", 16578947);
    s1.print();
    s2.print();

    Student arr[3];                   //*this is the array of object that will call the (defualt constructor) because we not initialized the three objects in array as its objects has initial value(0)
    for(int i = 0; i < 3; i++)
    {
        arr[i].print();
    }

    Student arr2[3] = {Student("fatoma", 25347851)};    //*we calling the parameterized constructor and give the first object of array values(name, id)
    for(int i = 0; i < 3; i++)
    {
        arr2[i].print();            //*will print the first object in arr2, and the other 2 objects will have initial value(defualt constructor) because we not initialized them in parameterized constructor but we only initialized the first object in parametrized constructor
    }
}