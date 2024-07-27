// pass structure to func by reference
#include <stdio.h> 

typedef struct
{
    char *name;
    int age;
    int salary;
}Emp;

void By_ref(Emp *);  //*By_ref func recieve pointer of address of var to struct by reference

int main()
{
    Emp emp = {"Fatoma", 20, 5000};
    Emp *ptr_emp = &emp;
//call func
    By_ref(ptr_emp);  //*By_ref func recieve new values from pointer to var/parameter ptr_emp other than old values and display (new) value first, (new) value next
    

    printf("\n name: %s", ptr_emp->name);   //* (->) this operator is named access
    printf("\n age: %d", ptr_emp->age);
    printf("\n salary: %d", ptr_emp->salary);
    printf("\n");

    return 0;
}

void By_ref(Emp *ptr_emp)
{
    ptr_emp->name = "Faris";
    ptr_emp->age = 55;
    ptr_emp->salary = 9000;

    printf("\n name: %s", ptr_emp->name);
    printf("\n age: %d", ptr_emp->age);
    printf("\n salary: %d", ptr_emp->salary);
    printf("\n");
}