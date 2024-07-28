//*binary search not deal with unsorted array, it only deal with sorted array
//*Binary search is faster than linear search, especially for large arrays
//*Binary search is well-suited for searching large datasets that are stored in external memory, such as on a hard drive or in the cloud.
/*
*Applications of Binary Search: 

*/
/*
* mid = low + high / 2   or   low + (high - low) / 2   or   (2 * low + high - low) / 2

*if element we search for less than mid we will search left side of mid  high = mid - 1(move high to left side of mid)
*if element we search for greater than mid we will search right side of mid  low = mid + 1
*if low = mid and high = mid - 1
*/
//*time complexity: O(log n)
//*space complexity: O(1)

#include <iostream>

using namespace std;

int Binary_search(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)    //if element we search for less than mid we will search left side of mid
        {
            high = mid - 1;    //move(high that was stand on last index) to left side of mid where elements smaller than mid exist
        }
        else                  //if element we search for greater than mid we will search right side of mid
        {
            low = mid + 1;    //move(low that was stand on first index) to right side of mid where elements greater than mid exist
        }
    }
    return -1;  //if element not be found
}
int Binary_search_recursive(int arr[], int low, int high, int key)
{
    if (low > high)
    {
        return -1; // Base case: element not found
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] > key)
    {
        return Binary_search_recursive(arr, low, mid - 1, key);
    }
    else
    {
        return Binary_search_recursive(arr, mid + 1, high, key);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout<<"Enter the element you search for: ";
    cin>>key;

    int result = Binary_search(arr, 0, size - 1, key);
    int low, high, mid;
    if(result == -1)
    {
        cout<<"The element not found\n";
    }
    else
    {
        cout<<"The element found = "<<arr[result]<<" and its index = "<<result<<"\n";
    }
}