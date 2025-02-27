#include<iostream>
using namespace std;

struct lab4
{
    int front = -1;
    int rear = -1;
    int queue[10];
    int top = -1;
    int stack[10];
};
lab4 q;

void insert(int size, int value)
{
    if(q.front == 0 && q.rear == size-1)
    {
        cout << "Overflow" << endl;
        return;
    }
    else if(q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.queue[q.rear] = value;
    }
    else
    {
        q.rear++;
        q.queue[q.rear] = value;
    }
}

int deletion()
{
    int tem;

    if(q.front == -1 && q.rear == -1)
    {
        cout << "Underflow" << endl;
        return -1;
    }
    else if(q.front == q.rear)
    {
        tem = q.queue[q.front];
        q.front = -1;
        q.rear = -1;
        return tem;
    }
    else
    {
        tem = q.queue[q.front];
        q.front++;
        return tem;
    }
}

void push(int size, int value)
{
    if (q.top == size - 1)
    {
        cout << "Overflow" << endl;
        return;
    }
    else
    {
        q.top++;
        q.stack[q.top] = value;
    }
}

int pop()
{
    if (q.top == -1)
    {
        cout << "Underflow" << endl;
        return -1;
    }
    else
    {
        int temp = q.stack[q.top];
        q.top--;
        return temp;
    }
}

void question2()
{
    
    while (q.rear != -1 && q.front != -1)
    {
        int a = deletion();
        push(10, a);
    }

    
    while (q.top != -1)
    {
        int c = pop();
        insert(10, c);
    }
}

void display_for_quest2()
{
while (q.front != -1 && q.rear != -1)
    {
        cout << deletion()<<endl;
    }
}

void question3()
{
    int k = 3;
    int m = k;
    while ((q.front != -1 && q.front != -1) && m>0)
    {
        int  a = deletion();
        cout<<a;
        m--;

    }

    
}

int main()
{
    
    insert(10, 1);
    insert(10, 2);
    insert(10, 3);
    insert(10, 4);
    question2();
    display_for_quest2();

    //question3();
    

    return 0;
}
