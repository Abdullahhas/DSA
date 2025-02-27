#include<iostream>
using namespace std;
struct practice
{
    int queue[5];
    int rear = -1;
    int front = -1;
};
practice q;

void enque(int value)
{
    if(q.front == 0 && q.rear == 5-1)
    {
        cout<<"Overflow";
        return;
    }
    else if(q.front == -1 && q.rear==-1)
    {
        q.front++;
        q.rear++;
        q.queue[q.rear] = value;
    }
    else{
        q.rear++;
        q.queue[q.rear] = value;
    }
}

void deque()
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"UNderflow";
        return;

    }
    else if(q.front == q.rear)
    {
        q.front=-1;
        q.rear=-1;
        int tem = q.queue[q.front];
    }
    else{
        q.front++;
        int tem = q.queue[q.front];
    }
}


void cenque(int x)
{
    if((q.front == 0 || q.rear == 5-1) && (q.front == q.rear+1))
    {
        cout<<"Overflow";
        return;
    }
    else if(q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.queue[q.rear] = x;
    }
    else if (q.front!=0 && q.rear==5-1)
    {
        q.rear = 0;
        q.queue[q.rear] = x;
    }
    else{
        q.rear++;
        q.queue[q.rear] = x;
    }
    

}


void cdeque()
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"Underflow";
        return;
    }
    else if(q.front == q.rear)
    {
        q.rear = -1;
        q.front = -1;

    }
    else if(q.front == 5-1)
    {
        q.front = 0;

    }
    else{
        int tem = q.queue[q.front];
        q.front++;
    }
}

void insertAtFront(int x)
{
    if((q.front == 0 && q.rear == 5-1) || (q.front == q.rear+1))
    {
        cout<<"Overflow";
        return;
    }
    else if(q.front == -1 && q.rear==-1)
    {
        q.rear++;
        q.front++;
        q.queue[q.front] = x;
    }
    else if(q.front == 0)
    {
        q.front = 5-1;
        q.queue[q.front] = x;
    }
    else{
        q.front--;
        q.queue[q.front] = x;
    }
}


void deletionAtRear()
{
    if(q.front == -1 && q.rear ==-1)
    {
        cout<<"Underflow";
        return;
    }
    else if(q.front == q.rear)
    {
        q.front = 0;
        q.rear = 0;
    }
    else if(q.rear == 0)
    {
        q.rear = 5-1;
        int tem = q.queue[q.rear];
    }
    else
    {
        q.rear--;
        int tem = q.queue[q.rear];
    }


}
void cdisplay()
{
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
}

void display()
{
    for (int i = q.front; i <= q.rear; i++)
    {
       cout<<q.queue[i];
    }
    
}

int main()
{
    cenque(1);
    cenque(2);
    cenque(3);
    cenque(4);
    cenque(5);
    cdisplay();
    cout<<endl;
    cdeque();
    cdeque();
    cenque(6);
    cdeque();
    cdisplay();
    cout<<endl;
    insertAtFront(10);
    insertAtFront(11);
    cdisplay();
    cout<<endl;
    deletionAtRear();
    deletionAtRear();
    cdisplay();
    cout<<endl;
}


