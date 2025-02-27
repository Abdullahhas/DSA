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

void product()
{
    int pro =1;
    while(p!=NULL)
    {
        pro = pro * p->info;
        p = p->next;
    }
    cout<<pro;
}

void sort()
{
    node *q = head;
   int tem;
    while(p!=NULL)
    {
        q = p->next;
        while (q!=NULL)
        {
            if(p->info < q->info)
            {
                tem =p->info;
                p->info = q->info;
                q->info = tem; 
            }
            q = q->next;
        }
        p = p->next;
        
    }

     cout<<p->info;
    while(q->next == NULL)
    {
        cout<<q->info;
    }
}
// void maxmin()
// {
//     node *q = head;
   
// }

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
    insertAtbeg(1);
    insertAtbeg(4);
    insertAtbeg(2);
    insertAtbeg(3);
    sort();
    display();
    //maxmin();
    
    //product();
}