#include <iostream>
using namespace std;
#include <cmath>
struct practice_1
{
    int stack[20]; // int stack[10]; incase of others
    //char stack[20];// incase of infix to postfix               
    int top = -1;
    char postfix[20];
};
practice_1 s;
void push(int value)
{
    if (s.top == 10 - 1)
    {
        cout << "Overflow";
        return;
    }
    else
    {
        s.top++;
        s.stack[s.top] = value;
    }
}

int pop()
{
    if (s.top == -1)
    {
        cout << "Underflow";
        return -1;
    }
    else
    {
        int tem = s.stack[s.top];
        s.top--;

        return tem;
    }
}

// char pop1()
// {
//     if (s.top == -1)
//     {
//         cout << "Underflow";
//         return 0;
//     }
//     else
//     {
//         int tem = s.stack[s.top];
//         s.top--;

//         return tem;
//     }
// }

// // decimal to binary
// void decTobin(int no)
// {
//     int rem;
//     while (no > 0)
//     {
//         rem = no % 2;
//         push(rem);
//         no = no / 2;
//     }
//     while (s.top != -1)
//     {
//         cout << s.stack[s.top] << endl;
//         pop();
//     }
// }

// // inary to decimal
// void binTodeci(int no)
// {
//     int rem;
//     int count = 0;
//     int sum = 0;
//     while (no > 0)
//     {
//         rem = no % 10;
//         push(rem);
//         count++;
//         no = no / 10;
//     }
//     for (int i = count - 1; i >= 0; i--)
//     {
//         sum += pop() * pow(2, i);
//     }
//     cout << sum;
// }

// // balanced equation
// void balanced(const char *exp)
// {
//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(' || exp[i] == '{' || exp[i] == '{')
//         {
//             push(exp[i]);
//         }

//         else if ((exp[i] == ')' || exp[i] == '}' || exp[i] == '}') && s.top == -1)
//         {
//             cout << "Stack is empty";
//             return;
//         }
//         else if ((exp[i] == ')' || exp[i] == '}' || exp[i] == '}') && s.top != -1)
//         {
//             int tem = pop1();
//             if ((tem == '(' && exp[i] == ')') || (tem == '{' && exp[i] == '}') || (tem == '[' && exp[i] == ']'))
//                 ;
//             else
//             {
//                 return;
//             }
//         }
//     }

//     if (s.top == -1)
//     {
//         cout << "balanced";
//     }
//     else
//     {
//         cout << "Not balanced";
//     }
// }

// // infix to postfix
// int precedence(char c)
// {
//     if (c == '*' || c == '/' || c == '%')
//     {
//         return 2;
//     }
//     if (c == '+' || c == '-')
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// void infixtopost(const char *a)
// {
//     int y = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if (a[i] >= 'a' && a[i] <= 'z')
//         {
//             s.postfix[y] = a[i];
//             y++;
//         }
//         else if (a[i] == '(')
//         {
//             push(a[i]);
//         }
//         else if (a[i] == ')')
//         {
//             while (s.top != -1 && s.stack[s.top] != '(')
//             {
//                 char c = pop1();
//                 s.postfix[y] = c;
//                 y++;
//             }
//             pop1();
//         }
//         else
//         {
//             while (s.top != -1 && (precedence(s.stack[s.top]) >= precedence(a[i])))
//             {
//                 s.postfix[y] = pop1();
//                 y++;
//             }
//             push(a[i]);
//         }
//     }
//     while (s.top != -1)
//     {
//         s.postfix[y] = pop1();
//         y++;
//     }

//     for (int i = 0; i < y; i++)
//     {
//         cout << s.postfix[i];
//     }
// }

void postfixevat(const char *a)
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            push(a[i] - '0');
            count++;
        }
        else if ((a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/' || a[i] == '%') && count >= 2)
        {
            int o2 = pop();
            int o1 = pop();
            int res;
            switch (a[i])
            {
            case '+':
                res = o1 + o2;
                break;
            case '-':
                res = o1 - o2;
                break;
            case '*':
                res = o1 * o2;
                break;
            case '/':
                if (o2 != 0)
                {
                    res = o1 / o2;
                }
                break;

            default:
                break;
            }
            push(res);
        }
    }
    if (s.top == 0)
    {
        cout << "Result is:" << s.stack[s.top];
    }
    else
    {
        cout << "Invalid exp";
    }
}
int main()
{
    // decTobin(22);
    // binTodeci(10110);
    // cout<<endl;
    // balanced("({[]})");
    // cout<<endl;
    // infixtopost("a-(b+c/d-(e+f*g)-h)");
    postfixevat("562+*24/-");
}




// void sort()
// {
//     int tem;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = i+1; j<4; j++)
//         {
//            if(q.queue[j] < q.queue[i] )
//            {
//             tem = q.queue[j];
//             q.queue[j] = q.queue[i];
//             q.queue[i] = tem;
//            }
//         }
        
        
//     }
    
// }