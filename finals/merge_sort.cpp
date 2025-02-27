// #include<iostream>
// using namespace std;
// struct merge_sort
// {
//     int a[7] = {12,8,9,3,11,5,4};
// };

// merge_sort ar;

// void merge(int a[] , int left , int middle , int right)
// {
//     int n1 = middle - left+1;
//     int n2 = right - middle;

//     int l[n1];
//     int r[n2];


//     for (int i = 0; i < n1; i++)
//     {
//         l[i] = a[left+i];  
//     }
//     for (int j = 0; j < n2; j++)
//     {
//         r[j] = a[middle+1+j]; 
//     }

//     // Merge the temporary arrays back into arr[left..right]
//     int i = 0; // Initial index of first subarray
//     int j = 0; // Initial index of second subarray
//     int k = left; // Initial index of merged subarray

//     while (i < n1 && j < n2) {
//         if (l[i] <= r[j]) {
//             a[k] = l[i];
//             i++;
//         } else {
//             a[k] = r[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy the remaining elements of l[], if there are any
//     while (i < n1) {
//         a[k] = l[i];
//         i++;
//         k++;
//     }

//     // Copy the remaining elements of r[], if there are any
//     while (j < n2) {
//         a[k] = r[j];
//         j++;
//         k++;
//     }
    
     
// }

// void mergeSort(int a[] , int left , int right)
// {
//     if(left>=right)
//     {
//         return;
//     }
//     int mid = left+(right-left)/2;
//     mergeSort(a,left , mid);
//     mergeSort(a,mid+1 , right);
//     merge(a,left , mid , right);
// }

// int main() {
//     cout << "Given array: ";
//     for (int i = 0; i < 7; i++)
//         cout << ar.a[i] << " ";
//     cout << endl;

//     mergeSort(ar.a, 0, 6);

//     cout << "Sorted array: ";
//     for (int i = 0; i < 7; i++)
//         cout << ar.a[i] << " ";
//     cout << endl;

//     return 0;
// }


#include<iostream>
using namespace std;
struct merge_sort
{
    int a[7] = {12,8,9,3,11,5,4};
 
};

merge_sort ar;

void merge(int a[] , int left ,int mid ,int right)
{
    int n1 = mid-left+1;
    int n2 = right-mid;

    int l[n1];
    int r[n2];

    for (int i = 0; i < n1; i++)
    {
        l[i] = a[left+i];
    }
    for (int j = 0; j < n2; j++)
    {
        r[j] = a[mid+j+1];
    }
    int i=0;
    int j=0;
    int k=left;

    while (i<n1 &&j<n2)
    {
        if(l[i]<r[j])
        {
            a[k] = l[i];
            i++;
        }
        else{
            a[k] = r[j];
            j++;
        }
        k++;
    }

    while (i<n1)
    {
        a[k] = l[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        a[k] = r[j];
        j++;
        k++;
    }
    
    
    
    
    
}

// void merge(int a[] , int left , int midlle, int right)
// {
//     int n1 = midlle - left+1;
//     int n2 = right - midlle;

//     int l[n1];
//     int r[n2];

//     for (int i = 0; i < n1; i++)
//     {
//         l[i] =  a[left+i];
//     }
//     for (int j = 0; j < n2; j++)
//     {
//         r[j] = a[midlle+1+j];
//     }

//     int i = 0;
//     int j = 0;
//     int k = left;

//     while (i<n1 && j<n2)
//     {
//         if(l[i] < r[j])
//         {
//             a[k] = l[i];
//             i++;
//         }
//         else
//         {
//             a[k] = r[j];
//             j++;
//         }
//         k++;
//     }
    
//     while (i<n1)
//     {
//         a[k] = l[i];
//         i++;
//         k++;
//     }

//     while (j<n2)
//     {
//         a[k] = r[j];
//         j++;
//         k++;
//     }
    


    
    
    
//}

void mergesort(int a[] , int left , int right)
{
     if(left>=right)
    {
        return;
    }
    int mid = left+(right-left)/2;

    mergesort(a , left , mid);
    mergesort(a ,mid+1,right );
    merge(a,left , mid ,right);
}

 int main() {
    cout << "Given array: ";
    for (int i = 0; i < 7; i++)
        cout << ar.a[i] << " ";
    cout << endl;

    mergesort(ar.a, 0, 6);

    cout << "Sorted array: ";
    for (int i = 0; i < 7; i++)
        cout << ar.a[i] << " ";
    cout << endl;

    return 0;
}
