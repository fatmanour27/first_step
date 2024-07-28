//*multiple classes: derived class has two parents inherits from them

#include <iostream>
#include <cstring>

using namespace std;

class Name
{
    char name[10];

    protected:
    void set_name(char n[])
    {
        strcpy(name, n);
    }
    void print_name()
    {
        cout<<"My name is "<<name<<"\n";
    }
};
class Id
{
    int id;

    protected:
    void set_id(int i)
    {
        id = i;
    }
    void print_id()
    {
        cout<<"My ID = "<<id<<"\n";
    }
};
class Student : public Name, public Id   //student class inherits from two base classes(Name, Id)
{
    public:
    Student(char n[], int i)
    {
        set_name(n);          //*we can't write strcpy(name, n) because (name) is a private member from parent class(Name), we can't access it directily, but we can access (name) by call (protected func that is inside the Name class = set_name)
        set_id(i);
    }
    void print_name_id()
    {
        print_name();      
        print_id();
    }
};

int main()
{
    Student st("fatoma", 2021010409);
    st.print_name_id();               //* we can't call the (protected func) in (main func), we can't write  st.print_name or st.print_id because those funcs are protected that can't call them in (main func), but we use (protected funcs) to inherite them
}