// #include<iostream>
// using namespace std;
// struct node
// {
//     int info;
//     node *next;
// };

// node *head = NULL;
// node *p = head;


// void insertAtbeg(int x)
// {
//     if(head==NULL)
// {
//     p = new node;
//     p->info = x;
//     p->next = NULL;
//     head = p;
// }
// else{
//     p = new node;
//     p->info = x;
//     p->next = head;
//     head = p;
// }
// }

// void deleteBeg()
// {
//     node *q = head;
//     if(head == NULL)
//     {
//         cout<<"NO node to delete";
//         return;
//     }
//     else if(head->next == NULL)
//     {
//         delete(q);
//         head = NULL;
//     }
//     else{
//         head = head->next;
//         delete(q);
//     }
// }


// void deleteAtEnd()
// {
//     node *q = head;
//     if(head==NULL)
//     {
//         cout<<"NO node to delete";
//         return;
    
//     }
//     else if(head->next == NULL)
//     {
        
//         delete(q);
//         head = NULL;
//     }
//     else{
//         while (q->next!=NULL)
//         {
//             p=q;
//             q = q->next;
//         }
//         p->next = NULL;
//         delete(q);
        

//     }

// }

// void deleteAtpos()
// {
//     node *q = head;
//     if(head==NULL)
//     {
//         cout<<"NO node to delete";
//         return;
    
//     }
//     else if(head->next == NULL)
//     {
        
//         delete(q);
//         head = NULL;
//     }
//     else{
//         while (q->next!=NULL)
//         {
//             if(q->info == 6)
//             {
//                 p->next = q->next;
//                 delete(q);
//                 break;
//             }
//             p=q;
//             q= q->next;
//         }
        
//     }
// }

// void display()
// {
//     node *q = head;
//     while (q!= NULL)
//     {
//         cout<<q->info;
//         q = q->next;
//     }
    
// }

// int main()
// {
//     insertAtbeg(1);
//     insertAtbeg(2);
//     insertAtbeg(3);
//     insertAtbeg(6);
//     insertAtbeg(9);
//     insertAtbeg(7);
//     display();
//     cout<<endl;
//     deleteBeg();
//     deleteAtEnd();
//     deleteAtpos();
//    display();
// }


// #include <iostream>
// using namespace std;

// struct node
// {
//     int info;
//     node *next;
// };

// node *head1 = NULL;
// node *p = head1;

// node *head2 = NULL;
// node *k = head2;

// void insertAtbeg1(int x)
// {
//     if (head1 == NULL)
//     {
//         p = new node;
//         p->info = x;
//         p->next = NULL;
//         head1 = p;
//     }
//     else
//     {
//         p = new node;
//         p->info = x;
//         p->next = head1;
//         head1 = p;
//     }
// }

// void insertAtbeg2(int x)
// {
//     if (head2 == NULL)
//     {
//         k = new node;
//         k->info = x;
//         k->next = NULL;
//         head2 = k;
//     }
//     else
//     {
//         k = new node;
//         k->info = x;
//         k->next = head2;
//         head2 = k;
//     }
// }

// int deleteBeg2()
// {
//     int a = -1; // Default value if list is empty
//     if (head2 == NULL)
//     {
//         cout << "NO node to delete";
//     }
//     else
//     {
//         node *q = head2;
//         a = q->info;
//         if (head2->next == NULL)
//         {
//             delete head2;
//             head2 = NULL;
//         }
//         else
//         {
//             head2 = head2->next;
//             delete q;
//         }
//     }
//     return a;
// }

// void emerge()
// {
//     int c;
//     node *q = head1;
//     while (head2 != NULL)
//     {
//         c = deleteBeg2();
//         while (q->next != NULL)
//         {
//             q = q->next;
//         }
//         node *z = new node;
//         z->info = c;
//         z->next = NULL;
//         q->next = z;
//     }
// }

// void print()
// {
//     node *a = head1;
//     while (a != NULL)
//     {
//         cout << a->info << " ";
//         a = a->next;
//     }
// }

// int main()
// {
//     insertAtbeg1(1);
//     insertAtbeg1(2);
//     insertAtbeg1(3);
//     print();
//     cout << endl;
//     insertAtbeg2(4);
//     insertAtbeg2(5);
//     insertAtbeg2(6);
//     print();
//     cout << endl;
//     emerge();
//     print();
//     cout << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// struct node
// {
//     int info;
//     node *next;
// };

// node *head1 = NULL;
// node *p = head1;

// node *head2 = NULL;
// node *k = head2;

// void insertAtbeg1(int x)
// {
//     if (head1 == NULL)
//     {
//         p = new node;
//         p->info = x;
//         p->next = NULL;
//         head1 = p;
//     }
//     else
//     {
//         p = new node;
//         p->info = x;
//         p->next = head1;
//         head1 = p;
//     }
// }

// void insertAtbeg2(int x)
// {
//     if (head2 == NULL)
//     {
//         k = new node;
//         k->info = x;
//         k->next = NULL;
//         head2 = k;
//     }
//     else
//     {
//         k = new node;
//         k->info = x;
//         k->next = head2;
//         head2 = k;
//     }
// }

// int deleteBeg2()
// {
//     int a = -1; // Default value if list is empty
//     if (head2 == NULL)
//     {
//         cout << "NO node to delete";
//     }
//     else
//     {
//         node *q = head2;
//         a = q->info;
//         if (head2->next == NULL)
//         {
//             delete head2;
//             head2 = NULL;
//         }
//         else
//         {
//             head2 = head2->next;
//             delete q;
//         }
//     }
//     return a;
// }

// void emerge()
// {
//     int c;
//     node *q = head1;
//     while (head2 != NULL)
//     {
//         c = deleteBeg2();
//         node *z = new node;
//         z->info = c;
//         z->next = q->next;
//         q->next = z;
//         q = z->next;
//     }
// }

// void print()
// {
//     node *a = head1;
//     while (a != NULL)
//     {
//         cout << a->info;
//         a = a->next;
//     }
// }

// void print2()
// {
//     node *a = head2;
//     while (a != NULL)
//     {
//         cout << a->info;
//         a = a->next;
//     }
// }

// int main()
// {
//     insertAtbeg1(3);
//     insertAtbeg1(2);
//     insertAtbeg1(1);
//     print();
//     cout << endl;
//     insertAtbeg2(6);
//     insertAtbeg2(5);
//     insertAtbeg2(4);
//     print2();
//     cout << endl;
//     emerge();
//     print();
//     return 0;
// }


#include<iostream>
using namespace std;

struct node
{
    int info;
    node *next;
};

node *head1 = NULL;
node *p = head1;

node *head2 = NULL;
node *k = head2;

void insertAtbeg1(int x)
{
    if (head1 == NULL)
    {
        p = new node;
        p->info = x;
        p->next = NULL;
        head1 = p;
    }
    else
    {
        p = new node;
        p->info = x;
        p->next = head1;
        head1 = p;
    }
}

void insertAtbeg2(int x)
{
    if (head2 == NULL)
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

int deleteBeg2()
{
    int a = -1;
    if (head2 == NULL)
    {
        cout << "NO node to delete";
    }
    else
    {
        node *q = head2;
        a = q->info;
        if (head2->next == NULL)
        {
            delete head2;
            head2 = NULL;
        }
        else
        {
            head2 = head2->next;
            delete q;
        }
    }
    return a;
}

void emerge()
{
    node *q = head1;
    node *temp;
    while (head2 != NULL)
    {
        temp = head2->next; // Store the next node of head2
        head2->next = q->next;
        q->next = head2;
        head2 = temp; // Move head2 to the next node
        if (q->next != NULL)
            q = q->next->next; // Move q to the next pair
    }
}

void print()
{
    node *a = head1;
    while (a != NULL)
    {
        cout << a->info;
        a = a->next;
    }
}

void print2()
{
    node *a = head2;
    while (a != NULL)
    {
        cout << a->info;
        a = a->next;
    }
}

int main()
{
    insertAtbeg1(3);
    insertAtbeg1(2);
    insertAtbeg1(1);
    print();
    cout << endl;
    insertAtbeg2(6);
    insertAtbeg2(5);
    insertAtbeg2(4);
    insertAtbeg2(8);
    print2();
    cout << endl;
    emerge();
    print();
    cout << endl;
    print2();
    cout << endl;
    cout << "hello";
    return 0;
}
