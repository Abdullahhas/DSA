#include<iostream>
using namespace std;
 struct node
 {
    int info;
    node *next;
    node *prev;
   
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
            p->prev = NULL;
            head = p;
        }
        else{
            p = new node;
            p->info = x;
            p->next = head;
            p->prev = NULL;
            p->next->prev = p;
            head = p;
        }
    }

    void deleteAtbeg()
    {
       
        if(head == NULL)
        {
            cout<<"No node to delete";
            return;
        }
        else if(head->next == NULL)
        {
            delete(p);
            head = NULL;
        }
        else{
            head = p->next;
            p->next->prev = head;
            delete(p);
        }
    }

    void deleteAtEnd()
    {
        node *p = head;
        if(head == NULL)
        {
            cout<<"No node to delete";
            return;
        }
        else if(head->next == NULL)
        {
            delete(p);  
            head = NULL;
        }
        else{
            while (p->next!=NULL)
            {
               p = p->next;
                
            }
            p->prev->next = NULL;
            delete(p);
            
        }
    }


    void deletePos()
    {
        node *p = head;
        if(head == NULL)
        {
            cout<<"No node to delete";
            return;
        }
       else if (head->next == NULL)
       {
        delete(p);
        head = head->next;
       }
       else{
        while (p->next!=NULL)
        {
            if(p->info == 6)
            {
                p->prev->next = p->next;
                p->next->prev = p->prev;
                delete(p);
                break;
            }
            p = p->next;
        }
        
       }
       
    }


void display()
    {
        node *q = head;
        while (q!= NULL)

        {
            cout<<q->info<<" ";
            q = q->next;    
        }
        cout<<endl;
        
    }
    int main()
    {
        insertAtbeg(1);
        insertAtbeg(2);
        insertAtbeg(3);
        insertAtbeg(6);
        insertAtbeg(5);
        insertAtbeg(7);

        display();
        deleteAtbeg();
        display();
        deleteAtEnd();
        display();
        deletePos();
        display();
    }