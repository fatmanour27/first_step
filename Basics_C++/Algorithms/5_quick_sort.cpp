//*quick sort not need extra space unlike merge sort that need extra space(array)
//*Advantages of Quick Sort: It is a divide-and-conquer algorithm that makes it easier to solve problems, It is efficient on large data sets, it only requires a small amount of memory to function
//*Disadvantages of Quick Sort: It is not a good choice for small data sets, It is not a stable sort, meaning that if two elements have the same key, their relative order will not be preserved in the sorted output in case of quick sort, because here we are swapping elements according to the pivot’s position (without considering their original positions).
/*

put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot

*/

//*time complexity: O(n^2)
//*space comlexity: O(1) as it not requeried extra space

#include <iostream>
#include <utility>

using namespace std;

int partition(int arr[], int low, int high)
{
    int pivote = arr[high];
    int i = low;

    //
    //  j                                    j                           j                        j                       j                         j                      j                       j
    //  6  3  7  5  1  2  [4]            3 6 7 5 1 2 [4]          3 6 7 5 1 2 [4]         3 6 7 5 1 2 [4]         3 1 7 5 6 2 [4]         3 1 7 5 6 2 [4]        3 1 2 5 6 7 [4]      3 1 2 5 6 7 [4] 
    //  i                                  i                        i                       i                         i                       i                      i                      i
    //   
    //  j = i = low(first element), j(6) < 4(high) ? false, then increment j. j(3) < 4(high) ? true, then swap i with j and increment i. j(7) < 4(pivote) ? false, then increment j. j(5) < 4 ? false, then increment j. j(1) < 4? true, then swap i with j and increment i. so on
    //  when j get to pivote/high(4) out the for loop and swap i(5) with pivote/high(4)  then return i(pivote)  then implement (quicksort func = partitionate poivote to low elements at its left side(3 1 2) and high elements(6 7 5) at its right side then sort low elements and high elements)
    //
    //               j                        j
    //  3 1 2 5 6 7 [4]         3 1 2 [4] 6 7 5
    //        i                        i

    for(int j = i; j < high; j++)
    {
        if(arr[j] <= pivote)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;


}

void quicksort(int arr[], int low, int high)   //low = start, high = end
{
    if(low < high)
    {
        int pivote = partition(arr, low, high);     //pivote presented as a result to partitionate two its sides(left, right)
        quicksort(arr, low, pivote - 1);            //left portion of pivote contain elements lower than pivote(elements exist at left side of pivote)
        quicksort(arr, pivote + 1, high);           //right portion of pivote contain elements higher than pivote(elements exist at right side of pivote)
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
    int arr[] ={6, 3, 7, 5, 1, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Elements of array before sorting\n";
    print(arr, size);

    quicksort(arr, 0, size - 1);      //quicksort from first element with index (0) to (last element with index (5) that present the size of array - 1)
    cout<<"Elements of array after sorting\n";
    print(arr, size);

    return 0;

}