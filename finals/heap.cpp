// #include<iostream>
// using namespace std;

// struct tree {
//     int a[20];
//     int front=-1;
//     int rear=-1;
//     int q[20];
// };

// tree heap;
// int n = 0;  

// void insert(int x) {
//     if(n >= 20) {
//         cout << "Heap is full" << endl;
//         return;
//     }

//     heap.a[n] = x;  
//     int i = n;
//     n = n + 1;

    
//     while (i > 0) {
//         int parent = (i - 1) / 2;
//         if (heap.a[parent] < heap.a[i]) {
//             int temp = heap.a[parent];
//             heap.a[parent] = heap.a[i];
//             heap.a[i] = temp;
//             i = parent;  
//         } else {
//             break;  
//         }
//     }
// }
// void enque(int x)
// {
//  if(heap.rear == 20-1)
//  {
//     cout<<"list is full";
//  }
//  else if(heap.front == -1 && heap.rear == -1)
//  {
//     heap.rear ++;
//     heap.front ++;
//  }
//  else{
//     heap.rear++;
    
//  }
//  heap.q[heap.rear] = x;
// }
// void deleteheap() {
//     if (n <= 0) {
//         cout << "Heap is empty" << endl;
//         return;
//     }
//     int deletedelement = heap.a[0];
//     heap.a[0] = heap.a[n - 1];
    
//     n = n - 1;
//     int i = 0;
//     int max = i;
//     int temp;

//     while (true) {
//         int left = 2 * i + 1;
//         int right = 2 * i + 2;
//         if (left < n && heap.a[left] > heap.a[max]) {
//             max = left;
//         }
//         if (right < n && heap.a[right] > heap.a[max]) {
//             max = right;
//         }
//         if (max != i) {
//             temp = heap.a[i];
//             heap.a[i] = heap.a[max];
//             heap.a[max] = temp;
//             i = max;
//         } else {
//             break;
//         }
//     }
//     enque(deletedelement);
// }



// void print() {
//     for (int i = 0; i < n; i++) {
//         cout << heap.a[i] << " ";
//     }
//     cout << endl;
// }

// void printqueue()
// {
//     for (int i = heap.front; i <= heap.rear; i++)
//     {
//         cout<<heap.q[i];
//     }
//     cout<<endl;
    
// }

// int main() {
//     insert(10);
//     insert(2);
//     insert(3);
//     insert(30);
//     insert(22);
//     print();  

//     deleteheap();
//     print(); 
//     printqueue();

//     deleteheap();
//     print();   
//     printqueue();

//     cout << "hello" << endl;
//     return 0;
// }



#include<iostream>
using namespace std;
struct tree
{
    int a[10];
    int stack[10];
    int top = -1;

};

tree heap;
int n = 0;

void insert(int x)
{
    if(n>=10)
{
    cout<<"Heap is full";
    return;
}
    heap.a[n] = x;
    int i = n;
    n = n+1;

    while (i>0)
    {
        int tem;
        int parent = (i-1)/2;
        if(heap.a[parent] < heap.a[i])
        {
            tem = heap.a[parent];
            heap.a[parent] = heap.a[i];
            heap.a[i] = tem;
            i = parent;
        }else{
            break;
        }

    }
    
}

void push(int x)
{
    if(heap.top == 10-1)
    {
        cout<<"Stack is full";
        return;
    }
    else{
        heap.top++;
        heap.stack[heap.top] = x;
    }
}

void deleteheap()
{
    if(n<=0)
    {
        cout<<"Heap is empty";
        return;
    }

    int deleele = heap.a[0];
    heap.a[0]= heap.a[n-1];
    n = n-1;
    int i = 0;
    
    int max = i;
    int tem;

    while (true)
    {
        int left = 2*i+1;
        int rig = 2*i+2;
        if(left < n && heap.a[left] > heap.a[max])
        {
            max = left;
        }
        if(rig < n && heap.a[rig] > heap.a[max])
        {
            max = rig;
        }
        if(max!=i)
        {
            tem = heap.a[i];
            heap.a[i] = heap.a[max];
            heap.a[max] = tem;
            i = max;
        }
        else{
            break;
        }
    }

    push(deleele);
    


 }

void print() {
     for (int i = 0; i < n; i++) {
        cout << heap.a[i] << " ";
    }
    cout << endl;
}

void prints()
{
    for (int i = heap.top; i >= 0; i--)
    {
        cout<<heap.stack[i]<<" ";
    }
    cout<<endl;
    
}

int main() {
    insert(10);
    insert(2);
    insert(3);
    insert(30);
    insert(22);
    print();
    cout<<endl;

    deleteheap();   
    print();
    prints();
    cout<<endl;
    

    deleteheap();
    print();
    prints();
    cout<<endl;
    

    deleteheap();
    print();
    prints();

    cout<<endl;
}


// #include<iostream>
// using namespace std;
// struct tree
// {
//     int a[10];
//     int stack[10];
//     int top = -1;
// };

// tree heap ;
// int n = 0;

// void insert(int x)
// {
//     if(n>=10)
// {
//     cout<<"Heap is full";
//     return;
// }
//     heap.a[n] = x;
//     int i = n;
//     n = n+1;
//     while (i>0)
//     {
//         int parent = (i-1)/2;
//         int tem;
//         if(heap.a[parent] < heap.a[i])
//         {
//             tem =  heap.a[parent];
//             heap.a[parent] = heap.a[i];
//             heap.a[i] = tem;
//             i = parent;
//         }
//         else{
//             break;
//         }
//     }
    
// }


// void push(int x)
// {
//     if(heap.top == 10-1)
//     {
//         cout<<"overflow";
//         return;
//     }
//     else{
//         heap.top++;
//         heap.stack[heap.top] = x;
//     }
// }
// void deleteheap()
// {
//     if(n<=0)
//     {
//         cout<<"Heap is emp";
//         return;
//     }

//     int del = heap.a[0];
//     heap.a[0] = heap.a[n-1];
//     int i = 0;
//     n = n-1;
//     int max = i;
//     int tem;

//     while (true)
//     {
//         int left = 2*i+1;
//         int rig = 2*i+2;
//         if(left<n && heap.a[left] > heap.a[max])
//         {
//             max = left;
//         }
//         if(rig< n && heap.a[rig] > heap.a[max])
//         {
//             max = rig;
//         }
//         if(max!=i)
//         {
//             tem = heap.a[i];
//             heap.a[i] = heap.a[max];
//             heap.a[max] = tem;
//             i = max;

//         }
//         else{
//             break;
//         }
//     }
   
//     push(del);
    
// }

// void prints()
// {
//      cout<<"Elements in Stack:"<<endl;
//     for (int i = heap.top; i >=0; i--)
//     {
//         cout<<heap.stack[i]<<" ";
//     }
//     cout<<endl;
    
// }

// void print()
// {
// for (int i = 0; i < n; i++)
// {
//     cout<<heap.a[i]<<" ";
// }
// cout<<endl;
// }


// int main()
// {
//     insert(10);
//     insert(2);
//     insert(3);
//     insert(30);
//     insert(22);
//     print();
//     cout<<endl;

//     deleteheap();
//     print();
//     prints();

//     cout<<endl;

//     deleteheap();
//     print();
//     prints();
//     cout<<endl;
//     deleteheap();
//     print();
//     prints();
//     cout<<endl;
// }   

