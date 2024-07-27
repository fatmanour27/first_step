//passing struct to func by value or reference
#include <stdio.h>
void By_value(Emp);  //*prototype of func By_value recieve structure Emp
//program pass struct by value
typedef struct
{
    char *name;
    int age;
    int salary;
}Emp;

int main()
{
    Emp emp = {"Fatoma", 20, 5000};
    By_value(emp);  //* By_value func recieve new values from var/parameter emp other than old values and display (new) value first, (old) value next
    
    printf("\n name: %s", emp.name);
    printf("\n age: %d", emp.age);
    printf("\n salary: %d", emp.salary);
    printf("\n");

    return 0;
}

void By_value(Emp emp)
{
    emp.name = "Faris";
    emp.age = 55;
    emp.salary = 9000;

    printf("\n name: %s", emp.name);
    printf("\n age: %d", emp.age);
    printf("\n salary: %d", emp.salary);
    printf("\n");
}
