/*
* principles of Heap sort:
* presented as Heap complete binary tree 
* binary tree: each node has two childern or one or zero children
* complete tree: start from left side to right
*  Heap sort is similar to (selection sort)

* Heap : max heap and min heap
* max heap : complete binary tree the parent node should always be greater than or equal to the child nodes
* min heap : complete binary tree the parent node should always be lesser than or equal to the child nodes
!note: heap tree must be max heap or min heap not possible max and min heap in one tree
*/


/*
 *  arr[] = {15, 5, 10, 25, 30, 35, 20}        //note: heap array start with index(1) or (0) in this case we start the arr with index(1)
 tree of array:
 *  the root = 15 and its children = 5(left), 10(right)
 *  5 = parent to 25, 30
 *  10 = pqrent to 35, 20
 * 
 *  if we start arr with index(1)
 *  to get the two children(5, 10) of root (15):  left children(index) = 2 * (root/parent index) = 2 * 1 = 2, right children(index) = 2 * (root/parent index) + 1 = 2 * 1 + 1 = 3
 *  to get parent of child:  parent(3 index that contain 10) = 3 / 2 = 1.5 = 1 so that parent of(3) is (1 index that contain 15)
 * 
 *  if we start arr with index(0):
 *  to get the two children(5, 10) of root(15): left children(index) = 2 * (root/parent index) + 1 = 2 * 0 + 1 = 1, right children(index) = 2 * (root/parent index) + 2 = 2 * 0 + 2 = 2
 *  to get parent of child:  parent (2 index that contain 10) = 2 / 2 - 1 = 1 - 1 = 0 so that parent of(2) is (0 index that contain 15)
 * 
 *  to get leaves of tree(n / 2 + 1 to n): num of elements in tree/arr divided by 2 + 1 to last index,  arr[] = {15, 5, 10, 25, 30, 35, 20} num of elements = 7 / 2 + 1 = 3 + 1 = 4 leaves from (index 4)if we start arr with index(1) then leaves elements = 25, 30, 35, 20
 *  to get leaves of tree(n / 2 - 1 to n): num of elements in tree/arr divided by 2 - 1 to last index,  arr[] = {15, 5, 10, 25, 30, 35, 20} num of elements = 7 / 2 - 1 = 3 - 1 = 2 leaves from (index 2)if we start arr with index(0) then leaves elements = 25, 30, 35, 20

*/
/*
//*steps of Heap sort: 
* build max heap from array
* swap root(max element) with last element in array(last node in tree) then discard the last node from tree by decreasing the heap size and store this discarded node as an element into (arr)
* call maxHeapify in the new root because new root may not heapified
* repeat this process until only one node remain as this node will sort by defualt
*/
//*time complexity: O(n log n)
//*space complexity: O(1)

#include <iostream>
using namespace std;

void maxHeapify(int arr[], int size, int parent)   //arr start with index(0)
{
    int max = parent;
    int left_child = 2 * parent + 1;     //arr[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7}  parent = 4, left child = 2 * 0 + 1 = 1(1), right child = 2* 0 + 2 = 2(3)
    int right_child = 2 * parent + 2;

    while(left_child < size && arr[left_child] > arr[max]) //* left child (1) =index 1 < 10(size), left child(1) > max(4)? false.  left child(2) > max(1)?true, then move max to stand on left child(2) = index(3) = max  then if(max(3 index) != parent(0 index)) will swap parent(1 value) with max(2 value) arr[] = {4, 2, 3, 1, 16, 9, 10, 14, 8, 7} then repeat this proccess till maxHeapify be done
    {
        max = left_child;
    }
    while(right_child < size && arr[right_child] > arr[max])
    {
        max = right_child;
    }

    if(max != parent)      //that mean that max move from parent to left or right child as we find one of two children greater than parent  
    {                                    //arr[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7}
        swap(arr[parent], arr[max]);   //*swap (max element) with root(parent).  //* left child (1) =index 1 < 10(size), left child(1) > max(4)? false.  left child(2) = index(3) > max(1)?true, then move max from(1 index = 1 value) to stand on left child(2) = index(3) = max  then if(max(3 index) != parent(0 index)) will swap parent(1 value) with max(2 value) arr[] = {4, 2, 3, 1, 16, 9, 10, 14, 8, 7} then repeat this proccess till maxHeapify be done
        maxHeapify(arr, size, max);    //*call func again for new root as new root may not heapified
    }
}

void HeapSort(int arr[], int size)
{
    //build heap: start from last left parent(16) in array {4, 1, 3, 2, 16, 9, 10, 14, 8, 7}     
    for(int i = size / 2 -1; i >= 0; i--)    //*size / 2 - 1 when arr start with index(0) size / 2 when arr start with index(1), (i--) because we start with last parent of arr until get to root , arr[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7}, to get parent of child: parent of (1 index that contain 1) = 10 / 2 - 1 = 5 - 1 = 4(index) contain(16 value) so that parent of child with index(6) is (2 index that contain 10)
    {
        maxHeapify(arr, size, i);
    }
    //delete/discard elements from heap tree to arr
    for(int i = size - 1; i >= 0; i--)    //*arr[] = { 10, 8, 7, 9, 3, 2, 4, 1, 14, 16} arr after maxHeapify i = 10 - 1 = 9; i stand on index(9) then will swap index(0) with index(9) then discard (16) from tree and sort it as last element in arr, {1,..,..,..,..,..,..,..,.., 16 } after second max heapify arr = {14, 10, 8, 7, 9, 3, 2, 4, 1}, i = 9 - 1 = 8, i stand on index(8) then swap index(0) with index(8) then discard (14) from tree
    {                                     
                                 //arr[0] = root, arr[i] = last element in tree and each time decrement to get last before it until get first element in tree 
        swap(arr[0], arr[i]);    //*swap root(max first element in tree) with last element(i) as we start sort element from last index in array, swap 16(root) with 1(last element) as (1) became (root) and (16) became (last element) that will be discarded and store it into (arr) as a last element in arr then we need to maxHeapify the tree again
        maxHeapify(arr, i, 0);   //*(i) its index(0 root of tree), i became = 1 not 16
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
    int arr[] = {60, 30, 10, 20, 40, 50};
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    cout<<"Elements of Heap array before sorting\n";
    print(arr, size_arr);

    cout<<"Elements of Heap array after sorting\n";
    HeapSort(arr, size_arr);
    print(arr, size_arr);

    return 0;
}