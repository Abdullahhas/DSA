#include <iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};

node *head = NULL;
node *head1 = NULL;
node *p = head;
node *z = head1;
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

// void insertAtbegone(int x)
// {
//     if (head1 == NULL)
//     {
//         z = new node;
//         z->info = x;
//         z->next = NULL;
//         head1 = z;
//     }
//     else
//     {
//         z = new node;
//         z->info = x;
//         z->next = head1;
//         head1 = z;
//     }
// }

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
        p->next = head1;
        q->next = p;
    }
}

void insertAtPos(int x)
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
        while (q != NULL)
        {
            if (q->info == 6)
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

// void sort()
// {
//     //int a[] = {6,2,3,4,5};
//      node *q = head;
//      while (q->next != NULL)
//      {
//         q = q->next;
//      }

//      for (int i = p->info; i < q ; i++)
//      {
//          for (int j = i+1; j < 5 ; j++)
//          {
//              if(p->info<q->info )
//              {
//                  temp = a[j];
//                  a[j] = a[i];
//                   a[i] = temp;
//              }
//          }

//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<a[i];
//     }
// }

void display()
{
    node *q = head;
    while (q != NULL)
    {
        cout << q->info;
        q = q->next;
    }
}

int main()
{
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtEnd(6);
    insertAtEnd(8);
   // insertAtbeg(22);
    //insertAtbegone(3);
    //insertAtbegone(4);
    insertAtPos(9);
    display();
}