#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

void build_ziggurat(int** &a, int &k)
{
    //Нужно построить зиккурат
    int help = 0;
    if (k % 2 != 0)
        help = 1;
    for (int i = 0; i < (k + help) / 2; i++)
    {
        for (int j = i; j < k - i; j++)
        {
            a[i][j] = 1 + i;
            a[k - 1 - i][j] = 1 + i;
            a[j][i] = 1 + i;
            a[j][k - 1 - i] = 1 + i;
        }
    }
    //Постройка завершена
}

int main()
{
    cin >> n;
    int **ziggurat = new int*[n];
    for (int i = 0; i < n; i++)
        ziggurat[i] = new int[n];
    build_ziggurat(ziggurat, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ziggurat[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
