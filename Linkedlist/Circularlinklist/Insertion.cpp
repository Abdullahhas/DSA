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
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        head = p;
        p->next =  head;
    }
    else{
        node *q = head;
        while (q->next != head)
        {
            q = q->next;
        }
        p = new node;
        p->info = x;
        p->next = head;
        head = p;
        q->next = head;
        
    }
}

insertAtEnd(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info =x;
        head = p;
        p->next = head;
    }
    else{
        node *q = head;
        while (q->next != head)
        {
            q = q->next;
        }
        p= new node;
        p->info = x;
        p->next = head;
        q->next = p;
        
    }
}


void deletionAtStart()
{
    node *q = head;
    node *z =head;
    if(head == NULL)
    {
        cout<<"No node to delete";
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
        head = head->next;
        delete(q);
        z->next = head;
        
        
    }
}

void deletionAtEnd()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"NO node to be delete";
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
            q = q->next;
        }
        delete(q);
        p->next = head;
        
    }
}

void display()
{
    node *q = head;
    do
    {
        cout<<q->info;
        q = q->next;
    } while (q != head);
    
   
    
    
}

int main()
{
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtEnd(3);
    insertAtEnd(4);
    display();
    cout<<endl;
    deletionAtStart();
    deletionAtStart();
    deletionAtEnd();
    display();
}