//* liner Queue : first in, first out FIFO
//* first person in queue is first person get out of queue

//if we have 5 elements from 1 to 5 in queue arranged from 0 index to 4 index
//* enqueue (Rear of queue) = add person in queue:
//* front = Rear = -1   --> queue is empty
//* front = Rear = 0    --> queue contain one element its index = 0
//* front = 0, Rear = 1 --> queue contain two elements, the first exist in front its index = 0, the sec exist in Rear its index = 1
//* dequeue (front of queue) = get out person from queue:
//* front = 0 is empty(removed) that mean we add 1 to front to get sec val its index = 1(0 + 1)
//* front = Rear = max size of queue(5) - 1 = 4

//* circular Queue : last index in queue linked with first index in queue
//* if front is empty and last index = max val - 1 then Rear = 0

/*
    Queue its size = 5

    0%5 = 0 reminder 0  first element of liner Queue its index = 0
    1%5 = 0 reminder 1  
    2%5 = 0 reminder 2
    3%5 = 0 reminder 3
    4%5 = 0 reminder 4   last element of liner Queue its index = 4 (Rear)
    5%5 = 1 reminder 0   first element of cicular Queue its index = 0 (Rear replace with front)
    6%5 = 1 reminder 1
    7%5 = 1 reminder 2   last element of circular Queue its index = 2

    the reminder represent the index of Queue
    rear = (rear + 1) % size 
    rear(4) = 4 + 1 % 5 = 5 % 5 = 1(first element of circular Queue) its index = 0
    rear(5) = 5 + 1 % 5 = 6 % 5 = 1(sec element of circular Queue) its index = 1
    rear(6) = 6 + 1 % 5 = 7 % 5 = 1(third and last element of circular Queue) its index = 2

    the Queue is full when (rear + 1) % size = front, when 6 + 1 % 5 = 1 reminder/index = 2 (front)
*/
