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

    p3 = p1;          //*assign p1 to p3 mean values of p1 put into p3
    p3.salary = 900;  //*Adjust on value of salary p3 to make it 900 instead of 500.50
    printf("\nperson 3:\n");
    printf("code = %d\n", p3.code);
    printf("name = %s\n", p3.name);
    printf("salary = %7.2f\n", p3.salary);
//*Note: p1 is not affected by any change when we assign it to p3    
}