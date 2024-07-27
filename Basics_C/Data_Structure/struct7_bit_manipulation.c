//*bit manipulation represented by three gates: (and) (or) (not) by values (1,0)

//*And gate: (multiplication of input bits)                                      (more than one input)
//*ex: 0 bit and 0 bit = 0 * 0 = 0 bit output, 0 bit and 1 bit = 0 * 1 = 0 and so on

//*OR gate: (sumition of inputs except 1 + 1 = 1 not 2)                          (more than one input)

//*Not gate: (0 opposite 1, 1 opposite 0)                                        (only one input)

//*Xor gate: (different inputs = output  1, same inputs = output 0)              (more than one input)
//*ex: 0 Xor 0 = 0 (because the two inputs are the same), 1 Xor 0 = 1 (because the two inputs are different)

//*we can deal with bits via bitwise operators: &(and), |(or), ^(Xor), ~(bitwise complement(Not gate)), <<(shift left), >>(shift right)
//*bitwise operator work with int type only not work with float or double

/*
a = 0000 0110
b = 0000 1101

a & b = 00000100  (multiplication) And gate
a | b = 00001111  (sumition) OR gate
a ^ b = 00001011  (different input 1, same input 0) XOR gate
*/
/*
a = 0000 1111
c = ~ a;
a = 1111 0000  (opposite) Not gate
*/
/*
hint: we delete first num start from left side and we replace it (by 0) at right side (because it's positive num)
(int a = 15; positive num)
c = a << 3;   mean "shifts bits left" 3 times 
a = 0000 1111
first time a << 1  0001 1110  
secon time a << 2  0011 1100
third time a << 3  0111 1000
*/
/*
hint: we delete first num start from right side and we replace it (by 0) at left side (because it's positive)
(int a = 15; positive num)
c = a >> 3;    mean "shift bits right" 3 times
a = 0000 1111
first time a >> 1  0000 0111
secon time a >> 2  0000 0011
third time a >> 3  0000 0001
*/
/*
hint: we delete first num start from right side and we replace it (by 1) at left side (because it's negative num)
(a = -6  negative num)
c = a >> 2
a = 1111 1010
 first time a >> 1  1111 1101
 secon time a >> 2  1111 1110 
*/