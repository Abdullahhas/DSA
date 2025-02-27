#include<iostream>
using namespace std;

struct QueueUsingStacks
{
    int stack1[5];
    int stack2[5];
    int top1 = -1;  
    int top2 = -1;  
};

QueueUsingStacks q;


void push1(int size, int value)
{
    if (q.top1 == size - 1)
    {
        cout << "Stack 1 Overflow";
        return;
    }
    else
    {
        q.top1++;
        q.stack1[q.top1] = value;
    }
}


int pop1()
{
    if (q.top1 == -1)
    {
        cout << "Stack 1 Underflow";
        return -1; 
    }
    else
    {
        int temp = q.stack1[q.top1];
        q.top1--;
        return temp;
    }
}


void push2(int size, int value)
{
    if (q.top2 == size - 1)
    {
        cout << "Stack 2 Overflow";
        return;
    }
    else
    {
        q.top2++;
        q.stack2[q.top2] = value;
    }
}


int pop2()
{
    if (q.top2 == -1)
    {
        cout << "Stack 2 Underflow";
        return -1; 
    }
    else
    {
        int temp = q.stack2[q.top2];
        q.top2--;
        return temp;
    }
}
int count = 0;
void enque(int size, int value)
{
    push1(size,value);
    count++;

}
void deque()
{
    if(q.top1 == -1 && q.top2 == -1)
    {
        cout<<"queue is empty";
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            int a = pop1();
            push2(5,a);
        }
        int b = pop2();
        
        count--;
        cout<<"Dequed elements:";
        cout<<b<<endl;
        while (q.top2 != -1)
        {
            int c = pop2();
            push1(5,c);
        }
        
        
        
        
    }
}

void display()
{
    for (int i = 0; i <= q.top1; i++)
    {
        cout<<q.stack1[i];
    }
}

int main()
{
    enque(5,1);
    enque(5,2);
    enque(5,3);
    enque(5,4);
    enque(5,5);
    
    deque();
    deque();
    deque();
    deque();
   
    display();
}