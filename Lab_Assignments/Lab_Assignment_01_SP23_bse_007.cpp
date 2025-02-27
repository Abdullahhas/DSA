#include <iostream>
using namespace std;

struct Lab_Assignment_01
{
    int stack1[10];
    int stack2[10];
    int top1 = -1;
    int top2 = -1;
};

Lab_Assignment_01 a;

void push(int value)
{
    if (a.top1 == 10 - 1)
    {
        cout << "Overflow";
        return;
    }
    else
    {
        a.top1++;
        a.stack1[a.top1] = value;
    }
}

void push2(int value)
{
    if (a.top2 == 10 - 1)
    {
        cout << "Overflow";
        return;
    }
    else
    {
        a.top2++;
        a.stack2[a.top2] = value;
    }
}

int pop()
{
    if (a.top1 == -1)
    {
        cout << "Underflow";
        return -1; 
    }
    else
    {
        int temp = a.stack1[a.top1];
        a.top1--;
        return temp;
    }
}

void sort()
{
    int temp;
    while (a.top1 != -1)
    {
        temp = pop();
        if (a.top2 == -1 || a.stack2[a.top2] >= temp)
        {
            push2(temp);
        }
        else
        {
            while (a.top2 != -1 && a.stack2[a.top2] < temp)
            {
                push(a.stack2[a.top2]);
                a.top2--;
            }
            push2(temp);
        }
    }
}


    


void display()
{
    sort();

    cout << "Stack elements after sorting: ";
    for (int i = a.top2; i >= 0; i--)
    {
        cout << a.stack2[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(23);
    push(92);
    push(98);
    push(31);
    push(3);
    push(34);

    cout << "Stack elements before sorting: ";
    for (int i = a.top1; i >= 0; i--)
    {
        cout << a.stack1[i] << " ";
    }
    cout << endl;

    display();

    return 0;
}
