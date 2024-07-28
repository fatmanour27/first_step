#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Identical_brackets(char open_bracket, char close_bracket)     //!my code after reusability
{
    switch (open_bracket) {
        case '(':
            return close_bracket == ')';
        case '{':
            return close_bracket == '}';
        case '[':
            return close_bracket == ']';
        default:
        return false;
    }
}

int main() {
    
    string expression = "{5 + 5}";

    char left_bracket[3] = {'(', '{', '['};
    char right_bracket[3] = {')', '}', ']'};

    stack<char> brk;

    for(int i = 0; i < expression.length(); i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(expression[i] == left_bracket[j])
            {
                brk.push(expression[i]);           //we push open brackets onto stack
            }
            else if(expression[i] == right_bracket[j])
            {
                if(brk.empty() || !Identical_brackets(brk.top(), expression[i]))   //brk.top() = open brackets, expression[i] = string that through it we will get close brackets
                {
                    cout<<"Fail pop, non balanced expression "<<expression<<"\n";
                    return 0;
                }
                brk.pop();      //we pop (open brackets) from top when it is identical with close brackets
            }
        }
    }

    if(brk.empty()) {
        cout<<"Successful pop, balanced expression "<<expression<<"\n";
    }
    else
    {
        cout<<"Fail pop, non balanced expression "<<expression<<"\n";
    }
    return 0;
}