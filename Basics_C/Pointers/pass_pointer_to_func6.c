#include <stdio.h>

void By_Ref (int *x);   //* By_Ref func pass it parameter indicate to address of pointer x
void Swap(int *, int *);  //* Swap func pass it 2 parameters indicate to address of 2 pointers
                          //*Swap func replace the value of first pointer with value of sec pointer
                          //* Swap func make replacement process
int StringLength(char []); //* StringLength func find length of string, type of func is(int) and pass parameter of array its type char
void modifyArray(const int []);  //*modifyArray func prevent any modification on code because of (const), display error
int main()  //*program passing parameters by reference
{
    int a = 6;

    printf("\n before calling func By_Ref = %d", a);

    By_Ref(&a);  //* &a indicate to pointer to address of a var
    printf("\n after calling func By_Ref = %d", a);

    return (0);
}
void By_Ref (int *x)  //*func By_Ref access pointer that pointed to address of x to put in it value 10
{                     //*parameter (a) will be pass to pointer x (*x) 
    *x = 10;
}

int main()
{
    int x = 5, y = 10;
    int *p = &x;

    Swap(p, &y);  //*pass address that exist in pointer *p that is (&x) by use p value that indicate to pointer
    printf("\n x = %d : y = %d", x, y);

    return (0);
}
void Swap (int *n1, int *n2)
{
    int temp = 0;  //*we name the var temp because its value is temporary

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()  //*program pass parameter to func Stringlength by using array
{
    char text[] = "Embedded Systems";

    printf("\n Length = %d characters", StringLength(text));

    return (0);
}
int StringLength(char string[])  //*type of func is(int) and pass parameter of array (string) its type char
{
    int x = 0;

    while (string[x] != NULL)
    {
        x++;
    }
    return (x);
}

int main()  //*program pass parameter to func Stringlength by using pointer
{
    char *text = "Embedded Systems";

    printf("\n Length = %d characters", StringLength(text));

    return (0);
}
int StringLength(char *string)  //*type of func is(int) and pass parameter of array (string) its type char
{
    int x = 0;

    while (*string != NULL)
    {
        x++;
        string++;  //*increase 1 to address of pointer named string
    }
    return (x);
}


/*int main()
{
    int num[3] = {2, 4, 16};

    modifyArray(num);

    return (0);
}
void modifyArray(const int num[])
{
    int x = 0;

    for (x = 0; x < 3; x++)
    {
        num[x] = num[x] * num[x];
    }
}*/