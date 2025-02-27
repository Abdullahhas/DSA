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

    void insertAtEnd(int x)
    {
        if(head == NULL)
        {
            p = new node;
            p->info = x;
            p->next = NULL;
            p->prev = NULL;
            head = p;
        }
        else
        {
            node *q = head;
            while (q->next!=NULL)
            {
                q  = q->next;
            }
            p = new node;
            p->info = x;
            p->next = NULL;
            p->prev = q;
            q->next = p;
            
        }
    }

    void insertAtpos(int x)
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
            node *q = head;
            while (q->next != NULL)
            {
                if(q->info == 4)
                {
                    
                    p = new node;
                    p->info = x;
                    p->next = q;
                    p->prev = q->prev;
                    p->prev->next = p; 
                    
                }
                q = q->next;
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
        display();
        insertAtEnd(4);
        insertAtEnd(5);
        insertAtEnd(6);
        display();
        insertAtpos(9);
        display();
    }