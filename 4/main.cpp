#include <iostream>

using namespace std;

void dig_trench(int** &a, int &k)
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
    int n;
    cin >> n;
    int** Trench = new int*[n];
    for (int i = 0; i < n; i++)
        Trench[i] = new int[n];
    dig_trench(Trench, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << Trench[i][j] << ' ';
        cout << '\n';
    }
    delete[]Trench;
    return 0;
}
