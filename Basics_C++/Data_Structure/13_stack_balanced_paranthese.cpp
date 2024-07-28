#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool Identical_brackets(char open_bracket, char close_bracket) //*func check if brackets are identical open'(' = ')'close or '{' = '}' or '[' = ']'
{
    if(open_bracket == '(' && close_bracket == ')')
    {
        return true;
    }
    else if(open_bracket == '{' && close_bracket == '}')
    {
        return true;
    }
    else if(open_bracket == '[' && close_bracket == ']')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Balanced_brackets(string bracket)   //*func check number of brackets
{
    stack<char> b;

    for(int i = 0; i < bracket.length(); i++)   //*as long as i less than length string(bracket) then print all elements of string
    {
        if(bracket[i] == '(' || bracket[i] == '{' || bracket[i] == '[') //({} )
        {
            b.push(bracket[i]);
        }
        else if(bracket[i] == ')' || bracket[i] == '}' || bracket[i] == ']')
        {
            if(b.empty())   //*check if stack is empty
            {
                return false;                            
            }
            else if(! Identical_brackets(b.top(), bracket[i]))  //*check if open/left bracket that is at (top) of stack are not identical with its close brackets, as we pass (open/top)brackets to(Identical func) and we pass (content/expresion = bracket[i]) existing after open brackets to (Identical func) to check (close brackets) and compare two brackets
            {
                return false;
            }
            else
            {
                b.pop();      //*if stack contain elements(brackets) and its brackets are identical, then delete left brackets we pushed them
            }
        }
    }
    return b.empty() ? true:false;         //*after we delete/pop the elements of stack check if is empty or not, if empty return true else return false
}

int main()
{
    string expression;

    cout<<"Enter the expression \n";
    cin>>expression;

    if(Balanced_brackets(expression))
    {
        cout<<"Balnced brcakets\n";
    }
    else
    {
        cout<<"Not balanced brackets\n";
    }

    return 0;
}
