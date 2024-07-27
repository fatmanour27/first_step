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
    
    struct person p1,p2 = {200, "toma", 700.60};  //*initialization of struct p2
    //*another way to initialize struct p1
    p1.code = 100;
    strcpy(p1.name, "fatoma");
    p1.salary = 500.50;
    
    printf("\nperson 1:\n");
    printf("code = %d\n", p1.code);
    printf("name = %s\n", p1.name);
    printf("salary = %7.2f\n", p1.salary);
    printf("\nperson 2:\n");
    printf("code = %d\n", p2.code);
    printf("name = %s\n", p2.name);
    printf("salary = %7.2f\n", p2.salary);
}