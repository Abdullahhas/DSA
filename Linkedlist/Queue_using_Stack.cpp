#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *front = NULL;
node *rear = NULL;

void enque(int x)
{
    node *p = rear;
    if(front==NULL && rear==NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        rear = p;
        front = p;
    }
    else{
        while (rear->next != NULL)
        {
            rear = rear->next;
        }
        p = new node;
        p->info = x;
        p->next = NULL;
        rear->next = p;
       
        
    }
}

void deque()
{
    node *q = front;
    if(front == NULL && rear == NULL)
    {
        cout<<"No nde to delete";
        return;
    }
    else if(front->next ==NULL)
    {
        delete(q);
        front == NULL;
        rear = NULL;
    }
    else {
        front = front->next;
        delete(q);
    }
}

void display()
{
    node *q = front;
    while (q!=NULL)
    {
        cout<<q->info;
        q=q->next;
    }
    

}

int main()
{
    enque(1);
    enque(2);
    enque(3);
    deque();
    display();
}