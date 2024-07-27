//pointer to struct by using (->) operator to get to members of struct
#include <stdio.h>

typedef struct
{
    char *name;
    int age;
    int salary;
}Emp;

int main()
{
    //note: type of pointer to struct is the same type of var struct (Emp)
    Emp emp = {"Fatoma, 20, 5000"};
    Emp *ptr_emp = &emp;   //* ptr_emp stored inside value of var emp by pointed to address of emp

    printf("\n name: %s", ptr_emp->name);   //* (->) this operator is name access
    printf("\n age: %d", ptr_emp->age);
    printf("\n salary: %d", ptr_emp->salary);
    printf("\n");

    return 0;
}
