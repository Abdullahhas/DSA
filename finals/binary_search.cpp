#include<iostream>
using namespace std;
struct binary_search
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
};

binary_search arr;
void search(int x)
{
    int low = 0;
    int high = 10-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(x == arr.a[mid])
        {
            cout << x << " found at index " << mid << endl;
            return;
        }
        else if(x>arr.a[mid])
        {
           low = mid+1;
        }
        else if(x<arr.a[mid])
        {
            high = mid-1;
        }

    }
    cout<<x<<" NOt found ";
    
}

int main()
{
    search(8);
    cout<<endl;
    search(11);

}


