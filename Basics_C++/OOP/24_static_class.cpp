#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    int count;
    int Id;
    char name[15];
    
    public:
    Student()
    {
        strcpy(name, "no name");
        Id = 0;
        count = 0;
        count++;
        cout<<"The static count will increment each time "<<count<<"\n";
    }
};
//*note: we give the (int count variable) initiale value = 0 inside the constructor, because the (count) is not static variable must give its initial value inside the constructor

int main()
{
    Student s1, s2, s3;   //*we will call the defualt constructor that contain the count increment as it will increment onetime when we call constructor 3 times by 3 objects(the increment will occur onetime because we not use static var)
    Student s[3];          //*we call the defualt constructor 3 times because we have 3 objects in array as each object will call constructor
}