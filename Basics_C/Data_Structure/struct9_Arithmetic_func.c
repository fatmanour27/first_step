//* abs() func : return absolute value of int (positive value)
//* Header file : <stdlib.h>
//* syntax : int abs(int n); n is the number that should calculate absolute value

//* floor() func : return nearset int value wheather positive or negative value, this value is less than or equal (take less int value)
//* Header file : <math.h>
//* syntax : double floor(double x);

//* ceil() func : return nearest int value, this value greater than or equal (take great int value)
//* Header file : <math.h>
//* syntax : double ceil(double x); 

//* round() func : return nearest int value of float/double/long double
//* round() func : if decimal value from .1 to .4 it return int value < argument passed func (take less int value)
//* round() func : if decimal value from .5 to .9 it return int value > argument passed func (take great int value)
//* Header file : <math.h>
//* syntax : double round(double a);

//* rand() func : random function return pseudo-random number
//* rand() func : RAND_MAX constant its value at least = 32767
//* Header file : <stdlib.h>
//* syntax : int rand(void)  void mean not return parameter

//* srand() func : solve the problem of rand() func which repeat the values at each of time we set program
//* srand() func : prevent repeating of values
//* Header file : <stdlib.h>
//* syntax : void srand(unsigned int seed)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//abs() func
/*int main()
{
    int m = abs(200);
    int n = abs(-400);  //*abs() func return positive absolute value if it was negative or positive value 

    printf("Absolute value of m = %d\n", m);
    printf("Absolute value of n = %d\n", n);

    return 0;
}
//floor() func
int main()
{
    float x = 5.1, y = -5.4;

    printf("floor of %f is %f\n", x, floor(x));
    printf("floor of %f is %f\n", y, floor(y));

    return 0;
}
//ceil() func
int main()
{
    float x = 5.1, y = 5.4;

    printf("ceil of %f is %f\n", x, ceil(x));
    printf("ceil of %f is %f\n", y, ceil(y));

    return 0;
}
//round() func
int main()
{
    float x = 5.1, y = 5.5;

    printf("round of %f is %f\n", x, round(x));
    printf("round of %f is %f\n", y, round(y));

    return 0;
}
//rand() func
int main()
{
    
    printf("\nRandom value: %d", rand());
    printf("\nRandom value: %d", rand());

    return 0;
}
//rand() func to control the limit of random values
//random value = rand() % (upper limit - lower limit + 1) + lower limit
int main()
{
    int x = 0, random_value = 0;
    //range of random num/value from 3 to 7
    const int MAX = 7;
    const int MIN = 3;

    for (x = 0; x < 10; x++)
    {
        random_value = rand() % (MAX - MIN + 1) + MIN;  //*random value = value result rand() func "random" modulus (maximum random value - minimum + 1) + minimum random value

        printf("\n Random value: %d", random_value);
    }
    return 0;
}*/
//srand() func
int main()
{
    int x = 0, random_value = 0 , seed = 0;
    //range of random num/value from 3 to 7
    const int MAX = 7;
    const int MIN = 3;

    printf("\n Enter seed:");
    scanf("%d", &seed);

    srand(seed);

    for (x = 0; x < 10; x++)
    {
        random_value = rand() % (MAX - MIN + 1) + MIN; 

        printf("\n Random value: %d", random_value);
    }
    return 0;
}