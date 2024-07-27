//*copmpile time memory allocation = static or stack memory allocation act when we reserve space of var in RAM
//*disadvantages of static memory allocation: reserve constant size in memory Which leads to waste in memory
//* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~: can't clear allocated bytes if we haven't need to them

//*Runtime/ dynamic or heap memory allocation: memory allocated through malloc() calloc() realloc() free(), 
//*malloc() func : allocate num of bytes in memory and return void pointer to access memory allocated
//*malloc() func : return NULL pointer on failure
//*void *malloc(num_of_bytes(int)) : void pointer means that pointer not has specific data type not int or char 

//*free() func : clear dynamic allocated memory, if pointer is NULL the free doesn't work  free(ptr);
#include <stdio.h>
#include <stdlib.h>

//malloc() func
int main()
{
    char *name;  //*type of pointer according to space that we want to reserve it in memory (will reserve 1 byte by using char)

    name = (char *) malloc(80 *sizeof(char));  //*num of places will reserved in memory * num of bytes of data type = 80 * 1 byte = 80 place

    if (name == NULL)
    {
        printf("\n out of memory\n");
    }
    else
    {
        printf("\n memory allocated\n");
    }
    return 0;
}
//malloc() func to know what's the value of elements (by using array),which we reserved them place in memory
int main()
{
    int *num_of_reserved_places;
    int x;
    num_of_reserved_places = (int *) malloc(5 * sizeof(int));  //* (5 * 4 bytes) = 20 place/block reserved in memory 

    if (num_of_reserved_places == NULL)  //*if there are not places in heap of memory (NULL) return 0
    {
        return 0;
    }
    else   //*if there are places in heap of memory fill them by values by using array and for loop
    {
        num_of_reserved_places[0] = 100;
        num_of_reserved_places[1] = 200;
        num_of_reserved_places[2] = 300;
        num_of_reserved_places[3] = 400;
        num_of_reserved_places[4] = 500;

        for (x = 0; x < 5; x++)
        {
            printf("\n numbers of reserved blocks[%d] = %d", x, num_of_reserved_places[x]);
        }
    }
    return 0;
}
//malloc() func to know what's the value of elements (by using pointers)which we reserved them place in memory
int main()
{
    int *num_of_reserved_places;
    int x;
    num_of_reserved_places = (int *) malloc(5 * sizeof(int));   

    if (num_of_reserved_places == NULL) 
    { 
        return 0;
    }
    else  
    {
        *num_of_reserved_places = 100;   //*access to address of pointer and fill it by value 100
        *(num_of_reserved_places + 1) = 200;  //*increase one block to value that pointer pointes to it
        *(num_of_reserved_places + 2) = 300;
        *(num_of_reserved_places + 3) = 400;
        *(num_of_reserved_places + 4) = 500;

        for (x = 0; x < 5; x++)
        {
            printf("\n numbers of reserved blocks%d = %d", x + 1, *(num_of_reserved_places + x));
        }
    }
    return 0;
}
    
//free() func
int main()
{
    char *name;  
    name = (char *) malloc(80 *sizeof(char));  

    if (name == NULL)
    {
        printf("\n out of memory\n");
        return 0;
    }
    else
    {
        printf("\n memory allocated\n");
        free (name);   //* free space that we was reserved by malloc and not need that space, again by using the address of pointer name
    }
    return 0;
}