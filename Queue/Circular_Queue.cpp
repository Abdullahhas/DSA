#include<iostream>
using namespace std;
struct Circular_Queue
{
    int queue[5];
    int front = -1;
    int rear = -1;
};
Circular_Queue q;
void insertion(int value,int size)
{
    if((q.front == 0  && q.rear == size-1) || (q.front == q.rear+1))
    {
        cout<<"Overflow";
        return;
    }
    else if (q.front == -1 && q.rear == -1)

    {
        q.front++;
        q.rear++;
        q.queue[q.rear] = value;
    }
    else if (q.front!=0 && q.rear==size-1)
    {
        q.rear=0;
        q.queue[q.rear] = value;
    }
    else{
        q.rear++;
        q.queue[q.rear] = value;
    }
    
    
}
void deletion(int size)
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"Underflow";
        return;
    }
    else if (q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
    }
    else if (q.front == size-1)
    {
        q.front = 0;
    }
    else{
        int tem = q.queue[q.front];
        q.front++;
    }
    
    
}

int main()
{
    insertion(1,5);
    insertion(2,5);
    insertion(3,5);
    insertion(4,5);
    insertion(5,5);
    deletion(5);
    deletion(5);
    deletion(5);
    insertion(6,5);
    deletion(5);
    if (q.front <= q.rear)
    {
        for (int i = q.front; i <= q.rear; i++)
        {
            cout << q.queue[i] << " ";
        }
    }
    else
    {
        for (int i = q.front; i < 5; i++)
        {
            cout << q.queue[i] << " ";
        }
        for (int i = 0; i <= q.rear; i++)
        {
            cout << q.queue[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
    
