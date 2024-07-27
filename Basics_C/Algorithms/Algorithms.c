/* //*(1)
Algorithms:
- design
- written in any language (domain knowlege)
- not depend on hardware or operating system
- it's analyzed
- time, byte
Program:
- implemented
- written in programing language
- depend on hardware and operating system
- it's tested
- time, space, function 
*/
/*
Algorithms:
- zero or more input, but at least one output
- finiteness->finite amount of time
- definiteness->unambiguous
- effectiveness->there is target to write the algorithms
/*********************************************************************************************************************************************************************************************************
 * Analysis of algorithms : 
 * - time   - space  - network  - power  - cpu register
 * code Analysis :
 /*
  Algorithms swap (a,b)
  {
    temp = a;     1 uuit
     a = b;       1 unit
     b = temp;    1 unit
  }                  
  time of func = sum of units of each line in code.  f(n) = 1 + 1 + 1 = 3
  space = a, b, temp = 3. s(n) = 3
 */
/*********************************************************************************************************************************************************************************************************
*/
/* //*(2)
time complexity analysis of algorithms
frequency count method: by count num of operators of func (operators: arthmetic, assignment, comparison, return statement). each operator = 1 unit of time complexity
*/
/*********************************************************************************************************************************************************************************************************/
   //*(3)
//* Binary search: the elements of array must be sorted/arranged Ascending or descending
//* linear search way less effectivness than Binary search way because it needs more steps
#include <stdio.h>

//* if we have array its elements = 10 from 0 to 9
//* func will return num of index of array to get value of gussing number
int BinarySearch(int arr[], int size, int value)
{
    int low = 0;            //* first index/place of array
    int high = size - 1;    //* last index  = 10 - 1 = 9

    while(low <= high)     //* loop for get to all elements in array
    {
        int mid = (low + high) / 2;   //* binary way: midlle index of array by adding low index to high index dividd by 2 and compare if 

        if(arr[mid] == value)         //* if middle index contain the researched value return this value via return midlle index 
        {
            return mid;
        }
        else if (arr[mid] < value)   //* if middle index not contain the researched value, but the middle value < researched value add midlle index by 1 to indicate to the next index after middle index
        {
            low = mid + 1;
        }
        else                        //* if middle index not contain the researched value, but the middle value > researched value subtract midlle index by 1 to indicate to the previous index before middle index
        {
            high = mid - 1;
        }
        
    }
    return -1;
}
/************************************************************************************************************************************************************************************************************/
//* (4)
//* selection sort
//* selction sort func
void SelectionSort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int minimum_index = FindMinimum(arr, size, i);

        Swap(arr[i], arr[minimum_index]);
    }
}
//* func find minimum value
int FindMin(int arr[], int size, int startsearch)
{
    int min = arr[startsearch];
    int min_index = startsearch;

    for(int i = startsearch; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}
//* func swap two elements in the same array to provide space in RAM
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
//* Heap sort : creation binary tree to arrange the elements of array in according to max heap after arrange elements--> delete max/top element of tree and put last element at top of tree instead of deleted element then reverse space to deleted element for store it in this space