#include<iostream>
using namespace std;
void selectionsort(int a[6])
{
    for (int i = 0; i < 6; i++)
    {
        int minj = i;
        int minx = a[i];
        for (int j = i+1; j < 6 ; j++)
        {
            if(a[j] < minx)
            {
                minj = j;
                minx = a[j];
            }
        }
        a[minj] = a[i];
        a[i] = minx;
        
    }
    
}

void print(int p[6])
{
    for (int i = 0; i < 6; i++)
    {
        cout<<p[i]<<" ";
    }
    
}

int main()
{
    int a[6] = {5 ,2 ,4 , 6 ,1 ,3};
    cout<<"Before sorting:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    cout<<"After sorting:"<<endl;
    selectionsort(a);
    print(a);
}