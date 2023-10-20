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

int main()
{
	run();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		int res = 1;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0)
			{
				if (a[i] <= res)
					res = a[i] + 1;
				else
					break;
			}
		}
		cout << res << endl;
	}
}
