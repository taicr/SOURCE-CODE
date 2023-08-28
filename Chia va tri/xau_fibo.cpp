#include <bits/stdc++.h>

using namespace std;

#define ll long long
ll f[100];
char Find(int n, ll k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k <= f[n - 2])
        return Find(n - 2, k);
    else
        return Find(n - 1, k - f[n - 2]);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        f[1] = 1;
        f[2] = 1;
        for (int i = 3; i <= 92; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
        }
        cout << Find(n, k) << endl;
    }
}