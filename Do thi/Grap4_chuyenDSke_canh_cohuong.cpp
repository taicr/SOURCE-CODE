/*
Cho đồ thị có hướng G = được biểu diễn dưới dạng danh sách kề. 
Hãy chuyển đổi đồ thị dưới dạng danh sách kề này sang danh sách cạnh tương ứng.

Input Format

Dòng đầu tiên là số nguyên dương n, tương ứng với số đỉnh của đồ thị. N dòng tiếp theo mỗi
 dòng chứa nhiều số nguyên, dòng thứ i tương ứng với các đỉnh trong danh sách kề của đỉnh i.

Constraints

1<=n<=1000;

Output Format

In ra các cạnh trong đồ thị trên từng dòng, các cạnh được liệt kê tăng dần.
*/
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
multiset<int> ms;
void solve(int i, string s)
{
    stringstream ss(s);
    string tmp;
    vector<int> v;
    while (ss >> tmp)
    {
        int j = stoi(tmp);
        v.pb(j);
    }
    sort(v.begin(), v.end());
    for (auto j : v)
        cout << i << " " << j << endl;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        solve(i, s);
    }
}
