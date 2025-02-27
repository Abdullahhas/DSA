#include<iostream>
using namespace std;
struct LInearq
{
    int que[10];
    int front = -1;
    int rear = -1;
};

LInearq q ;

void enque(int x)
{
    if((q.front == 0) && (q.rear == 10-1))
    {
        cout<<"Overflow";
        return;
    }
    else if(q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.que[q.front]= x;
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
        cout<<"underflow";
        return;
    }
    else if(q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
        int tem = q.que[q.front];
    }
    else{
        q.front++;
        int tem = q.que[q.front];
    }
}


void print()
{
    for (int i = q.front; i <= q.rear; i++)
    {
        cout<<q.que[i]<<" ";
    }
    cout<<endl;
    
}


int main()
{
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    print();


    deque();
    print();
    deque();
    print();
}