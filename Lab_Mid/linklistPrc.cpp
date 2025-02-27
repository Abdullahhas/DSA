#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *head= NULL;
node*head2 = NULL;
node *p = head;
node *k = head2;

void insertAtbeg(int x)
{
    if(head == NULL)
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

void insertAtbeg2(int x)
{
    if(head2 == NULL)
    {
        k = new node;
        k->info = x;
        k->next = NULL;
        head2 = k;
    }
    else
    {
        k = new node;
        k->info = x;
        k->next = head2;
        head2 = k;
    }
}

void merge()
{
    node *q =head;
    while (q->next != NULL)
    {
        q =q->next;
    }
    q->next = head2;
    
}

void insertAtEnd(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info = x;
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

void insertAtpos(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head = p;
    }
    else{
        node *q = head;
        while (q->next != NULL)
        {
            if(q->info == 3)
            {
            p = new node;
            p->info = x;
            p->next = q->next;
            q->next = p;
            }
            q = q->next;
        }
        
    }
}


void deletebeg()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"no node to delete";
        return;
    }
    else if(head->next== NULL)
    {
        delete(q);
        head = NULL;
    }
    else{
        head  = head->next;
        delete(q);
    }


}

void deleteEnd()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"no node to delete";
        return;
    }
    else if(head->next== NULL)
    {
        delete(q);
        head = NULL;
    }
    else{
        while (q->next != NULL)
        {
            p = q;
            q = q->next;
            
        }
        p->next = NULL;
        delete(q);        
    }
}

void deleteAtpos()
{
    node *q = head;
    if(head == NULL)
    {
        cout<<"no node to delete";
        return;
    }
    else if(head->next== NULL)
    {
        delete(q);
        head = NULL;
    }
    else{
        while (q->next!= NULL)
        {
            if(q->info == 3)
            {
                p->next = q->next;
                delete(q);
                break;
            }
            p = q;
            q = q->next;
        }
        
    }
}



void cirinsertbeg(int x)
{
    if(head == NULL)
    {
        p = new node;
        p->info = x;
        head = p;
        p->next = head;
    }
    else{
        node *q = head;
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

void cirinsertEnd(int x)
{
    node *q = head;
     if(head == NULL)
    {
        p = new node;
        p->info = x;
        head = p;
        p->next = head;
    }
    else{
        while (q->next != head)
        {
            q = q->next;
        }
        p = new node;
        p->info = x;
        p->next = head;
        q->next = p;
        
    }
}


void cirdeletbeg()
{
    node *q = head;
    node *z = head;
    if(head == NULL)
    {
        cout<<"No node to delete";
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

void cirdeleteEnd()
{
    node *q = head;

     if(head == NULL)
    {
        cout<<"No node to delete";
        return;
    }
    else if(head->next == head)
    {
        delete(q);
        head = NULL;
    }
    else{
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
    } while (q!=head);
    
}

void sort()
{
    node *q = head;
    node *p = head;
    int temp;
    while (p->next!= NULL)
    {
        q = p->next;
        while (q-> next!= NULL)
        {
        if (p->info < q->info) {
                temp = p->info;
                p->info = q->info;
                q->info = temp;
            }
            q =q->next;
            
            
        }
        p = p->next;
    }
    
    
    
}


// void sort()

// {
//     node *q = head;
//     node *p = head;
//     int tem;
//     while (p->next != NULL)
//     {
//         q = p->next;
//         while (q->next != NULL)
//         {
//             if(p->info<q->info)
//             {
//                 tem = p->info;
//                 p->info = q->info;
//                 q->info = tem;
//             }
//             q = q->next;
//         }
//         p = p->next;
        
//     }
    
// }
 void display2()
{

    //sort();
    node *q = head2;
    while (q!= NULL)
    {
        cout<<q->info;
        q = q->next;
    }
    
}


   



// void swap()
// {
//     node *p = head;
//     node *q = head->next;
//     int temp;
//     while (p != NULL && q != NULL)
//     {
//         // Swap the data of current and next nodes
//         temp = p->info;
//         p->info = q->info;
//         q->info = temp;

//         // Move to the next pair of nodes
//         p = q->next;
//         if (p != NULL)
//             q = p->next;
//     }
// }

void swap()
{
    node *q = head->next;
    int tem ;
    while (p!= NULL && q!= NULL)
    {
        tem = p->info;
        p->info = q->info;
        q->info = tem;
         p = q->next;
         while (p!=NULL)
         {
            q = p->next;
         }
         
    }
    
}
void display()
{
    node *q = head;
    while (q != NULL)
    {
        cout << q->info << " ";
        q = q->next;
    }
    cout << endl;
}

int main()
{
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtbeg(6);
    insertAtbeg(3);
    sort();

    // swap();
    display2();

    // display();
    // cout<<endl;
    // insertAtbeg2(4);
    // insertAtbeg2(5);
    // insertAtbeg2(7);
    // insertAtbeg2(9);
    // display2();

    // cout<<endl;
    // merge();
    // display();
    // cout<<endl;
    // insertAtEnd(3);
    // insertAtEnd(4);
    // display();
    // cout<<endl;
    // insertAtpos(9);
    // display();
    // cout<<endl;
    // deletebeg();
    // display();
    // cout<<endl;
    // deleteEnd();
    // display();
    // cout<<endl;
    // deleteAtpos();
    // display();

    // cirinsertbeg(1);
    // cirinsertbeg(2);
    // cirdisplay();
    // cout<<endl;
    // cirinsertEnd(3);
    // cirinsertEnd(4);
    // cirdisplay();
    // cout<<endl;
    // cirdeletbeg();
    // cirdisplay();
    // cout<<endl;
    // cirdeleteEnd();
    // cirdisplay();
          
}