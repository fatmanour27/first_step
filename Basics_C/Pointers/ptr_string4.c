//* pointer variable: char *str = "PIC"
//* array variable: char str[] = "PIC"  OR char str[4] = "PIC" num 4 is num of character of string
//* '\0' NULL character appended to string automaticaly
//*Note:  char str[4] = "PIC"
//*       str[0] = 'p';
//*       str[1] = 'I';
//*       str[2] = 'C';
//*       str[3] = '\0';
#include <stdio.h>

int main()  //*print string via array by using specifier c (c%)
{
    char num_of_character[] = "Fatoma";  //*array of string (Fatoma) consist of 6 characters
    int x = 0;

    printf("\n");

    while (num_of_character[x] != '\0')  //* if num of characters not equal NULL
    {
        printf("%c", num_of_character[x]);
        x++;
    }
    return (0);
}

int main()  //* print string via pointer by using specifier c (%c)
{
    char *num_of_character = "Fatoma";  //*pointer to string, pointer stored in it the address of string

    printf("\n");

    while (*num_of_character != NULL)
    {
        printf("%c", *(num_of_character++));
    }
    return (0);
}

int main()  //* print string via array by using specifier s (%s) 
{
    char num_of_character[] = "Fatoma";

    printf("\n %s", &num_of_character[0]); //* or printf("\n %s", num_of_character);

    return (0);
}

int main()  //* print string via pointer by using specifier s (%s)
{
    char *num_of_character = "Fatoma";

    printf("\n %s", &num_of_character[0]); //* or printf("\n %s", num_of_character);

    return (0);
}

int main()
{
    char *num_of_character = "Fatoma";

    while (*num_of_character != NULL)
    {
        printf("\n %c --> %p", *num_of_character, num_of_character); //* %c --> %p print value that address points to it and print the value of address
        num_of_character++;
    }
    return (0);
}