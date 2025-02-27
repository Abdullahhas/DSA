#include<iostream>
using namespace std;
 struct node
 {
    int info;
    node *next;
 };

 node *head1 = NULL;
 node *head2 = NULL;

 
 

 void insert1(int x)
 {
    node *p = head1;    
    if(head1 == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head1 = p;
    }
    else{
        node *q = head1;
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



 void insert2(int x)
 {
    node *k = head2;
    if(head2 == NULL)
    {
        k = new node;
        k->info = x;
        k->next = NULL;
        head2 = k;
    }
    else{
        node *q = head2;
        while (q->next!=NULL)
        {
            q  = q->next;
        }
        k = new node;
        k->info = x;
        k->next = NULL;
        q->next = k;
        
    }
 }


 

void print2()
 {
    node *q  =head2;
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q = q->next;
    }
    cout<<endl;
    
 }


 

 void alternatepos()
 {
    node *p = head1;
    node *k = head2;
    while (p!=NULL && k!=NULL)
    {
        node *tem  = k->next;
        k->next = p->next;
        p->next = k;
        p = k->next;
        k  = tem;
    }
    head2 = k;
    
 }
void print1()
 {
    node *q  =head1;
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q = q->next;
    }
    cout<<endl;
    
 }

 
//  void merge()
//  {
//     node *q = head1;
//     while (q->next != NULL)
//     {
//         q  =q ->next;
//     }
//     q->next = head2;
    
//  }

int main()
{
    cout<<"LIst 1:"<<endl;
    insert1(1);
    insert1(2);
    insert1(3);
    
    print1();
    cout<<endl;
cout<<"LIst 2:"<<endl;
    insert2(5);
    insert2(6);
    insert2(7);
    insert2(4);
    print2();
    cout<<endl;

// cout<<"Merge list becomes:";
//     merge();
//     print1();
//     cout<<endl;


    alternatepos();
    print1();

    cout<<"List 2:";
    print2();

}


 

 