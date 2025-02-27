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
        p->next = NULL;
        head = p;
    }
    else{
        p = new node;
        p->info = x;
        p->next = head;
        head = p;
    }
}

void insertend(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head = p;
    }
    else{
        node *q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        p = new node;
        p->info = x;
        p->next = NULL;
        q->next = p;
        
    }
}

void insertAtpos(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head = p;
    }
    else
    {
        node *q = head;
    while (q->next != NULL)
    {
        if(q->info == 6)
        {
            p = new node;
            p->info = x;
            p->next = q->next;
            q->next = p;
        }
        q = q->next;
    }
    }
    

}



void deletebeg()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if(head->next == NULL)
    {
        delete q;
        head = NULL;

    }
    head = head->next;
    delete q;
}


void deleteEnd()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if(head->next == NULL)
    {
        delete q;
        head = NULL;

    }
    else{
        while (q->next!=NULL)
        {
            p = q;
            q = q->next;

        }
        delete q;
        p->next = NULL;

        
    }
}


void deletepost()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if(head->next == NULL)
    {
        delete q;
        head = NULL;

    }
    else{
        while (q->next!=NULL)
        {
            if(q->info == 6)
            {
                p->next = q->next;
                delete q;
                break;
            }
            p = q;
            q=q->next;
        }
        
    }
}


void print()
{
    node *q = head;
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q = q->next;
    }
    cout<<endl;
    
}


int main()
{
    insertbeg(1);
    insertbeg(2);
    insertbeg(3);
    insertbeg(4);
    print();


    insertend(5);
    insertend(6);
    insertend(7);
    print();

    insertAtpos(8);
    print();


    deletebeg();
    print();

    deleteEnd();
    print();

    cout<<"delete at pos:"<<endl;
    deletepost();
    print();

}