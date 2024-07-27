//*Enumeration is a user defined data type in C
//*Enumeration assign to constant int names
//*its values start with 0 and incremented by 1
//*advantages of enum: it can defin in global scope or local scope
/*definition of enum:
enum week {Mon, Tue, Wed};
enum week day;
or
enum week {Mon, Tus, Wed}day;
*/
#include <stdio.h>

enum state {working = 1, failed = 0, freezed = 0};

int main()
{
    printf("\n %d, %d, %d", working, failed, freezed);

    return 0;
}
//this program will print value of Jun = 0 , Feb = 1 and so on until we get to Dec = 11
enum year {Jan, Feb, Mar, Apr, May, Jun, JUl, Aug, Sep, Oct, Nov, Dec};

int main()
{
    int i;

    for (i = Jan; i <= Dec; i++)
    printf("%d ", i);

    return 0;
}

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
    enum week day;
    day = Wed;  //*day is var and wed is constant

    printf("%d", day);

    return 0;
}
/*Note: we can use:
#define working 0
#define failed 1
#define freezed 2
*/  
