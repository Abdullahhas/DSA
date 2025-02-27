#include<iostream>
using namespace std;

struct node
{
    int info;
    node *next;
    node *pre;
};
node *head = NULL;
node *current = NULL;
node *temp = NULL;

void insert(int x)
 {
    node *p = head;    
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        p->pre = NULL; 
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
        p->pre = q; 
        q->next = p;
        
    }
 }

void reverse()
{
    node *temp = NULL; 
    node *current = head; 
    
    while (current != NULL)
    {   
        temp = current->pre;
        current->pre = current->next;
        current->next = temp;
        current = current->pre;
    }

    if(temp!=NULL)
    {
        head = temp->pre;
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
    insert(2);
    insert(3);
    print();
    cout<<endl;
    reverse();
    print();
    return 0;
}
