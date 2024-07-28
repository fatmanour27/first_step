#include <iostream>

using namespace std;

#define MAX_SIZE 15 // Maximum size of stack

class Stack {
private:
    int top;             // Index of top element
    int arr[MAX_SIZE]; // Array to store elements

public:
    Stack() {
        top = -1; // Initialize top index to -1 (empty stack)
    }

    bool push(int x) {
        if (isFull()) {
            cout << "Stack overflow" << endl; // Display message if stack is full
            return false;                     // Return false to indicate failure in pushing element
        }
        // Increment top index and add element to array
        arr[++top] = x; 
        return true; // Return true to indicate successful element addition
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl; // Display message if stack is empty
            return 0;                           // Return 0 to indicate failure in popping element
        }
        // Return top element and decrement top index
        return arr[top--]; 
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl; // Display message if stack is empty
            return 0;                        // Return 0 to indicate failure in peeking element
        }
        // Return top element without modifying top index
        return arr[top]; 
    }

    bool isEmpty() {
	// Stack is empty if top index is -1
        return (top < 0); 
    }

    bool isFull() {
	// Stack is full if top index is equal to MAX_SIZE - 1
        return (top >= MAX_SIZE - 1); 
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl; // Display message if stack is empty
            return;
        }
        cout << "\nStack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " "; // Display elements of the stack
        cout << endl;
    }

    void sort() {
        Stack tmp; // Initialize a temporary stack
        while (!isEmpty()) {
            int x = pop(); // Pop an element from the original stack
            while (!tmp.isEmpty() && tmp.peek() > x) 
            {
                // Pop elements from the temporary stack and push them back onto the original stack        	
                push(tmp.pop()); 
            }
            // Push the popped element onto the temporary stack    
            tmp.push(x); 
        }
        // Copy elements from the temporary stack back to the original stack
        while (!tmp.isEmpty())
        {
            push(tmp.pop());
        }
    }  
};

int main() {
    Stack stk; // Initialize the stack stk
    cout << "Input some elements onto the stack:\n";
    stk.push(7);
    stk.push(4);
    stk.push(2);
    stk.push(5);
    stk.push(1);
    stk.push(0);
    stk.display(); // Display the elements of the stack
    cout << "\nSort the elements in the stack:\n";
    stk.sort();
    cout << "Display the sorted elements of the stack:";
    stk.display(); // Display the sorted elements of the stack
    cout << "\nRemove two elements:";
    stk.pop();
    stk.pop();
    stk.display(); // Display elements of the stack after popping
    cout << "\nInput two more elements";
    stk.push(-1);
    stk.push(10);
    stk.display(); // Display elements of the stack after pushing
    cout << "\nSort the elements in the stack:\n";
    stk.sort();
    cout << "Display the sorted elements of the stack:";
    stk.display(); // Display the sorted elements of the stack after sorting
    cout << endl;
    return 0;
}
