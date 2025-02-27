#include<iostream>
using namespace std;
struct queuePrac
{
    int queue[5];
    int front = -1;
    int rear = -1;
};
queuePrac q;

void enque(int x)
{
    if(q.front == 0 && q.rear == 5-1)
    {
        cout<<"Overflow";
        return;
    }
    else if(q.front== -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.queue[q.rear] = x;
    }
    else{
        q.rear++;
        q.queue[q.rear] = x;
    }
}

void deque()
{
    if(q.front== -1 && q.rear == -1)
    {
        cout<<"Underflow";
        return;
    }
    else if(q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
        int tem = q.queue[q.front];
    }
    else{
        q.front++;
        int tem = q.queue[q.front] ;
    }

}

void cirenque(int x)
{
    if((q.front == 0 && q.rear == 5-1) ||( q.front == q.rear+1))
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
    else if(q.front!=0 && q.rear == 5-1)
    {
        q.rear = 0;
        q.queue[q.rear] = x;
    }
    else{
        q.rear++;
        q.queue[q.rear] = x;
    }
}

void cirdeque()
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"Underflow";
        return;
    }
    else if(q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
        int tem = q.queue[q.front];
    }
    else if(q.front == 5-1)
    {
        q.front = 0;
        int tem = q.queue[q.front];
    }
    else{
        int tem = q.queue[q.front];
        q.front++;
        
    }
}


void doubleenque(int x)
{
    if(q.front == 0 && q.rear == 5-1)
    {
        cout<<"Overflow";
        return;


    }
    else if(q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.queue[q.front] = x;
    }
    else if(q.rear!=0 && q.front == 5-1)
    {
        q.front = 0 ;
        q.queue[q.front] = x;
    }
    else{
        q.front--;
        q.queue[q.front] = x;
    }
}

void doubledeque()
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"Underfloe";
        return;
    }
    else if(q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
        int tem = q.queue[q.rear];
    }
    else if(q.rear == 5-1)
    {
        q.rear = 0;
    }
    else {
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

int main()
{
//    cirenque(1);
//    cirenque(2);
//    cirenque(3);
//    cirenque(4);
//    cirenque(5);
//    cdisplay();
//    cout<<endl;
//    cirdeque();
//    cirdeque();
//    cdisplay();
//    cout<<endl;
//    cirenque(6);
//    cdisplay();


doubleenque(9);
doubleenque(2);
doubleenque(3);
doubleenque(4);
cdisplay();
cout<<endl; 
doubledeque();
doubledeque();
cdisplay();


}