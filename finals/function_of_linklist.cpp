// #include<iostream>
// using namespace std;

// struct node
// {
//     int info;
//     node *next;
//     node *prev;


// };

// node *head = NULL;

// void insertbeg(int x)
//  {
//     node *p = head;
//     if(head == NULL)
//     {
//         p =new node;
//         p->info = x;
//         p->next = NULL;
//         p->prev = NULL;
//         head = p;
//     }
//     else{
//         p = new node;
//         p->info = x;
//         p->prev = NULL;
//         p->next = head;
//         head = p;
//         p->next->prev = p;
        
//     }
//  }


//  void sort()
//  {
//     node *q = head;
//     node *p = head;
//     int tem;
//     while ( p!=NULL )
//     {
       
//         //another
//         q = p->next;
//         while (q!=NULL)
//         {
//             if(q->info>p->info)
//             {
//                 tem = q->info;
//                 q->info = p->info;
//                 p->info = tem; 
//             }
//             q  = q->next;
//         }
//         p = p->next;
        
//     }
    
//  }

//  void pairswap()
//  {
//     node *p = head;
//     while (p!=NULL && p->next!=NULL)
//     {
//         int tem;
//         tem = p->info;
//         p->info = p->next->info;
//         p->next->info = tem;
//          p = p->next->next;
//     }
   
    
//  }



//  void print()
//  {
//     node *q  =head;
//     while (q!=NULL)
//     {
//         cout<<q->info<<" ";
//         q = q->next;
//     }
    
//  }


//  int main()
//  {
//     insertbeg(5);
//     insertbeg(6);
//     insertbeg(6);
//     insertbeg(4);
//     sort();
//     print();
//     cout<<endl;

//     pairswap();
//     print();
//     cout<<endl;


//     deleteduplicate();
//     print();
//  }


#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
    node *prev;
};

node *head  =NULL;

void insert(int x)
{
    node *p = head;
    if(head == NULL)
    {
        p =new node;
        p->info =x;
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

void insertr(int x)
{
    
    node *p = head;
    if(head == NULL)
    {
        p =new node;
        p->info = x;
        p->next = NULL;
        p->prev = NULL;
        head = p;
    }
    else
    {
        node *q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
         p =new node;
         p->info = x;
         p->next = NULL;
         p->prev = q;
         p->prev->next = p;
        
    }
}


void sort()
{
    node *p = head;
    node *q = head;
    while (p!=NULL)
    {
        q  = p->next;
        while (q!=NULL)
        {
            if(q->info<p->info)
            {
                int tem = q->info;
                q->info = p->info;
                p->info = tem;
            }
            q = q->next;
        }
        p= p->next;
        
    }
    
}


void pairswap()
{
    node *p = head;
    while (p!=NULL && p->next!=NULL)
    {
        int tem = p->info;
        p->info = p->next->info;
        p->next->info = tem;
        p = p->next->next;
    }
    
}

void reverse()
{
    node *p = head;
    node *tem = NULL;
    while (p!=NULL)
    {
         tem = p->prev;
        p->prev = p->next;
        p->next = tem;
        p = p->prev;
    }

    if(tem!=NULL)
    {
        head  =tem->prev;
    }
    
}


void deltedubli()
{
    node *p = head;
    node *q ;
    while (p!=NULL && p->next!=NULL)

    {
        q = p;
        while (q->next!=NULL)
        {
            if(p->info == q->next->info)
            {
                node* tem = q->next;
                q->next = q->next->next;
                delete tem;
            }
            else{
                q  =q->next;
            }
        }
        p = p->next;
        
    }
    
}


    int isprime(int x)
    {
        if(x<=1)
        {
            return 0;
        }
        else{
            for (int i = 2; i < x; i++)
            {
                if(x%i == 0)
                {
                    return 0;
                }
            }
            
        }
        return 1;
    }
    void deleteprime()
    {

    node *p  = head;
    node *q = head;
    while (q!=NULL)
    {
        if(isprime(q->info))
        {
            if(p == NULL)
            {
                head = q->next;
                delete q;
                q = head;
            }
            else{
                p->next=q->next;
                delete q;
                q=p->next;
            }
        }
        else{
            p=q;
            q = q->next;
        }

    }
    
}
void print()
{
    node *q = head;
    
    while (q!=NULL)
    {
        cout<<q->info<<" ";
        q  = q->next;
    }
    cout<<endl;
    
}

int main()
{
    // insert(1);
    // insert(7);
    // insert(6);
    // insert(4);
    // sort();
    

    // print();

    // cout<<endl;
    // pairswap();
    // print();

    cout<<endl;


//     insertr(1);
//     insertr(7);
//     insertr(6);
//     insertr(4);
//     reverse();
//     print();
// cout<<endl;

    // insert(1);
    // insert(2);
    // insert(1);
    // insert(3);
    // insert(4);
    // insert(3);
    // deltedubli();
    // print();


    insert(1);
    insert(7);
    insert(6);
    insert(4);
    deleteprime();
    print();
}