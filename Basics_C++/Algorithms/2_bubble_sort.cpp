//*advantages of Bubble sort: it stops iterating through the list once it detects that no swaps are needed, reducing the time complexity, Minimal Memory Usage: as it operates by swapping elements in place
//*Bubble sort: we compare two elements with other in each time in for loop
#include <iostream>
#include <algorithm> //header of swap func

using namespace std;

void bubble_sort_Ascending(int arr[], int size)    //*time complexity = O(n^2). space complexity = O(1)
{
    bool flag = true;
    for(int i = 0; i < size - 1; i++)    //if we have arr= {100, 60, 20, 50, 30}, this for loop will iterate only 4 times not 5 because the last element will be sorted by default
    {
        
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j + 1])       //at first time: compare 100[j] with 60[j + 1], 100 > 60?true so will swap 100 with 60 arr{60, 100, 20, 50, 30}, 100 > 20?true will swap arr{60, 20, 100, 50, 30}, 100 > 50?true will swap arr{60, 20, 50, 100, 30}, 100 > 30?true will swap ar{60, 20, 50, 30, 100}. at sec time: 60 > 20? ture will swap arr{20, 60, 50, 30, 100} and so on
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag == true)   //validation to check if elements of array are sorted as not need to sort them 
        {
            cout<<"The Elements of array already sorted not need to make sort\n";
            break;
        }
    }
}
void bubble_sort_Descending(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)    
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[j] < arr[j + 1])       
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    int array[] = {100, 60, 20, 50, 30, 90};
    cout<<"Elements of array before sorting\n";
    print(array, 5);

    int n = sizeof(array) / sizeof(array[0]);  //size array = 5 * 4(bit of int data type) = 20 / 4(size of one (int) element) = 5 (size of array)
    bubble_sort_Ascending(array, n);
    cout<<"Elements of array after sorting from small to big\n";
    print(array, n);

    bubble_sort_Descending(array, n);
    cout<<"Elements of array after sorting from big to small\n";
    print(array, n);
}
