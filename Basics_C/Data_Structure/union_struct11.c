#include <stdio.h>
void main(void)
{
    union data
    {
        char ch;
        short sh;
        int myint;
    } x;
    printf("size of union = %d\n", sizeof(x));

    x.sh = 2500;  //*will print the value of sh
    printf("%d\n", x.sh);

}