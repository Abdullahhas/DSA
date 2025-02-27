#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *head = NULL;
node *p = head;


 void sort() {
    node *p = head;
    node *q = head;
    int temp;

    while (p->next != NULL) {
        q = p->next;
        while (q->next != NULL) {
            if (p->info < q->info) {
                temp = p->info;
                p->info = q->info;
                q->info = temp;
            }
            q = q->next;
        }
        p = p->next;
    }
}

 void insertAtbeg(int x)
{
    if (head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head = p;
    }
    else
    {
        p = new node;
        p->info = x;
        p->next = head;
        head = p;
    }
}


void insertAtEnd(int x)
{
    node *q = head;

    if (head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head = p;
    }
    else
    {
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





void display()
{
    node *q = head;
   // cout<<"Elememts : ";
    cout<<endl;
    while (q!= NULL)
    {
        cout<<q->info;
        cout<<endl;
        q = q->next;
    }
    
}


int main()
{
    // insertAtbeg(9);
    // insertAtbeg(2);
    // insertAtbeg(1);
    // insertAtbeg(4);
    insertAtbeg(1);
    insertAtbeg(10);
    insertAtEnd(9);
    insertAtEnd(7);
    cout<<"Element before sorting:";
    display();
    cout<<endl;
   // reverse();
     sort();
     cout<<"Element after sorting:";
    display();
}