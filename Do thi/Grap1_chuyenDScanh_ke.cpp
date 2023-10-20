/* */
#include <bits/stdc++.h>

using namespace std;
#define run()                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2)
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define S second
#define F first
vector<int> ke[1004];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[y].pb(x);
        ke[x].pb(y);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        sort(ke[i].begin(), ke[i].end());
        for (auto x : ke[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
