#include <iostream>
using namespace std;
struct stackprac
{
    int stack1[20];
    int stack2[20];
    int top1 = -1;
    int top2 = -1;
    // char postfix[20];
};

stackprac s;

void push1(int x)
{
    if (s.top1 == 20 - 1)
    {
        cout << "Overflow";
        return;
    }
    else
    {
        s.top1++;
        s.stack1[s.top1] = x;
    }
}

void push2(int x)
{
    if (s.top2 == 20 - 1)
    {
        cout << "Overflow";
        return;
    }
    else
    {
        s.top2++;
        s.stack2[s.top2] = x;
    }
}



int pop()
{
    if (s.top1 == -1)
    {
        cout << "underflow";
        return -1;
    }
    else
    {
        int tem = s.stack1[s.top1];
        s.top1--;
        return tem;
    }
}

// void fib(int n)
// {
//     push(0);
//     push(1);
//     for ( int i = 3; i <= n; i++)
//     {
//         int a = pop();
//         int b = pop();
//         int next = a+b;
//         push(b);
//         push(a);
//         push(next);
//     }

// }
// void display()
// {
//     for (int i = s.top; i >=0; i--)
//     {
//         cout<<s.stack[i];
//     }

// }

// void displayfib()
// {
//     for (int i = 0; i <=s.top; i++)
//     {
//         cout<<s.stack[i];
//     }

// }

// void balanced(const char *a)
// {
//     char c;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if(a[i] == '[' || a[i] == '{' || a[i] == '(')
//         {
//             push(a[i]);
//         }
//         else if((a[i] == ']' || a[i] == '}' || a[i] == ')') && s.top == -1)

//         {
//             cout<<"stack is empty";
//             //return;
//         }
//          else if((a[i] == ']' || a[i] == '}' || a[i] == ')') && s.top != -1)
//          {
//            c  = pop();
//             if((c=='[' && a[i] == ']') ||  (c=='{' && a[i] == '}') || (c == '(' && a[i] == ')'));

//             else{
//                 return;
//             }
//          }

//     }

//     if(s.top == -1)
//     {
//         cout<<"balanced";
//     }
//     else
//     {
//         cout<<"nnot balanced";
//     }

// }

// int prcedence(char c)
// {
//     if(c == '/' || c == '*' || c == '%')
//     {
//         return 2;
//     }
//     else if(c == '+' || c == '-' )
//     {
//         return 1;

//     }
//     else
//     {
//         return 0;
//     }
// }

// void infixTopostfix(const char *a)
// {
//     int y = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if(a[i] >= 'a' && a[i] <= 'z')
//         {
//             s.postfix[y] = a[i];
//             y++;
//         }
//         else if(a[i] == '(')
//         {
//             push(a[i]);
//         }
//         else if(a[i] == ')')
//         {
//             //int c = pop();
//             while (s.stack[s.top]!= '(')
//             {
//                 s.postfix[y] = pop();
//                 y++;
//             }
//             pop();
//         }
//         else {
//         while(s.top!= -1 && (prcedence(s.stack[s.top])>=prcedence(a[i])))
//         {
//             s.postfix[y] = pop();
//             y++;
//         }
//         push(a[i]);
//         }
//     }
//     while (s.top!=-1)
//     {
//         s.postfix[y] = pop();
//         y++;
//     }

//     for (int i = 0; i < y; i++)
//     {
//         cout<<s.postfix[i];
//     }

// }

// void postfixeval(const char *a)
// {
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if (a[i] >= '0' && a[i] <= '9')
//         {
//             push(a[i] - '0');
//         }
//         else if(a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i]=='/')
//         {
//             int o2 = pop();
//             int o1 = pop();
//             int res;
//             switch (a[i])
//             {
//             case '+':
//             res = o1 + o2;
//                 break;
//                 case '-':
//                 res = o1 - o2;
//                 break;
//                 case '*':
//                 res = o1*o2;
//                 break;
//                 case '/':
//                 if(o2!=0)
//                 {
//                     res= o1/o2;
//                 }
//                 break;
            
//             default:
//                 break;
//             }
//             push(res);

//         }
//     }

//     if(s.top == 0)
//     {
//         cout<<s.stack[s.top];
//     }
//     else {
//         cout<<"invalid";
//     }
// }


void sort()
{
    int tem ;
    while (s.top1 != -1)

    {
        tem = pop();
        if(s.top2 == -1 && s.stack2[s.top2]>tem)
        {
            push2(tem);
        }
        else{
            while (s.top2!=-1 && s.stack2[s.top2] < tem)
            {
                push1(s.stack2[s.top2]);
                s.top2--;
            }
            push2(tem);
            
        }
    }
    
}

void display()
{
    sort();

    cout << "Stack elements after sorting: ";   
    for (int i = s.top2; i >= 0; i--)
    {
        cout << s.stack2[i] << " ";
    }
    cout << endl;
}
int main()
{
    push1(4);
    push1(2);
    push1(3);
    push1(6);
    display();
    // cout<<endl;
    // pop();
    // pop();
    // display();
    // cout<<endl;

    // fib(5);
    // displayfib();

    //     balanced("({[]}");

    // infixTopostfix("a-(b+c/d-(e+f*g)-h)");

    
}