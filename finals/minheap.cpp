#include<iostream>
using namespace std;

struct tree {
    int a[20];
    int front;
    int rear;
    int q[20];
};

tree heap;
int n = 0;  

void insert(int x) {
    if(n >= 20) {
        cout << "Heap is full" << endl;
        return;
    }

    heap.a[n] = x;  
    int i = n;
    n = n + 1;

    
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (heap.a[parent] > heap.a[i]) {
            int temp = heap.a[parent];
            heap.a[parent] = heap.a[i];
            heap.a[i] = temp;
            i = parent;  
        } else {
            break;  
        }
    }
}
void enque(int x)
{
 if(heap.front ==0 &&  heap.rear == 20-1)
 {
    cout<<"list is full";
    return;
 }
 else if(heap.front == -1 && heap.rear == -1)
 {
    heap.rear ++;
    heap.front ++;
    heap.q[heap.rear] = x;
 }
 else{
    heap.rear++;
    heap.q[heap.rear] = x;
 }
}
void deleteheap() {
    if (n <= 0) {
        cout << "Heap is empty" << endl;
        return;
    }
    int deletedelement = heap.a[0];
    heap.a[0] = heap.a[n - 1];
    
    n = n - 1;
    int i = 0;
    int min = i;
    int temp;

    while (true) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && heap.a[left] < heap.a[min]) {
            min = left;
        }
        if (right < n && heap.a[right] < heap.a[min]) {
            min = right;
        }
        if (min != i) {
            temp = heap.a[i];
            heap.a[i] = heap.a[min];
            heap.a[min] = temp;
            i = min;
        } else {
            break;
        }
    }
    enque(deletedelement);
}



void print() {
    for (int i = 0; i < n; i++) {
        cout << heap.a[i] << " ";
    }
    cout << endl;
}

void printqueue()
{
    cout<<"Deleted elements :"<<endl;
    for (int i = heap.front; i <= heap.rear; i++)
    {
        cout<<heap.q[i]<<" ";
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

    deleteheap();
    print(); 
    printqueue();

    deleteheap();
    print();   
    printqueue();

    cout << "hello" << endl;
    return 0;
}
