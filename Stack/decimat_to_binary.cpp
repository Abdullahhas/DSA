#include <iostream>
using namespace std;
struct s1
{
    int stack[6];
    int top = -1;
};
s1 st;

void push(int size, int value)
{
    if (st.top == size - 1)
    {
        cout << "overflow";
        return;
    }
    else
    {
        st.top++;
        st.stack[st.top] = value;
    }
}

char pop()
{
    if (st.top == -1)
    {
        cout << "Underflow";
        return 0; // 0 in balanced eq
    }
    else
    {
        int temp = st.top;
        st.top--;
        return st.stack[temp];
    }
}

void decToBin(int num)
{
    int rem;
    while (num>0)
    {
        rem = num%2;
        push(6,rem);
        num = num/2;
    }
    while (st.top!= -1)
    {
        cout << st.stack[st.top];
        pop();
    }

}

void balanced(const char *exp)
{
    char ch;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '[' || exp[i] == '(' || exp[i] == '{')
        {
            push(10, exp[i]);
        }
        else if ((exp[i] == ']' || exp[i] == ')' || exp[i] == '}') && st.top == -1)
        {
            cout << "Stack is empty";
            return;
        }
        else if ((exp[i] == ']' || exp[i] == ')' || exp[i] == '}') && st.top != -1)
        {
            ch = pop();
            if (ch == '[' && exp[i] == ']' || ch == '{' && exp[i] == '}' || ch == '(' && exp[i] == ')');

            else
            {
                return; // cout<< " not balanced";
            }
        }
    }
    if (st.top == -1)
    {
        cout << "balanced";
    }
    else
    {
        cout << "Not balanced";
    }
}
int main()
{
     decToBin(22);
    cout << endl;
    balanced("{()}");
}
