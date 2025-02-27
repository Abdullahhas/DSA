// #include<iostream>
// using namespace std;
// struct tree
// {
//     int a[20];
// }heap;

// //tree *heap = NULL;
// int n = 0;

// void insert(int x)
// {
//     if(n>=20)
//     {
//         cout<<"Heap is full";
//     }
//     n = n+1;
//     heap.a[n] = x;
//     int i = n;
//     int tem;
//     while (i>1)
//     {
//         int parent = i/2;
//         if(heap.a[parent] < heap.a[i])
//         {
//             tem = heap.a[parent];
//             heap.a[parent] = heap.a[i];
//             heap.a[i] = tem;
//             i = parent;

//         }
//         else {
//             break;
//         }
//     }
    
// }


// void deleteheap()
// {
//     int i = 1;
//     heap.a[i] = heap.a[n];
//     n--;

//     int tem;
//     while (i<=n) {
//         int left = (2*i);
//         int right = (2*i+1);
//         int max =i;
		
// 		if(left <= n && heap.a[left] > heap.a[i])
//         {
//             max = left;
//         }
//         if(right <= n && heap.a[right] > heap.a[i])
//         {
//             max = right;
//         }
        
//         if(max!=i)
//         {
//             tem = heap.a[i];
//             heap.a[i] = heap.a[max];
//             heap.a[max] = tem;
//             i = max;
//         }
//         else 
//         {
//             return;
//         }
//     }
    
// }

// void print()
// {
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<heap.a[i]<<" ";
//     }
// 	cout<<endl;

// }


// int main() {
//     cout<<"hello";
//     insert(1);
//     insert(20);
// 	insert(13);
// 	insert(30);
//     insert(3);
//     print();
//     deleteheap();
//     print();
//     deleteheap();
//     print();
	
    
//     return 0;
// }

#include<iostream>
using namespace std;
struct tree
{
    int a[20];
};

tree heap ;
int n = 0;

void insert(int x)
{
    if(n>20)
    {
        cout<<"Heap is full";

    }
    n = n+1;
    heap.a[n] = x;
    int i = n;
    while (i>0)
    {
        int parent = (i)/2;
        int tem;
        if(heap.a[parent] < heap.a[i])
        {
            tem = heap.a[parent];
            heap.a[parent] = heap.a[i];
            heap.a[i] = parent;
            i = parent;
        }
        else 
        {
            break;
        }
    }
    
}

void print()
{
    for (int i = 1; i <= n; i++)
    {
        cout<<heap.a[i]<<" ";
    }
    
}

int main()
{
    
    //cout<<"hello";
    insert(1);
    insert(20);
	insert(13);
	insert(30);
    print();
}