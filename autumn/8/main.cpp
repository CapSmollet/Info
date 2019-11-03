#include <iostream>

using namespace std;

int proper_fraction(int x)
{
    int ans = x;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            while (x % i == 0)
                x /= i;
            ans -= ans / i;
        }
    }
    if (x > 1)
        ans-= ans / x;
    return ans * 2;
}

int n;

int main() {
    cin >> n;
    cout << proper_fraction(n);
    return 0;
}