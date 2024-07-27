//*fundamental data types of c: integer, float, char
//*derived data types of c: Array, Types, Enums
//*prevent using static word in structure member

/*"first way to define struct":

 struct employee (structure type)
{
    char name[13];
    int age;
    int salary;
}emp1; variable has members of struct

"second way to define struct":

struct employee 
{
    char name[13];
    int age;
    int salary;
};
struct employee emp1;

*/
#include <stdio.h>

struct employee      //*Tag
{
    char name[15];  //*members
    int age;
    int salary;
};

struct employee emp1 = {"fatoma", 20, 100000};  //*decleration of struct with value

int main()
{
    printf("\n name: %s", emp1.name);
    printf("\n age: %d", emp1.age);
    printf("\n salary: %d", emp1.salary);

    return 0;
}
//*to assigne values to members by using array:
struct employee 
{
    char name[15];  
    int age;
    int salary;
};

struct employee emp1;

int main()
{
    emp1.name[0] = 'F';
    emp1.name[1] = 'a';
    emp1.name[2] = 't';
    emp1.name[3] = 'o';
    emp1.name[4] = 'm';
    emp1.name[5] = 'a';
    emp1.name[6] = '\0';  //*because it is string should end it by NULL charcter(\0)

    emp1.age = 20;
    emp1.salary = 100000;

    printf("\n name: %s", emp1.name);
    printf("\n age: %d", emp1.age);
    printf("\n salary: %d", emp1.salary);

    return 0;
}

//*to assigne values to members by using pointer:
struct employee 
{
    char *name;  
    int age;
    int salary;
};


int main()
{
    struct employee emp1;

    emp1.name = "Fatoma";
    emp1.age = 20;
    emp1.salary = 100000;

    printf("\n name: %s", emp1.name);
    printf("\n age: %d", emp1.age);
    printf("\n salary: %d", emp1.salary);

    return 0;
}
