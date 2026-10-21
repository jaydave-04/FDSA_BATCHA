#include <iostream>
#include <cstring>
using namespace std;

char stack[100];
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    char x = stack[top];
    top--;
    return x;
}

int priority(char x)
{
    if (x == '^')
        return 3;
    if (x == '*' || x == '/')
        return 2;
    if (x == '+' || x == '-')
        return 1;
    return 0;
}

int main()
{
    char exp[100];
    cout << "Enter infix expression: ";
    cin >> exp;

    for (int i = 0; i < strlen(exp); i++)
    {
        char ch = exp[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            cout << ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                cout << pop();
            }
            if (top != -1)
                pop();
        }
        else
        {
            while (top != -1 && priority(stack[top]) >= priority(ch))
            {
                cout << pop();
            }
            push(ch);
        }
    }

    while (top != -1)
    {
        cout << pop();
    }

    cout << endl;

    return 0;
}
