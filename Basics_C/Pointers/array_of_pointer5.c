//* p[0] = "My string" assign address of first character in string to pointer in element 1 of array 

#include <stdio.h>

int main()
{
    int x;
    char *my_lovers[] = {
        "Dad", "Omee", "Rawan", "Sanaa"
    };

    for(x = 0; x < 7; x++)
    {
        printf("\n %s", my_lovers[x]);
    }
    return (0);
}

int main()
{
    int x;
    char *my_lovers[5] = {0};  //*initialize to pointer by 0

    my_lovers[0] = "Dad";
    my_lovers[1] = "Omee";
    my_lovers[2] = "Rawan";
    my_lovers[3] = "Sanaa";
    
    for(x = 0; x < 7; x++)
    {
        printf("\n %s", my_lovers[x]);
    }
    return (0);
}
