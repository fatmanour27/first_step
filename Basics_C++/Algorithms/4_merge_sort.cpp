
//*Advantages of Merge Sort: Stability as Merge sort is a stable sorting algorithm, which means it maintains the relative order of equal elements in the input array
//*Simple to implement: The divide-and-conquer approach is straightforward, Sorting large datasets

//*Disadvantage of Merge Sort: Merge sort requires additional memory to store the merged sub-arrays during the sorting process. 
//*Merge sort is not an in-place sorting algorithm, which means it requires additional memory to store the sorted data

/*

divide-and-conquer approach: It works by recursively dividing the input array into smaller subarrays and sorting those subarrays then merging them back together to obtain the sorted array
we can say that the process of merge sort is to divide the array into two halves, sort each half, and then merge the sorted halves back together. This process is repeated until the entire array is sorted


Divide: Divide the list or array recursively into two halves until it can no more be divided.
Conquer: Each subarray is sorted individually using the merge sort algorithm.
Merge: The sorted subarrays are merged back together in sorted order. The process continues until all elements from both subarrays have been merged.

*/

//*time complexity: O(n log n) which means it performs well even on large datasets.
//*Space Complexity: O(n), Additional space is required for the temporary array used during merging.
//*Space Complexity if we use merge with linked list instead of using merge with array: O(1) because we not need to make new array and waste space as we use linked list

#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right)  //*to get middle of array its size 7, mid = left(0 index) + (right(6 index) - left(0)) / 2 = 0 + (6 - 0) / 2 = 6 / 2 = 3 then mid stand on index(4)not(3) because we put the over element on left side as left side = 4 elements and right side = 3 elements
{
    int left_ref_subarray;   //ref short for reference
    int right_ref_subarray;
    int merged_ref_array;

    int left_size = mid - left + 1;   //*index of mid = 3 - 0 + 1 = 4 because we have 7 elements of array and over element will be at left side so that left elements will greater than right and mid will stand on index(4) not(3)
    int right_size = right - mid;     //*index 6 - index 3 = 3 index  right side will contain 3 elements

    int *left_subarr = new int[left_size];
    int *right_subarr = new int[right_size];

    for(left_ref_subarray = 0; left_ref_subarray < left_size; left_ref_subarray++)
    {
        left_subarr[left_ref_subarray] = arr[left + left_ref_subarray];         //*copy the elements that are at left side into left sub array
    }
    for(right_ref_subarray = 0; right_ref_subarray < right_size; right_ref_subarray++)
    {
        right_subarr[right_ref_subarray] = arr[mid + 1 + right_ref_subarray];  //mid + 1 = right  //*copy the elements that are at right side into right sub array
    }
    left_ref_subarray = 0;
    right_ref_subarray = 0;
    merged_ref_array = left;  //merged_ref_array = left not = 0 because it represents the starting index in the original array (arr) where the merged elements will be placed
    
    
    // i = left_ref_subarr, j = right_ref_subarr, k =  mereged_ref_array  4 9 12  5 8 14 
    
    //                                       i
    //  left_subarray:        4,    9,   12           4 < 5? true, then copy 4 into arr and increment i, k. 9 < 5? false. 9 < 8? false. 9 < 14? true, then copy 9 into arr and increment i, k. 12 < 14? true, then copy 12 into arr and increment i, k.
    //
    //                                   j
    //  right_subarray:        5,   8,   14           9 > 5? true, then copy 5 into arr and increment j, k. 9 > 8? true, then copy 8 into arr and increment j, k
    //
    //                                               k
    //             arr:         4    5   8   9  12  14

    while(left_ref_subarray < left_size && right_ref_subarray < right_size)   //*while loop To pass through all elements in left and right side in array
    {
        if(left_subarr[left_ref_subarray] <= right_subarr[right_ref_subarray])  
        {
            arr[merged_ref_array] = left_subarr[left_ref_subarray];
            left_ref_subarray++;
        }
        else
        {
            arr[merged_ref_array] = right_subarr[right_ref_subarray];
            right_ref_subarray++;
        }
        merged_ref_array++;
    }
    // i = left_ref_subarr, j = right_ref_subarr, k =  mereged_ref_array
    
    //                                       i
    //  left_subarray:        4,    9,   12           
    //
    //                                   j
    //  right_subarray:        5,   8,   14  16     (16 is a surplus element in right array . How we can pass through it? by using while loop to increment j and k to pass through it)
    //
    //                                              k
    //             arr:         4  5  8  9  12  14  16  //! if 16 was 11 and 11 < 14, 12 the elements not be sorted what we to do in this case?. we use merege algorithm to sort specific portion in array as this portion not be sorted but remain elements in array are sorted
    while(left_ref_subarray < left_size)       //*while loop in case If there is a surplus of elements in left subarray as we must pass through these surplus elements
    {
        arr[merged_ref_array] = left_subarr[left_ref_subarray];
        left_ref_subarray++;
        merged_ref_array++;
    }
    while(right_ref_subarray < right_size)   //*while loop in case If there is a surplus of elements in right subarray
    {
        arr[merged_ref_array] = right_subarr[right_ref_subarray];
        right_ref_subarray++;
        merged_ref_array++;
    }
}
void merge_sort(int arr[], int left, int right)   //!I undersand %80
{
    if(left < right)   //* If left >= right, it means the subarray has only one element or is empty, arr{4, 5, 8, 9, 12,(i)(j) 14} i = j if we have one element i > j if array is empty 
    {
        //Divide
        int mid = left + (right - left) / 2;   //*splits the array into two roughly equal halves

        //Conquer: The function calls itself recursively twice:
        merge_sort(arr, left, mid);         //*arr = {5, 9, 4, 8, 14, 12}, call merge_sort(arr, 0, 5) where left = 0 and right = 5, 0 < 5? true then mid = 0 + 5 / 2 = 2 then first recursive call merge_sort(arr, 0, 2) to sort left side of array {5, 9, 4}
        merge_sort(arr, mid + 1, right);   //*left = 0 right = 2, 0 < 2? true then mid = 0 + 2 / 2 = 1 then recursive call merge_sort(arr , 0(left), 1(mid)) to sort left half of {5, 9} and merge_sort(arr, 1(mid), 2(right)) to sort right half of{5, 9}

        merge(arr, left, mid, right);   //*After sorting the left half subarray {5, 9}, the merge function is called to merge these sorted halves together{5, 9} into a single sorted array. then the right half {4} undergoes the same process of splitting, sorting, and merging
    }
}
void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int arr[] ={5, 9, 14, 4, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Elements of array before sorting\n";
    print(arr, size);

    merge_sort(arr, 0, size - 1);
    cout<<"Elements of array after sorting\n";
    print(arr, size);

    return 0;

}