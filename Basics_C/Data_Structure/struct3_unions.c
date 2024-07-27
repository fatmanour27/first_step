//*union is similar to struct but struct reserve many spaces in RAM while union reserve one place to the whole members
//*union reserve this space according to num of byte of data type
//*purpose of using union is provide spaces in RAM other than struct that reserve large space by certain space in RAM for each data type
//*note: can use all members of struct at the same time, but can't use all members of union at the same time(must use one member)
#include <stdio.h>

typedef union
{
    char x;
    int y;
}Num;

int main()
{
    Num num;
//display value of x 'A' then value of y = 5000 
    num.x = 'A';
    printf("\n x: %c", num.x);

    num.y = 5000;
    printf("\n y: %d", num.y);
    printf("\n");
//display on screen num of bytes of x (char) = 1 instead of value of x 'A' and will display value of y
    num.x = 'A';  
    num.y = 5000;

    printf("\n x: %c", num.x);
    printf("\n y: %d", num.y);
    printf("\n");
//display value of x 'A' then  another value of y not equal 5000
    num.y = 5000;
    num.x = 'A';

    printf("\n x: %c", num.x);
    printf("\n y: %d", num.y);

    return 0;

}