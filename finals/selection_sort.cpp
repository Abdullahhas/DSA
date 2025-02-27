#include<iostream>
using namespace std;
struct selection_sort
{
    int a[6] = {5,2,4,6,1,3};
};

selection_sort ar;

// void sort()
// {
//     int minj;
//     int minx;
//     for (int i = 0; i < 6-1; i++)
//     {
//         minj = i;
//         minx = ar.a[i];
//         for (int j = i+1; j<6; j++)
//         {
//             if(ar.a[j] < minx)
//             {
//                 minj = j;
//                 minx = ar.a[j];
//             }
//         }
//         ar.a[minj] = ar.a[i];
//         ar.a[i] = minx;
        
//     }
    
// }
void sort()
{
    int minj;
    int minx;
    for (int i = 0; i < 6-1; i++)
    {
        minj = i;
        minx  =ar.a[i];
        for (int j = i+1; j < 6; j++)
        {
            if(ar.a[j]<minx)
            {
            minj = j;
            minx = ar.a[j];
            }
        }
        ar.a[minj] = ar.a[i];
        ar.a[i] = minx;
        
    }
    
}
void print()
{
    for (int i = 0; i < 6; i++)
    {
        cout<<ar.a[i]<<" ";
    }
    cout<<endl;
    
}


int main()
{
    sort();
    print();
}
