//*least significant Bit (LSB): the first bit at right side (>> right shift)
//*most significant Bit (MSB): the first bit at left side   (<< left shift)

#include <stdio.h>
//cheak least significant Bit (LSB) if the first num/bit at right side is 0 or 1 
//by using binary num 1(0000 0001) via (And bitwise operator)(multiplication)
//if the result of multiplication (num of bits * LSB) is 0 then the first bit at right side = 0 (0 * 1)
//if the result of multiplication (num of bits * LSB) is 1 then the first bit at right side = 1 (1 * 1)
int main()
{
    int num;

    printf("\n Enter any num: ");
    scanf("%d", &num);
    
    if (num & 1)   //* take the num that user input it(unknown) and test it with (1 in binary = LSB) by using (And bitwisw operator)(multiplication)
    {
        printf("\n LSB of %d is set 1", num); //*if the result = 1(true) print that num which the user input it = 1 because (1'user' * 1'test LSB') = 1"result" (set)
    }
    else 
    {
        printf("\n LSB of %d is unset 0", num); //*if the result = 0(false) print that num which the user input it = 0 because (0'user' * 1'test LSB') = 0"result"(unset)
    }
    return 0;
}
//cheak most significant Bit (MSB) if the first num/bit at (left) side is 0 or 1 or (any num != 0) 
//by using binary num 1(1000 0000) via (And bitwise operator)(multiplication)
//if the result of multiplication (num of bits * MSB) is 0 then the first bit at left side = 0 (0 * 1)
//if the result of multiplication (num of bits * MSB) is 1 then the first bit at left side = 1 (1 * 1)
//first step : we must know num of bytes of machine/computer so that we will use sizeof() func for knowing num of bytes
//secon step : we must know num of bits which the user input by mltiplying (num of byte of data type(int) * num of bits) = 4 byte by default * 8 bit = 32 bit
//third step : we must get to (MSB in binary) by get num of bits minus 1 (bits = 32 bit by default - 1) then MSB = 1 << bits = 1 << 31  
int main()
{
    int num, bits, msb;

    printf("\n Enter any num: ");
    scanf("%d", &num);

    bits = sizeof(int) * 8;  //*calculate num of bits via multiplying 4 bytes by default * 8 bits

    msb = 1 << (bits - 1);  //*(bits = 32 bit by default - 1) then MSB = 1 << bits  - 1, MSB = 1 << 32 -1, MSB = 1 << 31.

    if (num & msb)  //* take the num that user input it(unknown num) and test it with (MSB) by using (And bitwisw operator)(multiplication)
    {
        printf("\n MSB of %d is set 1", num);  //*if the result = 1(true) print that num which the user input it = 1 because (1'user' * 1'test MSB') = 1"result"(set)
    }
    else
    {
        printf("\n MSB of %d is unset 0", num);  //*if the result = 0(false) print that num which the user input it = 0 because (0'user' * 1'test MSB') = 0"result"(unset)
    }
    return 0;
}