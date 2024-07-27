#include <stdio.h>

char *strrev(char *);  //*strrev func write string in reverse way and we pass to this func a parameter(pointer) its type char
                       //*strrev func return pointer(address) of char type

int main()
{
    char *string = "E N G I N E E R";

    printf("\n %s", strrev(string));  //*string is the parameter that we pass to strrev func

    return (0);
}

char *strrev(char *input)   //*input is a parameter and is address of first character in string
{
    static char output[20];  //*output is an array that we returned it to func, its type should be the same type of func (char)
                             //*static save element of array into data of operating system to ensure that it is not deleted
    char *i = input;    //*indicate to address of first character of string to be reversed
    char *o = output;   //*indicate to address of first element of array to store the reversed string

    while (*i != NULL)
    {
        i++;
    }
    i--;   //*decrement 1 from end of string (at NULL) to get to last char (R) of string that exist before NULL

    while (i >= input)  //* (i) became contain address of last char of string (R) after making decrement(i--) instead of first char (E)
                        //* address of last char of string (R) > address of first char of string (E)
                        //* (input) contain address of first char of string (E)
    {
        *o = *i;      //* take a value that i pointed to in string and put it as first element in array that o pointed to
        i--;         //* decrement address of i by 1 to transport to the next char that it's exist before last char(R) and so on to get to first char of string and put it as last element of array
        o++;        //* increment address of o by 1 to transport to the location of next element of array and so on to get to last element to put in it first char of string(E)
    }
    *o = NULL;    //*ending of string by making the last element of array that contain first char of string equal NULL

    return (output);
}