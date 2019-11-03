#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, in;

void delete_duplicates(int* &a, int &k)
{
    int s = 0;
    bool d = false;
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (a[i] == a[j])
            {
                d = true;
                break;
            }
        }
        if (!d)
        {
            s++;
        }
        else
            d = false;
    }
    int* temp = new int[s];
    int it = 0;
    d = false;
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (a[i] == a[j])
            {
                d = true;
                break;
            }
        }
        if (!d)
        {
            temp[it++] = a[i];
        }
        else
            d = false;
    }
    delete[]a;
    a = temp;
    k = s;
}

int main()
{
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        arr[i] = in;
    }
    delete_duplicates(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}
