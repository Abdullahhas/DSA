#include<iostream>
using namespace std;

struct str
{
    int top = -1;
    int stack[50];
};
str s;

void push(int size, int value)
{
    if(s.top == size-1)
    {
        cout<<"overflow";
        return;
    }
    s.top++;
    s.stack[s.top] = value;
}

int pop()
{
    if(s.top == -1)
    {
        cout<<"Underflow";
        return -1;
    }
    int temp = s.stack[s.top];
    s.top--;
    return temp;
}

void postfixEval(const char *a)
{
    int count = 0;
    for (int i = 0; a[i]!= '\0'; i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            push(50, a[i] - '0');
            count++;
        }
        else if((a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/' ) && count>=2 )
        {
            int operand2 = pop();
            int operand1 = pop();
            int res;
            switch(a[i])
            {
                case '+':
                    res = operand1 + operand2;
                    break;
                case '-':
                    res = operand1 - operand2;
                    break;
                case '*':
                    res = operand1 * operand2;
                    break;
                case '/':
                    if(operand2 != 0)
                        res = operand1 / operand2;
                    else
                    {
                        cout << "Error: Division by zero";
                        return;
                        
                    }
                    break;
                default:
                    break;
            }
            push(50, res);
        }
        
    }
  if(s.top == 0) {
        cout << "Result: " << s.stack[s.top] << endl;
    } else {
        cout << "Invalid expression." << endl;
    }

    
}

int main()
{
     postfixEval("562+*24/-"); 
    // postfixEval("12+-*");
     
     

    return 0;
}
