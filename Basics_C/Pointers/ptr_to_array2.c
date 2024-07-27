#include <stdio.h>

int main()
{
    int array[5] = {2, 3, 5, 7, 11};

    printf("\n array is at address :%p", &array[0]);  //*print add of first element of array
    printf("\n array is at address :%p", &array);     //*print add of first element of array
    printf("\n array is at address :%p", array);      //*print add of first element of array
    printf("\n array is at address :%p", &array[1]);  //*print add of second element of array
    return (0);
}

int main()
{
    int num[5];
    int x, *pnum;  //*pnum pointer points to address of first element of array (num)

    pnum = num;

    for (x = 0; x < 5; x++)  //*fill array
    {
        *pnum = x + 1;
        pnum++;
    }

    for(x = 0; x < 5; x++)  //*display array
    {
        printf("\n numbers[%d] = %d", x, num[x]);  //* [%d] = x, %d = num[x]
    }
    return (0);
}

/*increament address of pointr p
{
    int x[3] = {1, 2, 3};
    int *p;

    p = &x;
    p++;  //*increament value of address of pointer p by unit and unit of int = 4 byte to access to second element = 2

}*/

/*{
    long x[3] = {1, 2, 3};
    long *p = &x;     

    *p += 4;        //* x[0] = 1, *p += 4, x[0] = x[0] + 4 = 1 + 4 = 5. at address of p 0800
    p++;           //*  value of p by default = 0800, p++, p = p + (1 * 4) = 0800 + 4 = 0804

    *p = 0xFATOMAFF;  //*x[1] change its sec (2) element by pointr p to value (FATOMAFF)
    p++;             //* last value of p = 0804
                    //* p++, p = p +(1 * 4) = 0804 + 4 = 0808

    *p = 0xRAWANASR;    //* x[2] change its third (3) element by pointr p to value (RAWANASR)
    p -= 2;             //* last value of p by defualt = 0808 
                        //* p -= 2, p = p - (2 * 4) = 0808 - 8 = 0800  note: 4 is num of byte of data type long
    *p = 0xLOVEFOOD;   //* x[0] change its first element (1) by pointer p to value  (LOVEFOOD)
}*/