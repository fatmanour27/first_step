/*typedef struct
{
    char *name;
    int age;
    int salary;  
}Emp; 

Emp emp1[2]; //*name of array is emp its type is struct(Emp) cosist of 2 elment
Emp emp1[2] = {{"Fatoma", 20, 100000}, {"Faris", 55, 200000}};  //*declaration with value
*/
#include <stdio.h>

typedef struct
{
    char *name;
    int age;
    int salary;
}Emp;
Emp emp[2];

int main()
{
    int x = 0;

    emp[0].name = "Fatoma";
    emp[0].age = 20;
    emp[0].salary = 1000;

    emp[1].name = "Faris";
    emp[1].age = 55;
    emp[1].salary = 20000;

    for (x = 0; x < 2; x++)
    {
        printf("\n name: %s", emp[x].name);
        printf("\n age: %d", emp[x].age);
        printf("\n salary: %d", emp[x].salary);
        printf("\n");
    }
    return 0;
}