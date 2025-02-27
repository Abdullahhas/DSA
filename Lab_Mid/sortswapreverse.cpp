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

void sort()
{
    node *q  =head;
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

void swap()
{
    node *q = p->next;
    int tem;
    while (p!=NULL && q!= NULL)
    {
        tem = p->info;
        p->info = q->info;
        q->info = tem;

        p = q->next;
        if(p!=NULL)
        {
            q = p->next;
        }
    }
    

}

void reverse()
{
    node *current = head;
    node *pre = NULL;
    node *next = NULL;
    while (current!=NULL)
    {
        next = current->next;
        current->next = pre;
        pre = current;
        current = next;
    }
    head = pre;
    
}

void display()
{
    node *q =head;
    while (q!=NULL)
    {
        cout<<q->info;
        q = q->next;
    }
    
}

int main()
{
    insertAtbeg(3);
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtbeg(5);
    display();
    cout<<endl;
    //sort();
   // swap();
   reverse();
    display();
}