#include <iostream>
using namespace std;
struct double_circular_queue
{
    int queue[5];
    int front = -1;
    int rear = -1;
};
double_circular_queue q;
void enque(int size, int value)
{
    if ((q.front == 0 && q.rear == size - 1) && q.front == q.rear + 1)
    {
        cout << "overflow";
        return;
    }
    else if (q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.queue[q.rear] = value;
    }
    else if (q.front != 0 && q.rear == size - 1)
    {
        q.rear = 0;
        q.queue[q.rear] = value;
    }
    else
    {
        q.rear++;
        q.queue[q.rear] = value;
    }
}

void deque(int size)
{
    if (q.front == -1 && q.rear == -1)
    {
        cout << "Underflow";
        return;
    }
    else if (q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
    }
    else if (q.front == size - 1)
    {
        q.front = 0;
        int tem = q.queue[q.front];
    }
    else
    {
        q.front++;
        int tem = q.queue[q.front];
    }
}

void insertionAtFront(int size, int value)
{
    if ((q.front == 0 && q.rear == size - 1) && (q.front == q.rear + 1))
    {
        cout << "Overflow";
        return;
    }
    else if (q.front == -1 && q.rear == -1)
    {
        q.front = 0;
        q.rear = 0;
        q.queue[q.front] = value;
    }
    else if (q.front == 0)
    {
        q.front = size - 1;
        q.queue[q.front] = value;
    }
    else
    {
        q.front--;
        q.queue[q.front] = value;
    }
}

void deletionFromRear(int size)
{
    if (q.front == -1 && q.rear == -1)
    {
        cout << "underflow";
        return;
    }
    else if (q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
    }
    else if (q.rear == 0)
    {
        q.rear = size - 1;
        int tem = q.queue[q.rear];
    }
    else
    {
        q.rear--;
        int tem = q.queue[q.rear];
    }
}

void display()
{
    if (q.front <= q.rear)
    {
        for (int i = q.front; i <= q.rear; i++)
        {
            cout << q.queue[i] <<endl;
        }
    }
    else
    {
        for (int i = q.front; i < 5; i++)
        {
            cout << q.queue[i] << endl;
        }
        for (int i = 0; i <= q.rear; i++)
        {
            cout << q.queue[i] <<endl;
        }
    }
}
int main()
{
    
    int choice;

    do
    {
    cout << "1. normal insertion" << endl;
    cout << "2. normal deltion" << endl;
    cout << "3. front insertion" << endl;
    cout << "4. rear deletion" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            enque(5, 1);
            enque(5, 2);
            enque(5, 3);
            display();
            break;
        case 2:
            deque(5);
            deque(5);
            enque(5,4);
            enque(5,5);
            enque(5,6);
            display();
            break;
        case 3:
            insertionAtFront(5, 10);
            display();
            break;
        case 4:
            deletionFromRear(5);
            display();
            break;
        default:
            break;
        }

    } while (choice != 0);
}