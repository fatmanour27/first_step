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
    person data[100];  //*Array of struct of data of 100 person
    int size;
    int i;
    int max = 0;
    person max_p;

    printf("size of person < 100:");
    scanf("%d", &size);
    
    for (i = 0; i < size; i++)       //*part read data
    {
        data[i] = get_data();
    }

    for (i = 0; i < size; i++)      //*part has operation process of code
    {
        if (data[i].salary > max)
        {
            max = data[i].salary;            //*the max salary
            max_p = data[i];                //*data of person has max salary
        }
    }
    printf("max salary = %d\n", max);
}

void print_info(person p)                  //*func that print data of (person p1,p2) by shortcut method
{
    printf("code = %d\n", p.code);
    printf("name = %s\n", p.name);
    printf("salary = %7.2f\n", p.salary);

}
person get_data(void)               //*func that return struct-->person which consist of code, name and salary
{
    person temp;                   //*local var is temp and its type person struct

    printf("\tcode :");
    scanf("%d", &temp.code);     //*func read code and put it into temp.code
    fflush(stdin);              //*func prevent conflict between scanf and gets
    printf("\tname :");
    gets(temp.name);           //*func read name and put it into temp.name
    printf("\tsalary :");
    scanf("%f", &temp.salary);
    
    return (temp);
}