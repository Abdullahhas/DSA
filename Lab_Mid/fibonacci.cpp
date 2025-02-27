// #include<iostream>
// using namespace std;
// struct fibonacci
// {
//     int stack1[30];
//     int stack2[30];
//     int top2 = -1;
//     int top1 = -1;
//    // char postfix[50];
    
// };

// fibonacci s;

//  void push(int x)
//  {
//     if(s.top1 == 30-1)
//     {
//         cout<<"Overflow";
//         return;
//     }
//     else{
//         s.top1++;
//         s.stack1[s.top1] = x;
//     }
//  }

//  void push2(int x)
//  {
//     if(s.top2 == 30-1)
//     {
//         cout<<"Overflow";
//         return;
//     }
//     else{
//         s.top2++;
//         s.stack2[s.top2] = x;
//     }
//  }



//  int pop()
//  {
//     if(s.top1 == -1)
//     {
//         cout<<"Underflow";
//         return '\0';
//     }
//     else{
//         int tem = s.stack1[s.top1];
//         s.top1--;
//         return tem;
//     }
//  }

// //  void fib()
// //  {
   
    
// //     int n;
// //     int b = 1;
// //     cout<<"enter no:";
// //     cin>>n;
// //      int a = 0;
// //     int c =0;
// //     for(int i = 1 ; i<=n; i++)
// //     {
// //         push(a);
// //          c = a+b;
// //         a=b;
// //         b=c;
        
// //     }
    
    

// //  }


// // void fib(int n)
// // {
// //     push(0);
// //     push(1);
// //     for (int i = 3; i <= n; i++)
// //     {
// //         int a = pop();
// //         int b = pop();
// //         int next = a+b;
// //         push(b);
// //         push(a);
// //         push(next);
// //     }
   
    
// // }

// void balanced(const char *a)
// {
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         if(a[i] == '(' || a[i] == '{' || a[i]=='[')
//         {
//             push(a[i]);
//         }
//         else if((a[i] == ')' || a[i] == '}' || a[i]==']') && s.top == -1 )
//         {
//             cout<<"Stack is empty";
//             return;
//         }
//         else if((a[i] == ')' || a[i] == '}' || a[i]==']') && s.top!=-1)
//         {
//             int c = pop();
//             if((c=='(' && a[i] == ')') || (c=='[' && a[i] == ']') || (c=='{' && a[i] == '}') );
//             else{
//                 return;
//             }
//         }
//     }
//     if(s.top== -1)
//     {
//         cout<<"Balanced";

//     }
//     else{
//         cout<<"Not balanced";
//     }
    
// }



// //  void display()
// //  {
// //     for (int i = 0; i <= s.top; i++)
// //     {
// //         cout<<s.stack[i];
// //     }
    
// //  }

// // int prcedence(char c)
// // {
// //     if(c == '/' || c == '*' || c=='%')
// //     {
// //         return 2;
// //     }
// //     else if(c=='+' || c=='-')
// //     {
// //         return 1;
// //     }
// //     else{
// //         return 0;
// //     }
// // }
// //  void infixtopostfix(const char *a)
// //  {
// //     int y = 0;
// //     for (int i = 0; a[i] != '\0'; i++)
// //     {
        
// //         if(a[i] >= 'a' && a[i]<= 'z')
// //         {
// //             s.postfix[y] = a[i];
// //             y++;
// //         }
// //         else if(a[i] == '(')
// //         {
// //             push(a[i]);
// //         }
// //         else if(a[i] == ')')
// //         {
// //             while (s.stack[s.top] != '(')
// //             {
// //                 s.postfix[y] = pop();
// //                 y++;
// //             }
// //             pop();
            
// //         }
// //         else{
// //             while (s.top != -1 && (prcedence(s.stack[s.top]) >= prcedence(a[i]))) 
// //             {
// //                 s.postfix[y] = pop();
// //                 y++;
// //             }
// //             push(a[i]);
            
// //         }

// //     }
// //     while (s.top != -1)
// //     {
// //         s.postfix[y] = pop();
// //         y++;
// //     }

// //     for (int j = 0; j < y; j++) {
// //         cout << s.postfix[j];
// //     }
// //     cout << endl;
    
    
// //  }



// // void postfixEval(const char *a)
// // {
// //     for (int i = 0; a[i] != '\0'; i++)
// //     {
            
// //     if(a[i] >= '0' && a[i]<='9')
// //     {
// //         push(a[i]-'0');
// //     }
// //     else if(a[i] =='+' || a[i] == '-' || a[i] == '*' || a[i] == '/')
// //     {
// //         int operand2 = pop();
// //         int operand1 = pop();
// //         int res;
// //         switch (a[i])
// //         {
        
        
// //                 case '+':
// //                     res = operand1 + operand2;
// //                     break;
// //                 case '-':
// //                     res = operand1 - operand2;
// //                     break;
// //                 case '*':
// //                     res = operand1 * operand2;
// //                     break;
// //                 case '/':
// //                     if(operand2 != 0)
// //                         res = operand1 / operand2;
// //                     else
// //                     {
// //                         cout << "Error: Division by zero";
// //                         return;
                        
// //                     }
// //                     break;
// //                 default:
// //                     break;
// //             }
// //             push(a[i]);
// //     }
// //     }
// //     if(s.top ==0 )
// //     {
// //         cout<<s.stack[s.top];
// //     }
// //     else{
// //         cout<<"Invalid exp";
// //     }

// //     }


// // void sort()
// // {
// //     int tem;
// //     while (s.top1!= -1)
// //     {
// //         tem = pop();
// //         if(s.top2 == -1 || s.stack2[s.top2]>tem )
// //         {
// //             push2(tem);
// //         }
// //         else{
// //             while (s.top2 != -1 && s.stack2[s.top2] < tem)
// //             {
// //                 push(s.stack2[s.top2]);
// //                 s.top2--;
// //             }
// //             push2(tem);
            
// //         }
// //     }
    
// // }

// // void display()
// // {
// //     sort();

// //     cout << "Stack elements after sorting: ";
// //     for (int i = s.top2; i >= 0; i--)
// //     {
// //         cout << s.stack2[i] << " ";
// //     }
// //     cout << endl;
// // }


// // void reverse()
// // {
// //     int tem;
// //     int a;
// //     for (int i = 0; i < s.top1; i++)
// //     {
// //         tem = pop();
// //         a = s.stack1[i];
// //         push(a);
// //         s.stack1[i] = tem;
// //         //s.top1--;


        
// //     }
    
    
// // }

// // void display()
// // {
// //     for (int i = s.top1; i >= 0 ; i--)
// //     {
// //         /* code */cout<<s.stack1[i];
// //     }
    
// // }
// int main()
// {
//     // fib(7);
//     // display();
//     //display();

//    balanced("({[]}");

//    //infixtopostfix("a-(b+c/d-(e+f*g)-h)");

//    //postfixEval("562+*24/-");

// //    push(3);
// //    push(9);
// //    push(1);
// //    push(6);
// //    reverse();
// //    cout << "Stack elements before sorting: ";
// //     for (int i = s.top1; i >= 0; i--)
// //     {
// //         cout << s.stack1[i] << " ";
// //     }
// //     cout << endl;

//    // display();



// }

// #include<iostream>
// using namespace std;

// struct Queuepractice
// {
//     int queu[5];
//     int front = -1;
//     int rear = -1;
// };
// Queuepractice q;

// void enque(int x)
// {
//     if(q.front == 0 && q.rear == 5-1)
//     {
//         cout<<"Overflow";
//         return;
//     }
//     else if(q.front == -1 && q.rear == -1)
//     {
//         q.front++;
//         q.rear++;
//         q.queu[q.rear] = x;
//     }
//     else{
//         q.rear = (q.rear + 1) % 5;
//         q.queu[q.rear] = x;
//     }
// }

// int deque()
// {
//     if(q.front == -1 && q.rear == -1)
//     {
//         cout<<"Underflow";
//         return -1;
//     }
//     else if(q.front == q.rear)
//     {
//         int tem = q.queu[q.front];
//         q.front = -1;
//         q.rear = -1;
//         return tem;
//     }
//     else{
//         int tem = q.queu[q.front];
//         q.front = (q.front + 1) % 5;
//         return tem;
//     }
// }

// void fib(int n)
// {
//     enque(0);
//     enque(1);
//     cout << "Fibonacci Series:" << endl;
//     cout << "0 ";
//     cout << "1 ";
//     for (int i = 3; i <= n; i++)
//     {
//         int a = deque();
//         int b = deque();
//         int next = a + b;
//         enque(b);
//         enque(next);
//         cout << next << " ";
//     }
// }

// int main()
// {
//     fib(5); 
//     return 0;
// }


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

void sort()
{
    node *q  =head;
    int tem;
    while (p!=NULL)
    {
        q = p->next;
        while (q!=NULL)
        {
            if(p->info<q->info)
            {
            tem = p->info;
            p->info = q->info;
            q->info = tem;
            }
            q = q->next;
        }
        p = p->next;
    }
    
}

void deleteduplicate()
{
    node *p = head;
    node *q;
    while(p != NULL && p->next != NULL)
    {
        q = p;
        while(q->next != NULL)
        {
            if(p->info == q->next->info)
            {
                node *temp = q->next;
                q->next = q->next->next;
                delete temp;
            }
            else
            {
                q = q->next;
            }
        }
        p = p->next;
    }
}
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
    insertAtbeg(1);
    insertAtbeg(2);
    insertAtbeg(5);
    display();
    cout<<endl;
    sort();
    display();
    cout<<endl;
    deleteduplicate();
    display();
    
}




// node *q = head;
// node *p = head;
// node *temp;
// while(p!=NULL)
// {
//     q = p->next ;
//     while(q!=NULL)
//     {
//         if(p->info == q->info)
//         {
//             temp = q->info;
//            p->next = q->next;
//             delete(temp);
//         }
//          q = q->next;
        
//     }
//     p = p->next;
// }