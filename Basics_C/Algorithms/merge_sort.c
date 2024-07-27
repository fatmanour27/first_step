//* merge sort(divide and conquer) : A large problem(sort elements) that is difficult to solve is divided into small sub-problems to make it easier to solve, and then we merge those sub-problems again after solving them.
//  (1) 2-way merge sort
/* 
     Array consist of 8 elements not sorted = {9, 3, 7, 5, 6, 4, 8, 2}

     1-first pass for sorting those elements --> compare first element with second(9,3) "3 < 9" then put it before 9(3,9), third with fourth, fifith with sixth and so on
     result --> (3,9)(5,7)(4,6)(2,8)
     2-second pass ~~~~~~~~~~~~~~~~~~~~~~~~~ --> compare (3,9) with (5,7) according to least element to largest elements and compare (4,6) with (2,8)
     result --> (3,5,7,9)(2,4,6,8)
     3-third pass ~~~~~~~~~~~~~~~~~~~~~~~~~~ --> compare(3,5,7,9) with (2,4,6,8) according to least to largest elements
     result --> (2,3,4,5,6,7,8,9)

     Array after merge/sort its elements = {2, 3, 4, 5, 6, 7, 8, 9}
*/
//* pros of merge sort --> (stable - extended - linked lists - large size list)
//* cons of merge sort --> (takes up a lot of space of memory - deal with large problems effectivily, but small problems less effectivness otherwise insertion sort - recursive)
#include <stdio.h>

void MergeSort(int arr[], int length);
void MergeSort_recursion(int arr[], int left_index, int right_index);           //* func partition array into smaller portions
void MergeSort_arrays(int arr[], int left_index, int middle, int right_index);  //* func merge two arrays after portions

int main()
{
    int array[] = {9, 4, 8, 1, 7, 0, 3, 2, 5, 6};
    int length = 10;

    MergeSort(array, length);

    for(int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
        printf("\n");
    }
    return 0;
}
void MergeSort(int arr[], int length)
{
    MergeSort_recursion(arr, 0, length - 1);      //* 0 is first index(low) of array, length - 1 to acess last index(high) of array
}

void MergeSort_recursion(int arr[], int left_index, int right_index)
{
    if (left_index < right_index)
    {
    int middle_array = left_index + (right_index - left_index) / 2;   //* acess midlle of array, (right index - left index = right index)

    MergeSort_recursion(arr, left_index, middle_array);        //* access left side of array until middle of array
    MergeSort_recursion(arr, middle_array + 1, right_index);   //* access right side of array by adding 1 to midlle of array to move right side
    MergeSort_arrays(arr, left_index, middle_array, right_index);
    
    } 
}

void MergeSort_arrays(int arr[], int left_index, int middle, int right_index)
{
    int length_left_side = middle - left_index + 1;
    int length_right_side = right_index - middle;

    int temp_left[length_left_side];
    int temp_right[length_right_side];

    int i, j, k;

    for(int i = 0; i < length_left_side; i++)
    {
        temp_left[i] = arr[left_index + i];
    }
    for(int i = 0; i < length_right_side; i++)
    {
        temp_right[i] = arr[middle + 1 + i];
    }
    for(i = 0, j = 0, k = left_index; k <= right_index; k++)
    {
        if((i < length_left_side) && (j >= length_right_side || temp_left[i] <= temp_right[j]))
        {
            arr[k] = temp_left[i];
            i++;
        }
        else
        {
            arr[k] = temp_right[j];
            j++;
        }
    }
}
