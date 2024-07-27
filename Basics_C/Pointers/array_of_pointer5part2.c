#include <stdio.h>
#define string char*  //*any statement contain word (string) will be replaced by (char*) 

int main() //another way to print aaray of pointer by define string char*
{
    string title = "My Lovers:";  //* title is var its type string
    int x = 0;
    string my_lovers[5] = {0};  //*initialize to pointer by 0

    my_lovers[0] = "Dad";
    my_lovers[1] = "Omee";
    my_lovers[2] = "Rawan";
    my_lovers[3] = "Sanaa";
    my_lovers[4] = "3mo Ibrahim";

    printf("\n %s", title);

    for(x = 0; x < 7; x++)
    {
        printf("\n %s", my_lovers[x]);
    }
    return (0);
}
