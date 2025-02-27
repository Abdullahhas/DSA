#include<iostream>
using namespace std;
struct st
{
    int top = -1;
    char stack[50];
    char postfix[100];
};
st s;
void push(int size,char value)
{
    if(s.top == size-1)
    {
        cout<<"Overflow";
        
    }
    s.top++;
    s.stack[s.top] = value;
    

}
char pop()
{
    if(s.top == -1)
    {
        cout<<"Underflow";
        return -1;
    }
    char temp = s.stack[s.top];
    s.top--;
    return temp;
}

int precedence(char c)
{
    if(c == '*' || c=='/' || c=='%')
    {
        return 2;
    }
    if(c == '+' || c == '-')
    {
        return 1;
    }
    else{
        return 0;
    }
}
void infixToPostfix(const char *a)
{
    int y=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] >= 'a' && a[i]<= 'z')
        {
           s.postfix[y]= a[i];
           y++;
        }

        else if(a[i] == '(')
        {
            push(100,a[i]);
        }
        else if(a[i] == ')')
        {
            while (s.stack[s.top] != '(')
            {
                s.postfix[y] = pop();
                y++;
            }   
            pop();
        }

        else{
            while (s.top != -1 && (precedence(s.stack[s.top]) >= precedence(a[i]))) 
            {
                s.postfix[y] = pop();
                y++;
            }
            push(100,a[i]);
            
        }
        
    }
    while(s.top != -1)
    {
        s.postfix[y] = pop();
        y++;
    }
    
    for (int j = 0; j < y; j++) {
        cout << s.postfix[j];
    }
    cout << endl;
}


int main()
{

    infixToPostfix("a-(b+c/d-(e+f*g)-h)");

}

