#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *head = NULL;
node *p = head;

node *head2 = NULL;
node *z = head;

void insert2(int x)
{
     node *q = head2;
    if(head2 == NULL)
    {
        z = new node;
        z->info = x;
        z->next = NULL;
        head2 = z;

    }
    else{
        while (q->next != NULL)
        {
            q = q->next;
        }
        z = new node;
        z->info = x;
        z->next = NULL;
        q->next = z;
}
}

void insert(int x)
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
        p->info = x;
        p->next = NULL;
        q->next = p;
        
    }
}

void sort()
{
    node *p = head;
    node *q = head;
    int tem;
    while (p!=NULL)
    {
        q = p->next;
        while (q!=NULL)
        {
            if(p->info<q->info)
            {
                tem = p->info;
                p->info = q->info;
                q->info = tem;
            }
            q = q->next;
        }
        p = p->next;
        
    }
    
}

void merge()
{
    node *q =head;
    while (q->next != NULL)
    {
        q =q->next;
    }
    q->next = head2;
    head2  =NULL;

    sort();
}

void display()
{
    node *q = head;
    while (q!= NULL)
    {
        cout<<q->info;
        q = q->next;

        cout<<endl;
    }
    
}

void display2()
{
    node *q = head2;
    while (q!= NULL)
    {
        cout<<q->info;
        q = q->next;

        cout<<endl;
    }
    
}

int main()
{
    insert(4);
    insert(2);
    insert(3);
    display();
    cout<<endl;

    insert2(1);
    insert2(9);
    insert2(5);
    display2();
    cout<<endl;

    
    merge();
    display();
    
}