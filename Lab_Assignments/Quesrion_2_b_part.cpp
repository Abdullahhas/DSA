#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
    node *prev;
};

node *head = NULL;
node *p = head;;

void insertAtbeg(int x)
{ 
    if(head==NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        p->prev = NULL;
        head = p;

    }
    else{
        p= new node;
        p->info = x;
        p->next = head;
        p->prev = NULL;
        
        head = p;
        
        p->next->prev = p;
    }
}

void swap()
{
    node *q = head;
    int tem;
    while (q!=NULL && q->next!= NULL)
    {
        tem = q->info;
        q->info = q->next->info;
        q->next->info = tem;

        q= q->next->next;
        
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
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtbeg(3);
    insertAtbeg(4);
    insertAtbeg(5);
    display();
    cout<<endl;
    cout<<"After swaping"<<endl;
    swap();
    display();

    
}