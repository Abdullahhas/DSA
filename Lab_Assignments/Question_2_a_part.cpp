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

int prime(int x)
{
    if(x<=1)
    {
        return 0;
    }
    else{
        for (int i = 2; i < x; i++)
        {
            if(x%i==0)
            {
                return 0;
            }
        }
        
    }
    return 1;
}

void deleteprime()
{
    node *q  =head;
    while (q!=NULL)
    {
        if(prime(q->info))
        {
            if(p==NULL)
            {
                head = q->next;
                delete(q);
                q = head;
            }
            else{
            p->next = q->next;
            delete(q);
            q = p->next;
            }
        }
        else{
            p  = q;
            q=q->next;
        }
    }
    
}

void display()
{
    node *q = head;
    while (q!=NULL)
    {
        cout<<q->info;
        q  = q->next;
    }
    

}

int main()
{
    insertAtbeg(3);
    insertAtbeg(2);
    insertAtbeg(4);
    insertAtbeg(7);
    insertAtbeg(1);
    insertAtbeg(6);
   
    display();
    cout<<endl;
    cout<<"After deletind prime nodes:"<<endl;
    deleteprime();
    display();
}