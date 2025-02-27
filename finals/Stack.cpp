#include<iostream>
using namespace std;
#include <cmath>
struct Stack
{
    int stack[10];
    //char postfix[20];
    int top= -1;
};

Stack s;

void push(int x)
{
    if(s.top == 10-1)
    {
        cout<<"Overflow";
        return;
    }
    else{
        s.top++;
        s.stack[s.top]  = x;
    }

}

int pop()
{
    if(s.top == -1)
    {
        cout<<"underflow";
        return 0;
    }
    else{
        int temp = s.stack[s.top];
        s.top--;
        return temp;
    }
}


void bin_to_dec(int x)
{
    s.top = -1;
    int rem;
    int count = 0;
    while (x>0)
    {
        rem = x%10;
        push(rem);
        count++;
        x = x/10;
    }
   int sum = 0;
   for (int i = count-1; i >= 0; i--)
   {
    sum+= pop() *pow(2,i);
   }
   
    
    cout<<sum;
    
}

int main()  
{
    bin_to_dec(10110);
}




// void postfixeval(const char *a)
// {
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if(a[i]>= '0' && a[i] <= '9')
//         {
//             push(a[i] - '0');
//         }
//         else if(a[i] == '+'|| a[i] == '-' || a[i] == '/' || a[i] == '*'  )
//         {
//             int o2 = pop();
//             int o1 = pop();
//             int result;

//             switch (a[i])
//             {
//             case '+':
//                 result = o1 + o2;
//                 break;
//             case '-':
//             result = o1-o2;
//             break;
//             case '*':
//             result = o1*o2;
//             break;
//             case '/':
//             if(o2 != 0)
//             result = o1/o2;
//             else{
//                 cout<<"Error divide by 0";
//             }
//             break;

//             default:
//                 break;
//             }
//             push(result);

//      }
//     }
//     if(s.top==0)
//     {
//         cout<<s.stack[s.top];

//     }
//     else{
//         cout<<"invalid expression";
//     }

    
// }

// int main()
// {
//     postfixeval("562+*24/-");   
// }

// void balanced(const char *a)
// {
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if(a[i] == '(' || a[i] == '{' || a[i] == '[')
//         {
//             push(a[i]);
//         }
//         else if((a[i] == ')' || a[i] == '}' || a[i] == ']') && s.top == -1)
//         {
//             cout<<"unbalanced";
//             return;
//         }
//         else if((a[i] == ')' || a[i] == '}' || a[i] == ']') && s.top != -1)
//         {
//             int c = pop();
//             if((c == '(' && a[i] == ')') || (c == '{' && a[i] == '}') || (c == '[' && a[i] == ']') );
//             else
//             {
//                 return;
//             }
//         }

//     }

//     if(s.top == -1)
//     {
//         cout<<"balanced";
//     }
//     else{
//         cout<<"Not balanced";
//     }
    
// }
// int precedence(int c)
// {
//     if(c == '*' || c == '/' || c == '%' )
//     {
//         return 2;

//     }
//     if(c == '+' || c == '-')
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }

// void infixtopost(const char *a)
// {
//     int y = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if(a[i] >= 'a' && a[i] <= 'z')
//         {
//             s.postfix[y] = a[i];
//             y++;
//         }
//         else if(a[i] == '(' )
//         {
//             push(a[i]);
//         }
//         else if(a[i] == ')')
//         {
//             int c;
//             while (s.stack[s.top] != '(')
//             {
//                 s.postfix[y] = pop();
//                 y++;
//             }
//             pop();
            
//         }
//         else{
//             while (s.top != -1 && precedence(s.stack[s.top])>= precedence(a[i]))
//             {
//                 s.postfix[y] = pop();
//                 y++;
//             }
//             push(a[i]);
            
//         }

//     }
//     while(s.top != -1)
//     {   
//         s.postfix[y] = pop();
//         y++;

//     }

//     for (int j = 0; j < y; j++)
//     {
//         cout<<s.postfix[j]<<" ";
//     }
    
    
// }
// void decimat_to_bin(int x)
// {
//     int rem;
//     while (x>0)
//     {
//          rem = x%2;
//         push(rem);
//         x = x/2;

//     }
//     while (s.top!=-1)
//     {
//         cout<<s.stack[s.top]<<" ";
//         pop();
//     }
    
    
// }

// void print()
// {
//    for (int i = s.top; i >= 0; i--)
//    {
//     cout<<s.stack[i]<<" ";
//    }
   
    
// }


 


// int main()
// {
//     // decimat_to_bin(22);
//     // cout<<endl;
//     // push(1);
//     // push(2);
//     // push(3);
//     // push(4);
//     // print();
//     // cout<<endl;
//     // pop();
//     // print();
//     // cout<<endl;
//     // pop();
//     // print();
//     // cout<<endl;


//     //balanced("{[{()}]");
//     cout<<endl;
//     infixtopost("a-(b+c/d-(e+f*g)-h)");
// }
