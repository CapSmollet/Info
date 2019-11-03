#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int n, in;

bool prime_check(int x)
{
    if (x == 1 || x == 0)
        return false;
    if (x == 2)
        return true;
    for (int i = 2; i < sqrt(x) + 1; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

void delete_annoying_primes(int* &a, int &k)
{
    int s = 0;
    bool d = false;
    for (int i = 0; i < k; i++)
    {
        if (prime_check(a[i]))
        {
            for (int j = 0; j < k; j++)
            {
                if (a[i] == a[j] && i != j)
                {
                    d = true;
                    break;
                }
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
    int it= 0;
    d = false;
    for (int i = 0; i < k; i++)
    {
        if (prime_check(a[i]))
        {
            for (int j = 0; j < k; j++)
            {
                if (a[i] == a[j] && i != j)
                {
                    d = true;
                    break;
                }
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
    delete_annoying_primes(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}
