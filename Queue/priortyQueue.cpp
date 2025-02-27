#include <iostream>
using namespace std;

struct priorityQueue
{
    int queue[5];
    int front = -1;
    int rear = -1;
};

priorityQueue q;

void sortQueue()
{
    for (int i = q.front; i <= q.rear; i++)
    {
        for (int j = i + 1; j <= q.rear; j++)
        {
            if (q.queue[i] < q.queue[j])
            {
                int temp = q.queue[i];
                q.queue[i] = q.queue[j];
                q.queue[j] = temp;
            }
        }
    }
}

void enque(int value)
{
    if ((q.front == 0 && q.rear == 5 - 1) || (q.front == q.rear + 1))
    {
        cout << "Overflow" << endl;
        return;
    }
    else if (q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.queue[q.rear] = value;
    }
    else if (q.front != 0 && q.rear == 5 - 1)
    {
        q.rear = 0;
        q.queue[q.rear] = value;
    }
    else
    {
        q.rear++;
        q.queue[q.rear] = value;
    }

    sortQueue();
}

int deque()
{
    if (q.front == -1 && q.rear == -1)
    {
        cout << "Underflow" << endl;
        return -1;
    }
    else if (q.front == q.rear)
    {
        int temp = q.queue[q.front];
        q.front = -1;
        q.rear = -1;
        return temp;
    }
    else if (q.front == 5 - 1)
    {
        int temp = q.queue[q.front];
        q.front = 0;
        return temp;
    }
    else
    {
        int temp = q.queue[q.front];
        q.front++;
        return temp;
    }
}

void priority()
{
    for (int i = 0; i < 5; i++)
    {
        int n;
        cout << "Enter value for push:" << endl;
        cin >> n;
        enque(n);
    }
    deque();
    deque();
    enque(6);
    enque(7);
    
    cout<<"end result:"<<endl;
    while (q.front != -1)
    {
        cout << deque() << endl;
    }
}

int main()
{
    priority();
    return 0;
}
