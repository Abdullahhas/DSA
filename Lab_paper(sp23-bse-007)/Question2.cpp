#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *head = NULL;
node *p = head;

void insertAtEnd(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info =x;
        head = p;
        p->next = head;
    }
    else{
        node *q = head;
        while (q->next!= head)
        {
            q = q->next;
        }
        p = new node;
        p->info = x;
        p->next = head;
        q->next = p;
        
    }
}

void display()
{
    node *q = head;
    do
    {
        cout<<q->info;
        q = q->next;
    } while (q!=head);
    
    
}
int main()
{
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    display();
}