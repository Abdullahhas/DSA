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


void insertAtEnd(int x)
{
    node *q = head;
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head = p;
    }
    else{
        while (q->next != NULL)
        {
            q = q->next;
        }
        p = new node;
        p->info =x;
        p->next = NULL;
        q->next = p;
        
    }
}

void insertAtpos(int x)
{
    node *q = head;
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head = p;
    }
    else
    {
        while (q->next != NULL)
        {
            if(q->info == 2)
            {
                p= new node;
                p->info = x;
                p->next = q->next;
                q->next = p;
            }
            q = q->next;
        }
        
    }
}

void deleteAtbeg()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"No node to delete";
        return;
    }
    else if(head->next == NULL)
    {
        delete(q);
        head == NULL;
    }
    else{
        head = head->next;
        delete(q);
    }
}

void deleteEnd()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"No node to delete";
        return;
    }
    else if(head->next == NULL)
    {
        delete(q);
        head == NULL;
    }
    else{
        while (q->next != NULL)
        {
            p = q;
            q = q->next;
        }
        p->next = NULL;
        delete(q);
        
    }
}


void deleteAtpos()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"No node to delete";
        return;
    }
    else if(head->next == NULL)
    {
        delete(q);
        head == NULL;
    }
    else
    {
        while (q->next != NULL)
        {
            if(q->info == 2)
            {
                p->next = q->next;
                delete(q);
                break;
            }
            p=q;
            q= q->next;
        }
        
    }
}
void display()
{
    node *q = head;
    while (q!= NULL)
    {
        cout<<q->info;
        q = q->next;
    }
    
}

int main()
{
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtbeg(3);
    insertAtbeg(4);
    display();
    cout<<endl;
    insertAtEnd(5);
    insertAtEnd(6);
    insertAtEnd(7);
    display();
    cout<<endl;
    insertAtpos(8);
    display();
    cout<<endl;
    deleteAtbeg();
    display();
    cout<<endl;
    deleteEnd();
    display();
    cout<<endl;
    deleteAtpos();
    display();
    


}