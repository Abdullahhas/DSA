#include<iostream>
using namespace std;
struct circularq
{
    int que[5];
    int front = -1;
    int rear = -1;
};

circularq q;

void enque(int x)
{
    if((q.front == 0 && q.rear == 5-1) && (q.front = q.rear +1))
    {
        cout<<"Overflow";
        return;
    }
    else if(q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.que[q.rear] = x;
    }
    else if(q.front != 0 && q.rear == 5-1)
    {
        q.rear = 0;
        q.que[q.rear] = x;
    }
    else{
        q.rear++;
        q.que[q.rear] = x;
    }

}



void deque()
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"UNderflow";
        return;
    }
    else if (q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
        int tem = q.que[q.front];
    }
    else if(q.front == 5-1)
    {
        q.front = 0;

    }
    else{
        q.front++;
        int tem = q.que[q.front];
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
    display();
    cout<<endl;


    deque();
    deque();
    deque();
    display();
    cout<<endl;


    enque(5);
    enque(6);
    display();
    cout<<endl;


    deque();
    display();
    cout<<endl;

}