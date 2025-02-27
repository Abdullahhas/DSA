#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *head = NULL;
node *p = head;

void insertbeg(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info  = x;
        head = p;
        p->next = head;
    }
    else{
        node *q = head;
        while (q->next!=head)
        {
            q  = q->next;
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
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        head = p;
        p->next = head;
    }
    else 
    {
        node *q  =head;
        while (q->next != head)
        {
            q = q->next;
        }
        p = new node;
        p->info = x;
        p->next = head;
        q->next = p;
        
    }
}


void delebeg()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if(head->next == head)
    {
        delete q;
        head = NULL;
    }
    else{
        while (p->next != head)
        {
            p = p->next;
        }
        head = head->next;
        delete q;
        p->next = head;
        
    }
}

void deleteEnd()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if(head->next == head)
    {
        delete q;
        head = NULL;
    } 
    else{
        while (q->next!=head)
        {
            p = q;
            q = q->next;
        }
        delete q;
        p->next = head;
        
    }      
}

void print()
{
    node *q = head;
    do
    {
        cout<<q->info<<" ";
        q  =q->next;
    } while (q!=head);
    
    cout<<endl;
    
}


int main()
{
    insertbeg(1);
    insertbeg(2);
    insertbeg(3);
    insertbeg(4);
    print();


    insertEnd(5);
    insertEnd(6);
    insertEnd(7);
    print();


    delebeg();
    print();

    deleteEnd();
    print();
}