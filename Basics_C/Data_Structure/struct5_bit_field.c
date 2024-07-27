//*first way to use sizeof() operator in clculating size of bytes of any data type
//*sec way to use sizeof() operator in expression 
//*declare the bits by using only int data type or unsigned int
//* so we use int data type its size = 4 byte = 4 * 8 = 32 bit not more than 32
//*int = (2 power bits(n)) - 1    unsigned int = 2 power(bits(n) - 1)
#include <stdio.h>
#include <stdlib.h>
//first way
int main()
{
    printf("char = %d\n", sizeof(char));
    printf("int = %d\n", sizeof(int));

    return 0;
}
//sec way
int main()
{
    int a = 0;
    double d = 10.21;

    printf("size = %d", sizeof(a + d)); //*sum bytes of data type int + double = 4 byte + 4 byte = 8 bytes not sum of values of var of data type

    return 0; 
}
//calculate size of array in memory RAM
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};  //* the element of array * bytes of data type(int) = 8 * 4 = 32

    printf("\n Array size: %d", sizeof(arr));

    return 0;
}
//calulate num of element of array
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};  //* size of bytes of all elements divided by the size of one element = 32 / 4 = 8 byte

    printf("\n Number of elements: %d", sizeof(arr)/sizeof(arr[0]));
}
//calculate block of dynamic memory allocation
int main()
{
    int *ptr = malloc(10*sizeof(int));

    return 0;
}