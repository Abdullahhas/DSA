#include<iostream>
using namespace std;

struct node
{
    int info;
    node *next;
};
node *head = NULL;
node *p  =head;

void insert(int x)
 {
    node *p = head;    
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head = p;
    }
    else{
        node *q = head;
        while (q->next!=NULL)
        {
            q  = q->next;
        }
        p = new node;
        p->info = x;
        p->next = NULL;
        q->next = p;
        
    }
 }

int prime(int x)
{
    if(x<=1)
    {
        return 0;

    }
    else{
        for (int i = 2; i <x; i++)
        {
            if(x%i == 0)
            {
                return 0;
            }
        }
        
        
    }
    return 1 ;
}

void deleteprime()
{
    node *q = head;
    while (q!=NULL)
    {    
    if(prime(q->info))
    {
        if(p == NULL)
        {
            head = q->next;
            delete q;
            q = head;
        }
        else{
            p->next = q->next;
            delete q;
            q= p->next;
        }
    }
    else{
        p = q;
        q  = q->next;
    }
}
}


void print()
{
    node *q = head;
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q  = q->next;
    }
    cout<<endl;
}


int main()
{
    insert(1);
    insert(6);
    insert(2);
    print();

    deleteprime();
    print();
}

