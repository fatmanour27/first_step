#include <iostream> 
#include <stack>  //built in class

using namespace std;

int main() 
{
    stack<int> stack;
    stack.push(5);
    stack.push(10);
    stack.push(15);

    while(!stack.empty())
    {
        cout<<stack.top()<<"\n";
        stack.pop();                  //*if we not call pop func the loop will be infinite loop
    }
}
