// #include<iostream>
// using namespace std;

// void swap(int *a , int  *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// int partion(int a[] , int low , int high)
// {
//     int pivot = a[low];
//     int i = low;
//     for (int j = low+1; j <= high; j++)
//     {
//         if( a[j]<pivot)
//         {
//             i++;
//             swap(&a[i] , &a[j]);

//         }
//     }

//     swap(&a[low] , &a[i]);
//     return i;
// }

// void quicksort(int a[] , int low , int high)
// {
//     if(low< high)
//     {
//         int pi = partion(a,low,high);

//         quicksort(a,low,pi-1);
//         quicksort(a,pi+1,high);

//     }

// }

// void printArray(int a[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << a[i] << " ";
//     cout << endl;
// }

// // Main function
// int main()
// {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Original array: ";
//     printArray(arr, n);

//     quicksort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     printArray(arr, n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// #define size 5
 
// void swap(int *a , int  *b)
// {
//     int t = *a;
//     *a  = *b;
//     *b = t;
// }

// void quicksort(int a[size] ,int low , int high)
// {
//     if(low<high)
//     {
//         int pivot = low;
//         int upper = high;
//         int lower = low;

//         while(lower< upper)
//         {
//             while(a[lower] <= a[pivot])
//             {
//                 lower++;
//             }
//             while(a[upper]>a[pivot])
//             {
//                 upper--;
//             }
//             if(upper>lower)
//             {
//                 swap(&a[upper] , &a[lower]);
//             }
//             swap(&a[pivot] , &a[upper]);
//         }

//         quicksort(a,low,upper-1);
//         quicksort(a,upper+1,high);
//     }
// }

// int main()
// {
//     int a[size] = {2,1,4,6,3};
//     quicksort(a,0,size-1);
//     for (int i = 0; i < size; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
    
// }
// int partion(int a[], int low , int high)
// {
//     int pivot = a[low];
//     int i = low;

//     for (int j = low+1; j <= high; j++)
//     {
//         if(a[j]<pivot)
//         {
//         i++;
//         swap(&a[i] , &a[j]);
//         }
//     }

//     swap(&a[low] , &a[i]);
//     return i;
    
// }

// void quicksort(int a[] , int low , int high)
// {
//     if(low<high)
//     {
//     int pi = partion(a,low,high);
//     quicksort(a,low,pi-1);
//     quicksort(a,pi+1,high);
//     }
    
// }

// void printarray(int a[] , int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
    
// }

// int main()
// {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quicksort(arr,0,n-1);

//     printarray(arr , n);
// }

#include<iostream>
using namespace std;
#define size 6

void swap(int *a , int *b)
{
    int tem  = *a;
    *a =*b;
    *b = tem;
}

void quickSort(int a[size] , int low , int high)
{
    if(low<high){
    int lower = low;
    int higher = high;
    int pivot = low;
    while(lower<higher)
    {
    while(a[lower]<= a[pivot])
    {
        lower++;
    }
    while(a[higher]>a[pivot])
    {
        higher--;
    }
    if(higher>lower)
    {
        swap(&a[higher] , &a[lower]);
    }
    swap(&a[pivot] , &a[higher]);
    }
    

quickSort(a,low,higher-1);
    quickSort(a,higher+1,high);

}



}

int main()
{
    int a[size] = {3,4,9,1,0,8};
    quickSort(a,0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    

}

// #include<iostream>
// using namespace std;
// #define size 5
 
// void swap(int *a , int  *b)
// {
//     int t = *a;
//     *a  = *b;
//     *b = t;
// }

// void quicksort(int a[size] ,int low , int high)
// {
//     if(low<high)
//     {
//         int pivot = low;
//         int upper = high;
//         int lower = low;

//         while(lower< upper)
//         {
//             while(a[lower] <= a[pivot])
//             {
//                 lower++;
//             }
//             while(a[upper]>a[pivot])
//             {
//                 upper--;
//             }
//             if(upper>lower)
//             {
//                 swap(&a[upper] , &a[lower]);
//             }
//             swap(&a[pivot] , &a[upper]);
//         }

//         quicksort(a,low,upper-1);
//         quicksort(a,upper+1,high);
//     }
// }
