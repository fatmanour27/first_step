#include <stdio.h>
#include <string.h>

typedef struct xx
    {
        int code;
        char name[30];  //*string of name consist of 30 char
        float salary;
    } person;
void print_info(person p);
void cor_inc_code(person * p);
void main(void)
{
    
    person p1,p2 = {200, "toma", 700.60};  //*initialize struct p2
    person p3; 

    p1.code = 100;
    strcpy(p1.name, "fatoma");
    p1.salary = 500.50;
    
    printf("\nperson 1:\n");
    print_info (p1);
    printf("\nperson 2:\n");
    print_info (p2);
    cor_inc_code(&p2);  //*use (&) because this func consult on pointer and increament the code of p2 = 200 to 201
    print_info (p2);
    p3 = p1;
    p3.salary = 800;
    
    printf("\nperson 3:\n");
    print_info (p3);
}
void print_info(person p)  //*function that print data of (person p1,p2,p3) by shortcut method
{
    printf("code = %d\n", p.code);
    printf("name = %s\n", p.name);
    printf("salary = %7.2f\n", p.salary);

}
void inc_code(person p)  //*function that increament code by value (same value printed again after increament without change )
{
    p.code++;
}
void cor_inc_code(person * p)  //*function that increament code by reference (pointer to person-->struct)
{
    p->code++;  //*increament to code
}