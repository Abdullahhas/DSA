#include <iostream>
using namespace std;
void sum()
{
    int a[] = {1, 2, 3, 4, 5, 6, 8};
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    cout << "Sum is:" << sum;
}

void freq()
{
    int count = 0;
    int a[] = {2, 3, 4, 1, 2};
    int n;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Frequency is:" << count;
    }
}

void multiply()
{
    int a[2][2] = {{1, 2}, {4, 5}};
    int b[2][2] = {{2, 3}, {1, 2}};
    int sum[2][2] = {{0, 0}, {0, 0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

void Max()
{
    int a[10] = {18, 1, 4, 5, 8, 3, 9, 10, 32, 17};
    int max = a[0];
    int sec_max = a[0];
    int min = a[0];
    int sec_min = a[0];
    int thr_min = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int j = 0; j < 10; j++)
    {
        if (a[j] > sec_max && a[j] < max)
        {
            sec_max = a[j];
        }
    }

    cout << sec_max;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (int j = 0; j < 10; j++)
    {
        if (a[j] < sec_min && a[j] > min)
        {
            sec_min = a[j];
        }
    }

    for (int z = 0; z < 10; z++)
    {
        if (a[z] < thr_min && a[z] > min && a[z] > sec_min)
        {
            thr_min = a[z];
        }
    }
    cout << thr_min;
}
int main()
{
    int i;
    cin >> i;
    switch (i)
    {
    case 1:
        sum();
        break;
    case 2:
        freq();
        break;
    case 3:
        multiply();
        break;
    case 4:
        Max();
        break;

    default:
        break;
    }
}