//*Linear Search is defined as a (sequential search) algorithm each element is visited one by one in a sequential fashion to find the desired element
//*and deal with sorted and unsorted array
//*When we have an unsorted array linear search is most commonly used to find any element in the collection
//*Linear Search is preferred over binary search when we have small data sets with
//*Linear Search commonly used in linked list implementation
//*Linear Search used When you are searching for a dataset stored in contiguous memory.
/*
*Advantages of Linear Search: Does not require any additional memory, It is a well-suited algorithm for small datasets.

*Disadvantages of Linear Search: Not suitable for large arrays because we take time complexity O(n) which in turn makes it slow for large datasets.

*note: While linear search can still be used on sorted arrays or lists, it’s not the most efficient option. Binary search, for example, is more suitable for sorted data as it has a time complexity of O(log n).

*real-world applications of linear search: searching for a name in an unsorted list of contacts, or finding an item in a grocery list

*/
//*time complextity: O(n)
//*space complexity: O(1)


#include <iostream>

using namespace std;

int linear_search(int arr[], int size, int key)   //key is element we search for 
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i;     //i index/position of (key)
        }
    }
    return -1;     //if we not found the element that we search for
}
int main()
{
    int arr[] = {5, 60, 9, 27, 80, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout<<"Enter the element you search for: ";
    cin>>key;

    int result = linear_search(arr, size, key);

    if(result == -1)
    {
        cout<<"the element not found\n";
    }
    else
    {
        cout<<"the element is found = "<<arr[result]<<" and its index = "<<result<<"\n";
    }

    return 0;
}