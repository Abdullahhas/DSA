#include<iostream>
using namespace std;
struct insertion_sort
{
    int a[6] = {5,2,4,6,1,3};
};

insertion_sort ar;

// void sort()
// {
//     int tem;
//     int j;
//     for (int i = 1; i < 6; i++)
//     {
//         tem = ar.a[i];
//         j = i-1;
//         while (j>=0 && tem<ar.a[j])
//         {
//             ar.a[j+1] = ar.a[j];
//             j--;
//         }
//         ar.a[j+1]= tem;
        
//     }

    
    
// }

void sort()
{
    int tem;
    int j;
    for (int i = 1; i < 6; i++)
    {
        tem = ar.a[i];
        j= i-1;
        while (j>=0 && tem<ar.a[j])
        {
            ar.a[j+1] = ar.a[j];
            j--;
        }
        ar.a[j+1] = tem;
        
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