#include <stdio.h>
#include <string.h>

void main(void)
{
    struct person
    {
        int code;
        char name[30];  //*string of name consist of 30 char
        float salary;
    };
    
    struct person p1,p2 = {200, "toma", 700.60};  //*initialize struct p2
    struct person p3; 

    struct person * ptr;  //*pointer Consult on the address of structure to change it
    
    p1.code = 100;
    strcpy(p1.name, "fatoma");
    p1.salary = 500.50;
    
    printf("person 1:\n");
    printf("code = %d\n", p1.code);
    printf("name = %s\n", p1.name);
    printf("salary = %7.2f\n", p1.salary);

    ptr = &p1;  //*pointer Consult on the address p1 to make change

    (*ptr).code = 550;  //*or ptr->code = 550;
    ptr->salary = 1000.80;  
    
    printf("person 1:\n");
    printf("code = %d\n", p1.code);
    printf("name = %s\n", p1.name);
    printf("salary = %7.2f\n", p1.salary);
}