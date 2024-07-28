//*Advantages of Insertion Sort: Simple and easy to implement, Stable sorting algorithm, Efficient for small lists and nearly sorted lists, Space-efficient
//*Disadvantages of Insertion Sort: Inefficient for large lists, Not as efficient as other sorting algorithms (e.g., merge sort, quick sort) for most cases.
//*insertion sort: “in-place” sorting algorithm, meaning it doesn’t require any additional memory space beyond the original array
//*Insertion sort is used when number of elements is small. It can also be useful when the input array is almost sorted, and only a few elements are misplaced in a complete big array
/*

We have to start with second element of the array as first element in the array as first element is assumed to be sorted
Compare second element with the first element and check if the second element is smaller then swap them.
Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.
Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.

*/
//*time complexity: worest case = O(n^2)
//*space complexity: O(1)

#include <iostream>

using namespace std;

void insertion_sort_Ascending(int arr[], int size)  
{
    int key, j;                     //*arr = {23, 1, 10, 5, 2}, key = 1 = second element will compare with first, j = index(1) of i - 1 = index (0) = 23

    for(int i = 1; i < size; i++)  
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)  //first time while 23 >= 0 and 23 > 1 , second time while 23 >= 0 and 23 > 10
        {
            arr[j + 1] = arr[j];  //first time: put (23) arr[j] in place (1) arr[j + 1], arr = {1, 23(j), 10, 5, 2}, then make (j) stand on index(0) on element (1) arr{1(j), 23, 10, 5, 2}, second time: put (23) in place (10), arr{1, 10, 23(j), 5, 2} then make (j) stand on index(0) arr{1(j), 10, 23, 5, 2} (1) > (10)?false then will move (j) = j + 1 arr{1, 10(j), 23, 5, 2} and store its value inside key as j + 1 = key(10) and so on
            j = j - 1;       //j stand on inedx(0)    
        }
        arr[j + 1] = key;        
    }
}
void insertion_sort_Descending(int arr[], int size)  
{
    int key, j;

    for(int i = 1; i < size; i++)  
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] < key)  
        {
            arr[j + 1] = arr[j];   
            j = j - 1;  
        }
        arr[j + 1] = key;        
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
    int arr[] ={23, 1, 10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);  //5 * 4 = 20 / 4 = 5

    cout<<"Elements of array before sorting\n";
    print(arr, n);

    insertion_sort_Ascending(arr, n);
    cout<<"Elements of array after sorting from small to big\n";
    print(arr, n);

    insertion_sort_Descending(arr, n);
    cout<<"Elements of array after sorting from big to small\n";
    print(arr, n);

}

