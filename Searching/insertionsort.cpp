#include<iostream>
using namespace std;
void sort()
{
    int a[10] = {3,2,5,7,1,9,-4,6,9,10};
    int tem;
    int j;

    cout<<"Before Sorting:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    

    for (int i = 1; i < 10; i++)
    {
        tem = a[i];
        j = i-1;
        while ((j>=0) && tem<a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tem;
        
    }
    cout<<endl;
    cout<<"After sorting:"<<endl;
    for (int k = 0; k < 10; k++)
    {
        cout<<a[k] << " ";
    }

    
    
    
}

int main()
{

    
    sort();
    
}