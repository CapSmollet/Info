#include <iostream>

using namespace std;

int strange_multiply(int x, int y)
{
    if (y == 0)
    {
        return 0;
    }
    if (y % 2 != 0)
    {
        return strange_multiply(x, y - 1) + x;
    }
    else
    {
        int t = strange_multiply(x, y / 2);
        return t + t;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << strange_multiply(max(a, b), min(a, b));
    return 0;
}