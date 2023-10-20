/*
Cho mảng 2 chiều A gồm N hàng và N cột, hàng được đánh số từ 1 đến N từ trên xuống dưới,
 cột được đánh số từ 1 tới N từ trái sang phải, hãy tìm 1 đường đi từ một ô ở cột 1 tới 1 ổ ở cột N
  sao cho các phần tử trên đường đi đó là lớn nhất có thể. Biết rằng ở mỗi bước đi từ ô 
  hiện tại (i, j) chỉ có thể đi sang phải (i, j + 1) hoặc đi xuống ô dưới bên phải (i + 1, j + 1),
   ô bên trên bên phải(i - 1, j + 1). Hãy tìm 1 đường đi có tổng các số trên đường đi là lớn nhất.
*/
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
int f[105][105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[105][105];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int res = 0;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            f[i][j] = max({f[i - 1][j - 1], f[i + 1][j - 1], f[i][j - 1]}) + a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        res = max(res, f[i][n]);
    }
    cout<<res;
}