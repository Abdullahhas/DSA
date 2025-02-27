#include<iostream>
using namespace std;
struct Queuepractice
{
    int queu[5];
    int front = -1;
    int rear = -1;
};
Queuepractice q;

void enque(int x)
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
        q.queu[q.rear] = x;
    }
    else{
        q.rear++;
        q.queu[q.rear] = x;
    }
}

void deque()
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"Underflow";
        return;
    }
    else if(q.front== q.rear)
    {
        int tem = q.queu[q.front];
        q.front = -1;
        q.rear = -1;
    }
    else{
        q.front++;
        int tem = q.queu[q.front];
    }


}

void cirenque(int x)
{
    if((q.front == 0 && q.rear == 5-1) || q.front == q.rear+1)
    {
        cout<<"Overflow";
        return;
    }
    else if(q.front == -1 && q.rear == -1)
    {
        q.front++;
        q.rear++;
        q.queu[q.rear] = x;
    }
    else if(q.front != 0 && q.rear == 5-1)
    {
        q.rear = 0;
        q.queu[q.rear] = x;
    }
    else
    {
        q.rear++;
        q.queu[q.rear] = x;
    }

}

void cirdeque()
{
    if(q.front == -1 && q.rear == -1)
    {
        cout<<"Underflow";
        return;
    }
    else if(q.front== q.rear)
    {
        int tem = q.queu[q.front];
        q.front = -1;
        q.rear = -1;
    }
    else if (q.front == 5-1)
    {
        q.front = 0;
        int tem = q.queu[q.front];
    }
    
    else {
        q.front++;
        int tem = q.queu[q.front];
    }
}

void display()
{
    for (int i = q.front; i <= q.rear; i++)
    {
        cout<<q.queu[i];
    }
    
}

void cdisplay()
{
    if (q.front <= q.rear)
    {
        for (int i = q.front; i <= q.rear; i++)
        {
            cout << q.queu[i] << " ";
        }
    }
    else
    {
        for (int i = q.front; i < 5; i++)
        {
            cout << q.queu[i] << " ";
        }
        for (int i = 0; i <= q.rear; i++)
        {
            cout << q.queu[i] << " ";
        }
    }
}


void sort()
{
    int tem;
    for (int i = q.front; i <= q.rear; i++)
    {
        for (int j = q.front; j <= q.rear-1; j++)
        {
            if(q.queu[j] < q.queu[j+1])
            {
                tem = q.queu[j];
                q.queu[j] = q.queu[j+1];
                q.queu[j+1] = tem;
            }
        }
        
    }
    
}

void reverse()
{
    int tem;
    for (int i = 0; i <= q.rear/2; i++)
    {
        tem = q.queu[i];
        q.queu[i] = q.queu[q.rear -i];
        q.queu[q.rear - i] = tem;
    }
    
}

int main()
{
    // enque(1);
    // enque(2);
    // enque(3);
    
    // display();
    // cout<<endl;
    // deque();
    // display();
    // cout<<endl;

    cirenque(6);
    cirenque(3);
    cirenque(5);
    cirenque(1);
    cirenque(9);
    //sort();
    reverse();
    display();
    // cdisplay();
    // cout<<endl;
    // cirdeque();
    // cirdeque();
    // cdisplay();
    // cout<<endl;
    // cirenque(6);
    // cdisplay();
    // cout<<endl;

}