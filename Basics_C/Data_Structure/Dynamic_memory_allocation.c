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
    person * pdata[100];  //*Array of pointer to struct of data of 100 person
    int size;
    int i;
    int max = 0;
    person max_p;

   //* printf("size of person %d bytes\n", sizeof (person));
    printf("size of person < 100:");
    scanf("%d", &size);
    
    for (i = 0; i < size; i++)       //*part read data
    {
        printf("%2d:\n", i);
        pdata[i] =(person *) malloc(sizeof (person));
        
        printf("\tcode :");
        scanf("%d", &pdata[i]->code);     //*func read code and put it into temp.code
        fflush(stdin);              //*func prevent conflict between scanf and gets
        printf("\tname :");
        gets(pdata[i]->name);           //*func read name and put it into temp.name
        printf("\tsalary :");
        scanf("%f", &pdata[i]->salary);
    }

    for (i = 0; i < size; i++)      //*part has operation process of code
    {
        if (pdata[i]->salary > max)
        {
            max = pdata[i]->salary;            //*the max salary
            max_p = (*pdata[i]);                //*data of person has max salary
        }
    }
    printf("max salary = %d\n", max);
    print_info(max_p);

    for (i = 0; i < size; i++)
    free(pdata[i]);

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
//*Note: size of structure padding to inegrate space in memory automatic