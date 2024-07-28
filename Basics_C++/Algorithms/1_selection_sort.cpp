//*selection sort: simple sorting (in place algorithms), not need to extra space
//*Ascending order or descending order
//*if we have 5 elements in array{1, 4, 9, 3, 6} and this elements not sorted we will sort it by compare elements wit first element if they were less than first 4 < 1? false, 9 < 1? false, 3 < 1? false, 6 < 1? false then we will compare second element(4) with another elements, 9 < 4? false, 3 < 4? true so that we will swap 3 with 4{1, 3, 4, 9, 6} and so on
//*time complexity: O(n2)
//*space complexity: O(1)

#include <iostream>
#include <algorithm>

using namespace std;

void selection_sort_Ascending(int arr[], int size)
{
    int minIndex;

    for(int i = 0; i < size - 1; i++)   //size - 1 because the last element in array not need to sorte as it sorted by default, i = 0 as i = index of array
    {
        minIndex = i;

        for(int j = i + 1; j < size ; j++)  //* arr ={50, 20, 40, 10, 30} i = 50(index 0), j = 20(index 1 = i + 1), 20 < 50? true so will swap 20 with 50 arr{20, 50, 40, 10, 30}, 40 < 50? true will swap 40 with 50, 40 < 20? false then arr{20, 40, 50, 10, 30}, 10 < 50? true will swap, 10 < 40?true will swap, 10 < 20?true will swap then arr{10, 20, 40, 50, 30} and so on until arr = {10, 20, 30, 40, 50}
        {
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);  //swap 50 with any element is less than it
    }
}
void selection_sort_Descending(int arr[], int size)
{
    int minIndex;

    for(int i = 0; i < size - 1; i++)   //size - 1 because the last element in array not need to sorte as it sorted by default,i = index of array this loop will iterate only 5 times not 6 if we have 6 elements because the last elemnt will be sorted by defualt
    {
        minIndex = i;

        for(int j = i + 1; j < size ; j++)  //* arr ={50, 20, 40, 10, 30} i = 50(index 0), j = 20(index 1 = i + 1), 20 < 50? true so will swap 20 with 50 arr{20, 50, 40, 10, 30}, 40 < 50? true will swap 40 with 50, 40 < 20? false then arr{20, 40, 50, 10, 30}, 10 < 50? true will swap, 10 < 40?true will swap, 10 < 20?true will swap then arr{10, 20, 40, 50, 30} and so on until arr = {10, 20, 30, 40, 50}
        {
            if(arr[j] > arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);  //swap 50 with any element is less than it
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
    int array[] = {50, 20, 40, 30, 10};
    cout<<"Elements of array before sorting\n";
    print(array, 5);

    int n = sizeof(array) / sizeof(array[0]);  //size array = 5 * 4(bit of int data type) = 20 / 4(size of one (int) element) = 5 (size of array)
    selection_sort_Ascending(array, n);
    cout<<"Elements of array after sorting from small to big\n";
    print(array, n);

    selection_sort_Descending(array, n);
    cout<<"Elements of array after sorting from big to small\n";
    print(array, n);
}
