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
    node *q = head;
    int tem;
    while (p != NULL)
    {
        q = p->next;
        while (q != NULL)
        {
            if(p->info < q->info)
            {
           tem = p->info;
           p->info =q->info;
           q->info = tem;
            }
            q = q->next;
        }
        p = p->next;
        
        
    }
    
}




void swap2()
{
    node *p = head;
    node *q = p->next;
    int temp;

    while (p != NULL && q != NULL)
    {
        temp = p->info;
        p->info = q->info;
        q->info = temp;

        p = q->next;
        if (p != NULL)
            q = p->next;
    }
}


void reverse()
{
    node *current = head;
    node *prev = NULL;
    node *next = NULL;
    while (current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    
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
    insertAtbeg(4);
    insertAtbeg(1);
    insertAtbeg(9);
    insertAtbeg(2);
    insertAtbeg(6);
    display();
    cout<<endl;
    // sort();
    // display();
    // cout<<endl;
    // swap2();
    // display();
    // cout<<endl;
    reverse();
    display();
}