//*specify size of bits of structure or union  byte = 8 bits

/*struct structname
{
    int membername1: bitwidth;
    int membernamen:bitwidth
}
*/
/*typedef struct
{
    int bit0: 1;
    int bit1to3: 3;
    int bit4: 1;
    int bit5: 1;
    int bit6to7: 2;
}byteBits;
*/
#include <stdio.h>

typedef struct
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
}date;

int main()
{
    date dt = {31, 12, 2024};

    printf("\n struct size: %d bytes", sizeof(date));  //*size of struct(date) = num of var of same data type(int) * size of bytes of int = 3 var * 4 bytes = 12 bytes
    printf("\n date is %d/%d/%d", dt.day, dt.month, dt.year);

    return 0;
}
// use bits in this program
typedef struct
{
    unsigned int day: 5;  //*5 number of bits of 31 day
    unsigned int month: 4; //*4 number of bits of 12 month
    unsigned int year;
}date;

int main()
{
    date dt = {31, 12, 2024};

    printf("\n struct size: %d bytes", sizeof(date));
    printf("\n date is %d/%d/%d", dt.day, dt.month, dt.year);

    return 0;
}
//note: bit field can't indicate to address because may address contain more than one member
//note: prohibted using array in bit field