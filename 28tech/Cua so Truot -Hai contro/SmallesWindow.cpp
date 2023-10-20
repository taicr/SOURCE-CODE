/*
Cho xâu S chỉ gồm chữ cái in thường, nhiệm vụ của bạn là tìm chiều dài của xâu con liên tiếp
 nhỏ nhất có chứa đầy đủ các kí tự khác nhau của S. Ví dụ S = abcaaaabcad thì xâu con bcad
 có độ dài nhỏ nhất và chứa đầy đủ các kí tự khác nhau của S.
*/
#include <bits/stdc++.h>

using namespace std;
#define run()                        \
  ios_base ::sync_with_stdio(false); \
  cin.tie(NULL);                     \
  cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2)
#define pb push_back

int main()
{
 int t;
 cin>>t;
 while(t--){
    string s;
  cin >> s;
  map<char, int> mp;
  for (char x : s)
  {
    mp[x]++;
  }
  int n = mp.size();
  int cnt[256] = {0};
  int l = 0, dem = 0, ans = INT_MAX;
  for (int r = 0; r < s.size(); r++)
  {
    cnt[s[r]]++;
    if (cnt[s[r]] == 1)
      dem++;
    if (dem == n)
    {
      while (cnt[s[l]] > 1)
      {
        cnt[s[l]]--;
        l++;
      }
          ans = min(ans, r - l + 1);
    }
  
  }
  cout << ans<<endl;
 }
}
