#include<iostream>
using namespace std;
void Quickysort(int a[6], int size, int start,  int p, int end, int up, int down)
{
    if(start > end){
        return;
    }
    int pVal = a[p];
        while (!(a[down]>pVal))
        {
            down++;
        }
        while (!(a[up]<=pVal))
        {
            up--;
        }
    
        if(up>down)
        {
            int temp = a[down];
            a[down] = a[up]; 
            a[up] = temp;
            Quickysort(a, size, start, p, end, up, down);

        }
        else{
            int temp = a[start];
            a[start] = a[end]; 
            a[end] = temp;
            Quickysort(a, p++, 0, 0, p--, p--, 0);
            Quickysort(a, size-1, p++, end-1, end-1, p++);
        }
}

int main()
{
    int ar[6] = {25,57,48,37,12,92};
    int p = 0;
    int size = 6;
    int end = 5;
    int up = size-1;
    int down = p;
    Quickysort(ar, size, 0,  p, end, up, down);
    for(int v : ar){
        cout << v << " ";
    }
    return 0;
}   