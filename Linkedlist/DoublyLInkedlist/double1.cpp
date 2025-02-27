#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
    node *prev;

};

node *head = NULL;
node *p = head;

void insertAtbeg(int x)
{ 
    node *q = head;
    if(head==NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        p->prev = NULL;
        head = p;

    }
    else{
        
        

        p= new node;
        p->info = x;
        p->next = head;
        p->prev = NULL;
        //head->prev = p;
        head = p;
        //q=q->next;
        p->next->prev = p;
    }
}


void insertAtEnd(int x)
{
     node *q = head;
    if(head==NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        p->prev = NULL;
        head = p;

    }
    else{
        while (q->next!=NULL)
        {
            q=q->next;
        }
        p = new node;
        p->info = x;
        p->next = NULL;
        p->prev = q ;
        q->next = p;
        
    }
}

insertAtpos(int x)
{
    node *q = head;
    if(head==NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        p->prev = NULL;
        head = p;

    }
    else{
        while (q->next!= NULL)
        {
            if(q->info==6)
            {
                p = new node;
                p->info = x;
                p->next = q->next;
                p->prev = q;
                q->next = p;
                p->next->prev=p;
            }    
            q=q->next;
        }
        
    }
}

void print()
{
    node *q = head;
    while (q!=NULL)
    {
        cout<<q->info;
        q= q->next;

    }
    
}

int main()
{
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtbeg(3);
    insertAtEnd(4);
    insertAtEnd(6);
    insertAtEnd(7);
    insertAtpos(9);
    
    print();
}


