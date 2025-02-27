#include <iostream>
using namespace std;

struct Question1
{
    int stack1[5];
    int stack2[5];
    int top1 = -1;
    int top2 = -1;
    int arr[5] ;
};

Question1 s;

void push1(int x)
{
    if (s.top1 == 5 - 1)
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
    if (s.top2 == 5 - 1)
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

int pop1()
{
    if (s.top1 == -1)
    {
        cout << "Underflow";
        return -1;
    }
    else
    {
        int tem = s.stack1[s.top1];
        s.top1--;
        return tem;
    }
}

int pop2()
{
    if (s.top2 == -1)
    {
        cout << "Underflow";
        return -1;
    }
    else
    {
        int tem = s.stack2[s.top2];
        s.top2--;
        return tem;
    }
}

void arrayinput()
{
    
    
    for (int i = 0; i < 5; i++)
    {
        cin>>s.arr[i];
    }
    
}

void storeinStack1()
{
    arrayinput();
    for (int i = 0; i < 5; i++)
    {
        push1(s.arr[i]);
    }
}

void display1()
{
    for (int i = s.top1; i >= 0; i--)
    {
        cout << s.stack1[i];
    }
}

void storeinStack2()
{
    arrayinput();
    for (int i = 0; i < 5; i++)
    {
        push2(s.arr[i]);
    }
}

void display2()
{
    for (int i = s.top2; i >= 0; i--)
    {
        cout << s.stack2[i];
    }
}

int main()
{
    

    
    int choice;
    do
    {
       
    cout << "Press 1 for push in stack1" << endl;
    cout << "Press 2 for display elements of stack1" << endl;
    cout << "Press 3 for push in  stack2" << endl;
    cout << "Press 4 for display elements of stack2" << endl;
    
    cout << "Enter your choice:";
    cin >> choice;

    switch (choice)
    {
    case 1:
        storeinStack1();

        break;
    case 2:
        display1();
        break;
    case 3:
        storeinStack2();
        break;
    case 4:
        display2();
        break;
    default:
        break;
    }
 } while (choice!=0);
    
}
