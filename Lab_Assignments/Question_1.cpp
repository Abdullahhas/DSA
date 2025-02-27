#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *head1  =NULL;
node *p = head1;

node *head2  =NULL;
node *k = head2;

void insertAtbeg1(int x)
{
    if(head1 == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head1 = p;
    }
    else{
        p = new node;
        p->info = x;
        p->next = head1;
        head1 = p;
    }
}

void insertAtbeg2(int x)
{
    if(head2 == NULL)
    {
        k = new node;
        k->info = x;
        k->next = NULL;
        head2 = k;
    }
    else{
        k = new node;
        k->info = x;
        k->next = head2;
        head2 = k;
    }
}


void emerge() {
    while (p != NULL && k != NULL) {
        node *temp = k->next; 
        k->next = p->next; 
        p->next = k;
        p = k->next; 
        k = temp; 
    }
    head2 = k; 
}

void print()
{
    node *a = head1;
    while (a!=NULL)
    {
        cout<<a->info;
        a = a->next;
    }
    
}

void print2()
{
    node *a = head2;
    while (a!=NULL)
    {
        cout<<a->info;
        a = a->next;
    }
    
}

int main()
{
    
    insertAtbeg1(3);
    insertAtbeg1(2);
    insertAtbeg1(1);
    insertAtbeg1(0);
    cout<<"List 1:"<<endl;
    print();
    cout<<endl;
    insertAtbeg2(6);
    insertAtbeg2(5);
    insertAtbeg2(4);
    insertAtbeg2(8);
    insertAtbeg2(9);
    cout<<"List 2:"<<endl;
    print2();
    cout<<endl;
    
    emerge();
    cout<<"After merge:"<<endl;
    print();
    cout<<endl;
    cout<<"List 2 contains:"<<endl;
    print2();
    cout<<endl;
    
}



