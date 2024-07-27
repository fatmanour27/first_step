//using reserved typdef keyword
#include <stdio.h>
//*program make nested structure by typedef

typedef struct  //*this struct nested in the next struct
{
    int basic;
    int bonus;
}salary;       //*the name of nested struct is not var of nested struct because we use typedef

typedef struct
{
    char *name;
    int age;
    salary salary;  //*first salary is nested struct, sec salary is var its type is salary nested struct
}Emp;               //*name of whole struct

Emp emp1;  //*instead of type struct employee emp1, type Emp emp1 to shortcut 

int main()
{
    emp1.name = "Fatoma";
    emp1.age = 20;
    emp1.salary.basic = 4000;
    emp1.salary.bonus = 1000;

    printf("\n name: %s", emp1.name);
    printf("\n age: %d", emp1.age);
    printf("\n basic salary: %d", emp1.salary.basic);
    printf("\n bonus salary: %d", emp1.salary.bonus);

    return 0;
}
