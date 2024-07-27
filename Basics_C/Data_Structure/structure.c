#include <stdio.h>
//*structure is group of different data type
//*ex: data type of name is char, data type of salary is int collected in structure
//*to access structure use dot(.) operator
void main(void)
{
    struct person   //*name of structure is person
    {
        int num;    //*struct type
        char ch;
    }p1,p2;         //*struct var

    p1.num = 2;
    p1.ch = 'z';
    p2.num = 2;
    p2.ch = 'y';
    printf("p1.num = %d, p1.ch = %c\n", p1.num, p1.ch);
    printf("p2.num = %d, p2.ch = %c\n", p2.num, p2.ch);
}