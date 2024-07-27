//*calloc() func : initialize all bocks with 0 and allocate contiguous memory
//*calloc is slower in implementation than malloc so it's better using malloc func
//* void *calloc(number_of_blocks, number_of_bytes): reserve space of total blocks to allocate and bytes per block

//*realloc() func : update size of exiting allocated memory blocks (move allocated mwmory to new location)
//* void *realloc(ptr, _update_memory_size) 

#include <stdio.h>
#include <stdlib.h>

//calloc() func
/*int main()
{
    char *name;  
    name = (char *) calloc(80, sizeof(char));  

    if (name == NULL)
    {
        printf("\n out of memory\n");
        return 0;
    }
    else
    {
        printf("\n memory allocated\n");
        free (name); 
    }
    return 0;
}*/
//realloc () func : 
/*int main()
{
    int *num_of_reserved_block, *new_blocks;
    int x;
    num_of_reserved_block = (int *) malloc(5 * sizeof(int));

    if (num_of_reserved_block == NULL)
    {
        return 0;
    }
    for (x = 0; x < 5; ++x)
    {
        *(num_of_reserved_block + x) = 100 * (x + 1);
    }
    //reallocation to add new num of blocks to old num of blocks
    new_blocks = (int *) realloc(num_of_reserved_block, 8 * sizeof(int));  //* increase 3 blocks on 5 = 8 blocks * 4 bytes(int)

    if ( new_blocks == NULL)
    {
        return 0;
    }
}*/
//to fill the new blocks by values
int main()
{
    int *num_of_reserved_block, *new_blocks;
    int x;
    num_of_reserved_block = (int *) malloc(5 * sizeof(int));

    if (num_of_reserved_block == NULL)
    {
        return 0;
    }
    
    for (x = 0; x < 5; x++)  //*to print values of 5 blocks
    {
        *(num_of_reserved_block + x) = 100 * (x + 1);
    }
    
    new_blocks = (int *) realloc(num_of_reserved_block, 8 * sizeof(int));

    if ( new_blocks == NULL)
    {
        return 0;
    }
    
    for (x = 0; x < 8; x++)  //*to fill the new blocks = 3 by values, (5 num of old block) < (8 num of all block) to get to (3 num of new block)
    {
        *(new_blocks + x) = 100 * (x + 1);  //*pointer (new_blocks) points to address(6) which is after last address (5) 
    }
    
    for (x = 0; x < 8; x++)  //*to print all values of 8 blocks
    {
        printf("\n block num %d = %d", x + 1, *(new_blocks + x));
    }
    free(new_blocks);
    
    return 0;
}