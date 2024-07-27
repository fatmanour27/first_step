#include <stdio.h>
#include <string.h>
typedef struct xx
    {
        int code;
        char name[30];  //*string of name consist of 30 char
        float salary;
    } person;

void print_info(person p);
person get_data(void);
void main(void)
{
    
    person p1,p2;

    p1 = get_data();  //*func return value so that we must put it in var of type of struct(p1)
    print_info(p1);  //*func return void and recieve value of struct(p1)
    printf("\n");
    p2 = get_data();
    print_info(p2);

}

void print_info(person p)  //*func that print data of (person p1,p2) by shortcut method
{
    printf("code = %d\n", p.code);
    printf("name = %s\n", p.name);
    printf("salary = %7.2f\n", p.salary);

}
person get_data(void)  //*func that return struct-->person which consist of code, name and salary
{
    person temp;  //*local var is temp and its type person struct

    printf("code :");
    scanf("%d", &temp.code);  //*func read code and put it into temp.code
    fflush(stdin);  //*func prevent conflict between scanf and gets
    printf("name :");
    gets(temp.name);  //*func read name and put it into temp.name
    printf("salary :");
    scanf("%f", &temp.salary);
}