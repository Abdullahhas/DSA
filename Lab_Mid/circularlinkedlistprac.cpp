#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *head = NULL;
node *p = head;

void insertAtbeg(int x)
{
    node *q = head;
    if(head == NULL)
    {
        p = new node;
        p->info = x;
         head = p;
        p->next = head;
       
    }
    else{
        while (q->next!=head)
        {
            q= q->next;
        }
        
        p = new node;
        p->info = x;
        p->next = head;
        head = p;
        q->next = head;
    }
}

void insertEnd(int x)
{
    node *q = head;
    if(head == NULL)
    {
        p = new node;
        p->info = x;
         head = p;
        p->next = head;
       
    }
    else
    {
        while (q->next != head)
        {
            q = q->next;
        }
        p = new node;
        p->info =x;
        p->next = head;
        q->next = p;
        
    }
}

void deletebeg()
{
    node *q = head;
    node *z = head;
    if(head == NULL)
    {
        cout<<"no node to b delete";
        return;
    }
    else if(head->next == head)
    {
        delete(q);
        head = NULL;
    }
    else{
        while (z->next != head)
        {
            z = z->next;
        }
        head  = head->next;
        delete(q);
        z->next = head;
        
    }
}

void deleteEnd()
{
     node *q = head;
    if(head == NULL)
    {
        cout<<"no node to b delete";
        return;
    }
    else if(head->next == head)
    {
        delete(q);
        head = NULL;
    }
    else{
        while (q->next != head)
        {
            p = q;
            q= q->next;
        }
        p->next = q->next;
        delete(q);
        
    }
}

void display()
{
    node *q = head;
    do
    {
        cout<<q->info;
        q = q->next;
    } while (q!=head);
    
}

int main()
{
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtbeg(3);
    insertAtbeg(4);
    display();
   cout<<endl;
    insertEnd(5);
    insertEnd(6);
    display();
    cout<<endl;
    deletebeg();
    display();
    cout<<endl;
    deleteEnd();
    display();
}