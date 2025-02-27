#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *top = NULL;
node *p = top;
void push(int x)
{
    if(top==NULL)
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

void pop()
{
    node *q = top;
    if(top==NULL)
    {
        cout<<"List is empty";
        return;
    }
    else if (top->next == NULL)
    {
        delete(q);
        top = NULL;
    }
    else
    {
       top= top->next;
       delete(q); 
    }
}
void display()
{
    node *q = top;
    if(top==NULL)
    {
        cout<<"LIst is empty";
    }
    else{
        while (q!=NULL)
        {
            cout<<q->info;
            q= q->next;
        }
        
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    display();   
}