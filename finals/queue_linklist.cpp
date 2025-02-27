#include<iostream>
using namespace std;

struct node
{
    int info;
    node *next;
   
};

node *front = NULL;
node *rear = NULL;

void insertatend(int x)
{
    node *p = rear;
    if(front == NULL && rear == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        rear = p;
        front = p;
    }
    else{
        while (rear->next!=NULL)
        {
            rear = rear->next;
        }
        p = new node;
        p->info = x;
        p->next = NULL;
        rear->next = p;
        
    }
}


void deletebeg()
{
    node *q = front;
    if(front && rear == NULL)
    {
        cout<<"LIst is empty";
        return;
    }
    else if(front->next == NULL)
    {
        delete q;
        front = NULL;
    }
    else{
        front = front->next;
        delete q;
    }
}


void print()
{
    node *q = front;
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q = q->next;
    }
    cout<<endl;
    
}


int main()
{
    insertatend(1);
    insertatend(2);
    insertatend(3);
    insertatend(4);
    print();


    deletebeg();
    deletebeg();
    print();
}