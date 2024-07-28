#include <iostream>
#include <cstring>

using namespace std;

struct Exam
{
    float first;
    float second;
    float final;

    void print2()    //initial func of struct and will call it in class(Subject)
    {
        cout<<"This function is called from struct (Exam) by using parameterized constructor of class (Subject)\n";
    }
};

class Subject
{
    char name[10];
    Exam exam;     
    
    public:
    Subject()
    {
        strcpy(name, "no name");
        exam = {0, 0, 0};
    }
    Subject(char n[], float fir, float sec, float fin)
    {
        strcpy(name, n);
        exam = {fir, sec, fin}; 
        
        exam.print2();            //*we call print function from struct 
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