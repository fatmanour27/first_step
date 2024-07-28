#include <iostream>
#include <cstring>

using namespace std;

struct Exam
{
    float first;
    float second;
    float final;
};

class Subject
{
    char name[10];
    Exam exam;          //*exam is a atribute of Exam struct, exam contain (first, second, final) 
    
    public:
    Subject()
    {
        strcpy(name, "no name");
        exam = {0, 0, 0};      //* initial value for member (first = 0) of struct, initial value for member (second = 0) of struct, initial value for member (final = 0) of struct
    }
    Subject(char n[], float fir, float sec, float fin)
    {
        strcpy(name, n);
        exam = {fir, sec, fin};   //*(exam) is member of struct (Exam) and initialized in class to indicate whose values are(first, second, final) 
    }
    float total()
    {
        return exam.first + exam.second + exam.final;
    }
    void print()
    {
        cout<<"The name of subject: "<<name<<"\nThe degree of first exam = "<<exam.first
        <<"\nThe degree of second exam = "<<exam.second<<"\nThe degree of final exam = "<<exam.final
        <<"\nThe total grades of subject = "<<total()<<"\n";
    }
};

int main()
{
    Subject e("Anatomy", 20, 20, 40);
    e.print();
}