//*struct reserve space to different data type at different location
//*union reserve space to different data type at the same location
//*union use one type from different data types and reserve the largest num of bytes
//*ex: int, char, short-->will reserve 4 bytes in memory because of int has the largest num of bytes
#include <stdio.h>
void main(void)
{
    union data
    {
        char ch;
        short sh;
        int myint;
    } x;
    printf("size of union = %d\n", sizeof(x));

    x.ch = 'A';
    x.sh = 2500;  //*in this step the compiler will destroy/ignore value of ch and will print ?
                  //*because it should compile one type of data types"short data type in this ex"
    printf("%c\n", x.ch);

}