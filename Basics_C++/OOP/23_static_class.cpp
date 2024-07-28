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
};
//*note: we not give the (static int count variable) initiale value = 0 inside the class, because the (count) is static/sharable variable must give its initial value outside the class
int Student::count = 0;

int main()
{
    Student s1, s2, s3;   //*we will call the defualt constructor that contain the count as it will increment at each time we call constructor via 3 objects(the increment will occur 3 times because we use 3 objects to call constructor 3 times)
    Student s[3];          //*we call the defualt constructor 3 times because we have 3 objects in array as each object will call constructor onetime
}