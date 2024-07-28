#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    static int count;
    int Id;
    char name[15];
    
    public:
    Student()
    {
        strcpy(name, "no name");
        Id = 0;
        count++;
        cout<<"The static count will increment each time "<<count<<"\n";
    }
    static void print_count()        //*the advantage from using static func is we call it by using two ways: the first is a traditional way as we initilize object to call func, the second way is by using the name of class directily without using object 
    {
        count++;
        cout<<"This is static func and the count will increment each time "<<count<<"\n";
    }
};
int Student::count = 0;

int main()
{
    Student s1, s2;

    Student::print_count();      //*we call print_count func by using the name of class(Student) because we use (static func = print_count)
    s1.print_count();            //*we call print_count func by using object(s1)(traditional way)
}