#include <iostream>
#include <cstring>

using namespace std;    //!this important

class Student
{
    char name[10];
    int Id;
    
    public:
    Student()
    {
        cout<<"object created\n";
    }
    void set_name_id(char const n[], int id)  //*member func that can access the private members(name, Id) inside the class because the func is inside the class 
    {
        strcpy(name, n);
        Id = id;
    }
    void print()   //member func that can access the private members(name, Id) inside the class because the func is inside the class 
    {
        cout<<"name: "<<name<<"\nID: "<<Id<<"\n";
    }
    ~Student()
    {
        cout<<"Two objects s and s1 call destructor "<<name<<"\n";
    }
    
};

void print2(Student s)           //*non member func because it initialized outside the class that has not access the private members(name, Id) which they inside the class but has access on public members, this func recieve object(s) 
{
    Student s1;                 //*(s1) object will call the defualt constructor
    s1 = s;
    s.set_name_id("fatoma", 2021010409);   //*the parameterized object(s) will access(set_name_id-->public func)
    s.print();                            //*use object(s) to access print func, it will print ("fatoma", 2021010409)
    s1.print();                           //*use object(s) that store in object(s1) to access print func, it will print ("faris", 345266901)*/
    
}

int main()
{
    Student s1, s2;                       
    
    s1.set_name_id("faris", 345266901); 
    s2.set_name_id("nour", 679087654);

    s1.print();
    print2(s1);                            //*we call func(print) without using any object to access it because the func is non member func of class, initialized outside the class, this func recieve object(s1) from Student class 

    s2.print();
    print2(s2);
}
