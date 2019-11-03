#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

void Trench(int** &a, int &k)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < k; j++)
        {
            a[i][j] = j - i;
            a[j][i] = j - i;
        }
    }
}

int main()
{
    cin >> n;
    int** dig_trench = new int*[n];
    for (int i = 0; i < n; i++)
        dig_trench[i] = new int[n];
    Trench(dig_trench, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << dig_trench[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
