#include<iostream>
using namespace std;

struct binary_search
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
};
binary_search b;

void search(int key)
{
    int lowest = 0;
    int highest = 10-1;
    
    while (lowest <= highest)
    {
        int middle = (lowest + highest) / 2;

        if(key == b.a[middle])
        {
            cout << key << " found at index " << middle << endl;
            return;
        }
        else if(key < b.a[middle])
        {
            highest = middle - 1;
        }
        else
        {
            lowest = middle + 1;
        }
    }

    cout << key << " not found." << endl;
}

int main()
{
    search(11);
    return 0;
}
