//* insertion sort : compare
/*
     ex : 4 3 1 6 2 5
     compare if 4 is less or greater than 3, 4 > 3 then put 3 at left side of 4
     result --> 3 4 1 6 2 5
     compare if 4 is less or greater than 1, 4 > 1 then put 1 at left side of 4 and compare 1 with 3 , 3 > 1 then put 1 at left side of 3
     result --> 1 3 4 6 2 5
     compare if 4 is less or greater than 6, 4 < 6 then 4 remain as it is and compare if 6 is less or greater than 2, 6 > 2 then put 2 at left side of 6 and left side of 4 and 3 because 2 < 4, 3 but 2 > 1
     result --> 1 2 3 4 6 5
     compare if 6 is less or greater than 5, 6 > 5 then put 5 at left side of 6 and compare 5 with 4 , 5 > 4 then 5 remain as it is
     result --> 1 2 3 4 5 6 
*/ 

#include <stdio.h>

void InsertionSort(int arr[], int length);

int main()
{
    int arr[] = {8, 4, 9, 5, 7, 6, 3, 2};

    InsertionSort(arr, 8);

    for(int i = 0; i < 8; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
void InsertionSort(int arr[], int length)
{
    for(int i = 1; i < length; i++)        //* i = num of indexs i = 1 --> i = second index = 1 , the first index = 0 its value sorted by default so that we don't need to sort it and will move to second index 
    {
        int value_will_inserted = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > value_will_inserted)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value_will_inserted;
    }
}
