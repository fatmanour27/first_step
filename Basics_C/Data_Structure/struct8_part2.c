//* toggling a bit (XOR bitwise operator) : invert, flip process
//* num (value of bit) ^= 1 << n;(number/position of bit)

//* setting a bit (OR bitwise operator) :
//* num(value of bit) |= 1 << n;(number/position of bit)

//* clearing a bit (AND bitwise operator) : 
//* num (value of bit) &= ~(1 << n);(number/position of bit)

//* getting value of bit (AND bitwise operator) :
//* bit_value = (value of bit >> n) & 1;
#include <stdio.h>

int main()
{
    int num_value_of_bits, num_of_bits, newnum_value_of_bits;
    
    printf("\n Enter any number: ");
    scanf("%d", &num_value_of_bits);  //*value of bits 0 or 1

    printf("\n Enter num_of_bits th bit to toggle (0-31): ");
    sacnf("%d", &num_of_bits);   //*number of bits which we want to change it (first bit or second bit or ...) 

    newnum_value_of_bits = num_value_of_bits ^ (1 << num_of_bits);  //*XOR 

    printf("\n number before invert bits %d", num_value_of_bits);
    printf("\n number afret invert bits %d", newnum_value_of_bits);

    return 0;
}
//program for setting a bit
int main()
{
   int num_value_of_bits, num_of_bits;
    
    printf("\n Enter any number: ");
    scanf("%d", &num_value_of_bits);

    printf("\n Enter num_of_bits th bit to toggle (0-31): ");
    sacnf("%d", &num_of_bits);

    num_value_of_bits |= (1 << num_of_bits);

    printf("\n number afret invert bits %d", num_value_of_bits);

    return 0;
}
//program for unsetting or clearing a bit
int main()
{
    int num_value_of_bits, num_of_bits;
    
    printf("\n Enter any number: ");
    scanf("%d", &num_value_of_bits);

    printf("\n Enter num_of_bits th bit to clear bit (0-31): ");
    sacnf("%d", &num_of_bits);

    num_value_of_bits &= ~(1 << num_of_bits);

    printf("\n number afret clearing bits %d", num_value_of_bits);

    return 0;
}
//program to get value og bit
int main()
{
    int num_value_of_bits, num_of_bits;
    
    printf("\n Enter any number: ");
    scanf("%d", &num_value_of_bits);

    printf("\n Enter num of bits th bit (0-31): ");
    sacnf("%d", &num_of_bits);

    num_value_of_bits = (num_value_of_bits >> num_of_bits) & 1;

    printf("\n number of value of bit %d", num_value_of_bits);

    return 0;
}