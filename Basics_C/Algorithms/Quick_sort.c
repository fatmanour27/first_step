//* (5)
//* quick sort : choose pivot num from first or last or middle index of array, partitioning process: arrange nums which are less than pivot at left side and nums which are greater than pivot at right side of pivote
//* characteristics of quick sort : divide and conquer, recursive, time complexity
//* best case for quick sort : select the middle element as pivot
#include <stdio.h>

void Swap(int *x, int *y);
void QuickSort(int array[],int length);
void QuickSort_recursion(int array[], int low, int high);
int Partition(int array[], int low, int high);

int main()
{
    int arr[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45};  //* quick sort = {3, 8, 9, 10, 11, 12, 15, 23, 44, 45, 45, 45, 56}
    int length = 13;  //* 13 elements of array

    QuickSort(arr, length);

    for(int i = 0; i < length; i++)   //* for loop to print the elements of array
    {
        printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
//* func to swap two elements of array
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void QuickSort(int array[],int length)
{
    QuickSort_recursion(array, 0, length - 1);   //* 0 is first index of array(low), length - 1 to acess last index of array(high)
}

void QuickSort_recursion(int array[], int low, int high)
{
    if(low < high)
    {
        int pivot_index = Partition(array, low, high);      //* to access pivot indexs we must partition the array between low elements at left side of pivot and high elements at right side of pivot via (partition func)

        QuickSort_recursion(array, low, pivot_index - 1);    //* partition array to left side of pivot(low elements/num) by subtract 1 from pivot index to move left side of pivot
        QuickSort_recursion(array, pivot_index + 1, high);   //* partition array to right side of pivot(high elements/num) by adding 1 to pivot index to move right side of pivot
    }
}

int Partition(int array[], int low, int high)
{
    int pivot_value = array[high];   //* location of pivot value of array at high/last index
    int i = low;

    for(int j = low; j < high; j++)    //* the int j that is at low/first index in array will be increased until access pivot index that is high/last index of array
    {
        if(array[j] <= pivot_value)    //* (low) 6 (i and j) 3 7 5 1 2 4(pivot), is (j = 6) <= 4 'false', is (j = 3) <= 4 'true' then sawp j with i swap 3 with 6 --> 3 6(i) 7(j) 5(j) 1(j) 2 3 4, is (j = 7) <= 4 'false', is (j = 5) <= 4 'false', is (j = 1) <= 4 'true' then swap 1 with 6 --> 3 1 7 5 6 2 3 4 and so on
        {
            Swap(&array[i], &array[j]);  //* the int i that is at low index will be swapped with int j that is at low index too only in sate j is <= pivot value
            i++;
        }
    }
    
    Swap(&array[i], &array[high]);    //* swap value of i with value of last/pivot index   3 1 2 5(i) 6 7 4(pivot) --> 3 1 2 4 6 7 5 

    return i;  
}