#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *top = NULL;

void insertatbeg(int x)
{
    node *p = top;
    if(top == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        top = p;

    }
    else{
        p = new node;
        p->info = x;
        p->next = top;
        top = p;
    }
}


void deletebeg()
{
    node *q = top;
    if(top == NULL)
    {
        cout<<"List is emplty";
        return;
    }
    else if (top->next == NULL)
    {
        delete q;
        top = NULL;
    }
    else{
        top = top->next;
        delete q;
    }
    


}


void prin()
{
    node *q = top;
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q = q->next;
    }
    cout<<endl;
}


int main()
{
    insertatbeg(1);
    insertatbeg(2);
    insertatbeg(3);
    insertatbeg(4);
    prin();


    deletebeg();
    deletebeg();
    prin();
}