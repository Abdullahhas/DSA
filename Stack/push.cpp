#include <iostream>
using namespace std;

#include <cmath>

struct push
{
    int stack[6];
    int top = -1;
};
push p;

int pop()
{
    if (p.top == -1)
    {
        cout << "Underflow";
        return 0;
    }
    else
    {
        int temp = p.stack[p.top]; // return the value of top element
        // int temp = p.top; return the top index not value
        p.top--;
        return temp;
    }
}

void push1(int size, int value)
{
    if (p.top == size - 1)
    {
        cout << "Overflow";
        return;
    }
    else
    {
        p.top++;
        p.stack[p.top] = value;
    }
}

void pop1()
{
    if (p.top == -1)
    {
        cout << "Underflow";
        return;
    }
    else
    {
        int temp = p.top;
        p.top--;
    }
}

void display()
{
    for (int i = p.top; i >= 0; i--)
    {
        cout << p.stack[i];
        cout << endl;
    }
}

void binToDeci(int no)
{
    int count = 0;
    int rem;
    int res = 0;

    while (no > 0)
    {
        rem = no % 10;
        push1(6, rem);
        count++;
        no = no / 10;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        res += pop() * pow(2, i);
    }
    cout << res;
}



int main()
{
    int i;
    cout << "Enter your choice:";

    cin >> i;
    switch (i)
    {
    case 1:
        push1(6, 1 * 2);
        push1(6, 2 % 2);
        push1(6, 3 / 2);
        push1(6, 4 + 22);
        push1(6, 5 - 1);
        push1(6, 6 - 6);
        display();
        break;
    case 2:
        pop1();
        pop1();
        display();
        break;
    case 3:
        binToDeci(10110);
        break;
    default:
        break;
    }

    
    
}