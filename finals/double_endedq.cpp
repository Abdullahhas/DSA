#include<iostream>
using namespace std;
struct double_endedq
{
    int que[5];
    int front = -1;
    int rear = -1;
};

double_endedq q;

void enque(int x)
{
    if(q.front == 0 && q.rear == 5-1)
    {
        cout<<"overflow";
        return;
    }
    else if(q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.que[q.front] = x;
    }
    else if(q.front == 0)
    {
        q.front = 5-1;
        q.que[q.front] = x;
    }
    else{
        q.front--;
        q.que[q.front] = x;
    }
}


void deque()
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"underflow";
        return;
    }
    else if (q.front == q.rear)
    
    {
        q.front = -1;
        q.rear = -1;
    }
    else if (q.rear == 0)
    {
        q.rear = 5-1;
        int tem = q.que[q.rear];
    }
    else{
        q.rear--;
        int tem = q.que[q.rear];
    }
    
    
}

void display()
{
    if (q.front <= q.rear)
    {
        for (int i = q.front; i <= q.rear; i++)
        {
            cout << q.que[i] << " ";
        }
    }
    else
    {
        for (int i = q.front; i < 5; i++)
        {
            cout << q.que[i] << " ";
        }
        for (int i = 0; i <= q.rear; i++)
        {
            cout << q.que[i] << " ";
        }
    }
}
int main()
{
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    enque(5);
    display();
    cout<<endl;


    deque();
    display();
    cout<<endl;

    enque(6);
    display();
    cout<<endl;

    deque();
    display();
    cout<<endl;
}
