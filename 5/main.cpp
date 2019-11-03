#include <iostream>

using namespace std;

void put_snake(int** &a, int k, int s)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < s; j++)
            a[i][j] = 0;
    }
    a[0][s - 1] = 1;
    int c = 1, i = 0, j = s - 1;
    while (c < k * s)
    {
        while (j >= 1 && a[i][j - 1] == 0)
        {
            c++;
            j--;
            a[i][j] = c;
        }
        while (i + 1 < k && a[i + 1][j] == 0)
        {
            c++;
            i++;
            a[i][j] = c;
        }
        while (j + 1 < s && a[i][j + 1] == 0)
        {
            c++;
            j++;
            a[i][j] = c;
        }
        while (i >= 1 && a[i - 1][j] == 0)
        {
            c++;
            i--;
            a[i][j] = c;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int** Snake = new int*[n];
    for (int i = 0; i < n; i++)
        Snake[i] = new int[m];
    put_snake(Snake, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << Snake[i][j] << '\t';
        cout << '\n';
    }
    delete[]Snake;
    return 0;
}