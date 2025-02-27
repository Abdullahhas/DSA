#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *head1 = NULL;
node *head2 = NULL;
node *p  = head1;
node *k = head2;

void insertend1(int x)
{
    if(head1 == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head1 = p;
    }
    else{
        node *q = head1;
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


void insertend2(int x)
{
    if(head2 == NULL)
    {
        k = new node;
        k->info = x;
        k->next = NULL;
        head2 = k;
    }
    else{
        node *q = head2;
        while (q->next != NULL)
        {
            q = q->next;
        }
        k = new node;
        k->info = x;
        k->next = NULL;
        q->next = k;
        
    }
}


void print1()
{
    node *q = head1;
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q  = q->next;
    }
    cout<<endl;
    
}

void print2()
{
    node *q = head2;
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q  = q->next;
    }
    cout<<endl;
    
}

void emerge()
{
    node *q = head1;
    while (q->next !=NULL)
    {
        if(p->info == 2)
        {
            p->next= head2;
            while (k->next!=NULL)
            {
                k = k->next;
            
            }
            k->next = q;
        }
        p = q;
        q = q->next;
    }
    
}


int main()
{
    insertend1(1);
    insertend1(2);
    insertend1(3);
    insertend1(4);
    print1();

    cout<<endl;

    insertend2(5);
    insertend2(6);
    insertend2(7);
    print2();
    cout<<endl;


    emerge();
    print1();
}