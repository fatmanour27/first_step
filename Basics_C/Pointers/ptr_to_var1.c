//*to initialize pointer there are three ways: ptr = &x or ptr = 0; or ptr = NULL
#include <stdio.h>

//*Direct access way: access to value of var(x) vai x
int main()
{
    int x = 5;

    printf("Address of x : %p", &x);  //* p: specifier of pointr, &x: add of operator
                                     //* &x will be printed in hexadecimal num(0-9, a-f)
    return (0);
}
//*Indirect Access way: access to value of var(x) via pointer to address of x(*ptr)
int main()
{
    int x = 5;
    int *ptr;     //*pointer which pointed to address of variable x, ptr is same data type of var x (int)

    ptr = &x;    //*address of value of x will be stored in pointer ptr/ ptr assigned address of x
    *ptr = 7;    //*value of x will be changed to 7 instead of 5 by using ptr pointer

    printf("\n Address of x :%p", &x);   //*will print address of x     (direct access)
    printf("\n Address of x :%p", ptr);  //*will print address of x     (indirect access)

    printf("\n value of x:%d", x);        //*will print value of x = 7      (direct access)
    printf("\n value of *ptr :%d", *ptr); //*will print value of *ptr = 7   (indirect access)

    return(0);
} //*Note: if we write ptr without sign(*) we will assigned to address of ptr not address of var x