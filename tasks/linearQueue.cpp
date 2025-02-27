#include<iostream>
using namespace std;
struct linearQueue
{
    int queue[5];
    int front = -1;
    int rear = -1;

};
linearQueue q;

void insert(int size , int value)
{
    if(q.front == 0 && q.rear == size-1)
    {
        cout<<"Overflow";
        return;
    }
    else if(q.front == -1 && q.rear== -1)
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

int deletion()
{
    int tem;
    
    if(q.front==-1 && q.rear == -1)
    {
        cout<<"Underslow";
        return -1;
    }
    else if(q.front == q.rear)
    {
         tem = q.queue[q.front];
        q.front= -1;
        q.rear= -1;
        return tem;

    }
    else{
         tem = q.queue[q.front];
        q.front++;
        return tem;
    }
}

void display()
{
    for (int i = q.front; i <= q.rear; i++)
    {
        cout<<q.queue[i]<<endl;
    }
    
}

void question1()
{
int a ,b;
    insert(10,4);
    insert(10,2);
    for (int i = 0; i <= 10; i++)
    {
        a = deletion();
        b = deletion();
        insert(10,b);
        insert(10,a+b);
        cout<<a<<endl;
    }
}

int main()
{
    question1();


}
