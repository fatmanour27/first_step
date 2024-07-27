
#include <stdio.h>

//initialize array of pointers and enumeration
const char *monthName[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "JUl", "Aug", "Sep", "Oct", "Nov", "Dec"}; 
enum month {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};  //*enumeration start from 1 until get to 12 in DEC

int main()
{
    enum month x;

    for (x = JAN; x <= DEC; x++)
    {
        printf("\n %2d  %s", x, monthName[x]);
    }
    return 0;
}
//another way to initialize array of pointers and enumeration by using typedef

const char *monthName[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "JUl", "Aug", "Sep", "Oct", "Nov", "Dec"}; 
typedef enum {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC}month;  //*month is name of typedef of enum

int main()
{
    month x;

    for (x = JAN; x <= DEC; x++)
    {
        printf("\n %2d  %s", x, monthName[x]);
    }
    return 0;
}