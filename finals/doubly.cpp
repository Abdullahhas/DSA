#include<iostream>
using namespace std;
 struct node
 {
    int info; 
    node *next;
    node *prev;
 };

 node *head = NULL;

 void insertbeg(int x)
 {
    node *p = head;
    if(head == NULL)
    {
        p =new node;
        p->info = x;
        p->next = NULL;
        p->prev = NULL;
        head = p;
    }
    else{
        p = new node;
        p->info = x;
        p->prev = NULL;
        p->next = head;
        head = p;
        p->next->prev = p;
        
    }
 }

void insertEnd(int x)
{
    
    node *p = head;
    if(head == NULL)
    {
        p =new node;
        p->info = x;
        p->next = NULL;
        p->prev = NULL;
        head = p;
    }
    else
    {
        node *q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
         p =new node;
         p->info = x;
         p->next = NULL;
         p->prev = q;
         p->prev->next = p;
        
    }
}

void insertpos(int x)
{
    
    node *p = head;
    if(head == NULL)
    {
        p =new node;
        p->info = x;
        p->next = NULL;
        p->prev = NULL;
        head = p;
    }
    else{
        node *q = head;
        while (q->next != NULL)
        {
            if(q->info == 6)
            {
                p = new node;
                p->info = x;
                p->prev = q->prev;
                p->next = q;
                p->prev->next = p;
                q->prev = p;
            }
            q =q->next;
        }
        
    }
}


void deletebeg()
{
    
    node*p = head;
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if(head->next == NULL)
    {
        delete p;
    head = NULL;
    }
    else{
        head = head->next;
        p->next->prev = NULL;
        delete p;
    }
}

void deleteEnd()
{
    
    node*p = head;
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if(head->next == NULL)
    {
        delete p;
        head = NULL;
    }
    else{
        while (p->next!=NULL)
        {
            
            p =p->next;
        }
        p->prev->next = NULL;
        delete p;

        
    }
}

void deleatpos()
{
    
    node*p = head;
    if(head == NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if(head->next == NULL)
    {
        delete p;
         head = NULL;
    }
    else{
        while (p->next!=NULL)
        {
            if(p->info == 5)
            {
                p->prev->next = p->next;
                p->next->prev = p->prev;
                delete p;
                break;
            }
            p = p->next;
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


    insertEnd(5);
    insertEnd(6);
    insertEnd(7);
    print();    

    insertpos(9);
    print();


    deletebeg();
    print();

    deleteEnd();
    print();


    deleatpos();
    print();     
}
 