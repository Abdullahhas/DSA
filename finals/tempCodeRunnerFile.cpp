include<iostream>
// using namespace std;
// struct tree
// {
//     int a[10];

// };

// tree heap;
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
//         int tem;
//         int parent = (i-1)/2;
//         if(heap.a[parent] < heap.a[i])
//         {
//             tem = heap.a[parent];
//             heap.a[parent] = heap.a[i];
//             heap.a[i] = tem;
//             i = parent;
//         }else{
//             break;
//         }

//     }
    
// }

// void deleteheap()
// {
//     if(n<=0)
//     {
//         cout<<"Heap is empty";
//         return;
//     }

//     heap.a[0]= heap.a[n-1];
//     n = n-1;
//     int i = 0;
    
//     int max = i;
//     int tem;

//     while (true)
//     {
//         int left = 2*i+1;
//         int rig = 2*i+2;
//         if(left < n && heap.a[left] > heap.a[i])
//         {
//             max = left;
//         }
//         if(rig < n && heap.a[rig] > heap.a[i])
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
    


//  }

// // void print() {
// //      for (int i = 0; i < n; i++) {
// //         cout << heap.a[i] << " ";
// //     }
// //     cout << endl;
// // }

// // int main() {
// //     insert(10);
// //     insert(2);
// //     insert(3);
// //     insert(30);
// //     insert(22);
// //     print();
// //     cout<<endl;

// //     deleteheap();   
// //     print();
// //     cout<<endl;

// //     deleteheap();
// //     print();
// //     cout<<endl;

// //     deleteheap();
// //     print();
// //     cout<<endl;
// // }


