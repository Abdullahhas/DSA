#include<iostream>
using namespace std;
struct node
{
    int info ;
    node *next;

};
node *head = NULL;
node *p = head;

void insertAtbeg(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info =x;
        p->next = NULL;
        head = p;
    }
    else{
        p = new node;
        p->info =x;
        p->next = head;
        head = p;
    }
}

void insertAtEnd(int x)
{
     if(head == NULL)
    {
        p = new node;
        p->info =x;
        p->next = NULL;
        head = p;
    }
    else{
        node *q = head;
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

void insertAtPos(int x)
{
    node *q = head;
     if(head == NULL)
    {
        p = new node;
        p->info =x;
        p->next = NULL;
        head = p;
    }
    else{
        while (q->next!= NULL)
        {
            if(q->info == 2)
            {
                p = new node;
                p->info = x;
                p->next = q->next;
                q->next =p;
            }
            q = q->next;
        }
        
    }
}

void deleteAtBeg()
{
    node *q;
    if(head==NULL)
    {
        cout<<"No node to be delete";
        return;
    }
    else if(head->next == NULL){
        delete(q);
        head = NULL;
    }

    else{
        head = head->next;
        delete(q);
    }
}


void deleteEnd()
{
    node *q = head;
    if(head==NULL)
    {
        cout<<"No node to be delete";
        return;
    }
    else if(head->next == NULL){
        delete(q);
        head = NULL;
    }
    else
    {
        while (q->next!=NULL)
        {
            p = q;
            q= q->next;
        }
        p->next = NULL;
        delete(q);
        
        
    }

}


void deleteAtPos()
{
    node *q = head;
    if(head==NULL)
    {
        cout<<"No node to be delete";
        return;
    }
    else if(head->next == NULL){
        delete(q);
        head = NULL;
    }
    else{
        while (q->next != NULL)
        {
            if(q->info == 1)
            {
                p->next = q->next;
                delete(q);
                break;

            }
            p=q;
            q = q->next;
        }
        
    }
}

void cinsertAtbeg(int x)
{
    node *q = head;
    if(head == NULL)
    {
         p = new node;
         p->info = x;
         head = p;
         p->next = head;
         
    }
    else
    {
        while (q->next != head)
        {
            q = q->next;
        }
        
        p = new node;
        p->info = x;
        p->next = head;
        head = p;
        q->next = head;
    }
}

void cirInsertAtEnd(int x)
{
    node *q = head;
    if(head == NULL)
    {
         p = new node;
         p->info = x;
         head = p;
         p->next = head;
         
    }
    else
    {
        while (q->next != head)
        {
            q = q->next;
        }
        p = new node;
        p->info = x;
        q->next = p;
        p->next = head;
    }
}


void cirdeleteAtbeg()
{
    node *q = head;
    node *z = head;
    if(head == NULL)
    {
        cout<<"NO node to delete";
        return;
    }
    else if(head->next == head)
    {
        delete(q);
        head = NULL;
    }
    else{
        while (z->next != head)
        {
            z = z->next;
        }
        head = head->next;
        delete(q);
        z->next = head;
        
    }

}

void cirdeleteATEnd()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"NO node to delete";
        return;
    }
    else if(head->next == head)
    {
        delete(q);
        head = NULL;
    }
    else
    {
        while (q->next != head)
        {
            p = q;
            q = q->next;
        }
        delete(q);
        p->next = head;
        
    }
}


void cirdisplay()
{
    node *q = head;
    do
    {
        cout<<q->info;
        q = q->next;
    } while (q != head);
    
   
    
    
}
void display()
{
    node *q = head;
    while (q!=NULL)
    {
        cout<<q->info;
        q= q->next;
    }
    
}

int main()
{
    // insertAtbeg(1);
    // insertAtbeg(2);
    // insertAtbeg(3);
    // insertAtEnd(4);
    // insertAtEnd(5);
    // insertAtEnd(6);
    // insertAtPos(9);
    // display();

    // cout<<endl;

    // deleteAtBeg();
    // deleteAtBeg();
    //  display();
    // cout<<endl;

    // deleteEnd();
    // deleteEnd();
    //  display();
    // cout<<endl;
    // deleteAtPos();
    // display();


    cinsertAtbeg(1);
    cinsertAtbeg(2);
    cinsertAtbeg(3);
    cirdisplay();
    cout<<endl;
    cirInsertAtEnd(4);
    cirInsertAtEnd(5);
    cirInsertAtEnd(6);
    cirdisplay();
    cout<<endl;
    cirdeleteAtbeg();
    cirdeleteAtbeg();
    cirdisplay();
    cout<<endl;
    cirdeleteATEnd();
    cirdeleteATEnd();
    cirdisplay();
    

    

}