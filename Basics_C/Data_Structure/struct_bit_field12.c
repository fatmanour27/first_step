#include <stdio.h>  //*one byte = 8 bit
void main(void)
{
    struct date  //*will reserve 4 int + 4 int + 4 int = 12 bytes
    {
        unsigned int day;   //*4 bytes/ the max value of day is 31 days ant that's less than even 1 byte 
        unsigned int month; //*and we don't nead 4 bytes, so that we use bit structure
        unsigned int year;
        };
        
        struct datef  //*will reserve 5 + 4 + 12 = 21 bit less than 4 byte that = 4 x 8 = 32 bit 
        {
            unsigned int day : 5;      //*we use 5 bits for max value of day that equal 31 day
            unsigned int month : 4;    //*we use 4 bits for month Dec12
            unsigned int year : 12;    //*we use 12 bits for year 2050
            };
            struct date d1 = {31, 12, 2050};  //*mxa of day is 31, max of month is 12, max of year of 2050
            struct datef d2 = {31, 12, 2050};
            
            printf("d1 = %d/%d/%d\n", d1.day, d1.month, d1.year);
            printf("d2 = %d/%d/%d\n", d2.day, d2.month, d2.year);

            printf("size of d1 = %d\n", sizeof(d1));
            printf("size of d2 = %d\n", sizeof(d2));
}
