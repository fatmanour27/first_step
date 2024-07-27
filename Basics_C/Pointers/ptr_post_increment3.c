//*post increment pointer: *p++ or *(p++) means increasing at address of pointer by one unit
//* z = *(p++) is equivalent to z = *p and p = p + 1

//*post increment data: (*p)++  means increasing in value of data that pointed to by pointer by 1
//* z = ( *p )++ is equivalent to z = *p and *p = *p + 1

//*pre increment pointer: *++p or *(++p) means increasing at address of pointer by one unit
//* z = *(++p) is equivalent to p = p + 1 and z = *p

//*pre increment data: ++(*p)  means increasing in value of data that pointed to by pointer by 1
//* z = ++(*p) is equivalent to  *p = *p + 1 and z = *p
#include <stdio.h>

int main()
{
    int num[5] = {4, 9, 6, 5, 3};
    int *ptr = num;

    printf("\n third element = %d", num[2]);     //* print value of third element of array = 6 (direct way) with index 2 num[2]
    printf("\n third element = %d", ptr[2]); 
    
    printf("\n third element = %d", *(num + 2));  //*  print value of third element of array = 6 (indirect way by pointer)
    printf("\n third element = %d", *(ptr + 2));  //*  *(ptr + 2) pointer to address 

    return (0);
}