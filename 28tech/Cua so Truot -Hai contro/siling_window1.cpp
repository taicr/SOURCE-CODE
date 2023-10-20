/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
  int n,k;
  cin>>n>>k;
  int a[n+1];
  for(int i=1;i<=n;i++) cin>>a[i];
  ll sum=0;
  vector<int> cnt;
  vector<vector<int>> res;
  for(int i=1;i<=k;i++){
     sum+=a[i];
     cnt.push_back(a[i]);
  }
  res.push_back(cnt);
  for(int i=1;i<=k;i++) cnt.pop_back();
  int dem=1;
  ll ans=0;
  for(int i=k+1;i<=n;i++){
      sum=sum+a[i]-a[dem];
      dem++;
      if(sum>ans) {
        ans=sum;
        for(int j=dem;j<=i;j++){
            cnt.pb(a[j]);
        }
        res.pb(cnt);
        for(int j=dem;j<=i;j++){
            cnt.pop_back();
        }
      }
  }
   cout<<ans;
   cout<<endl;
     vector<int>& lastRow = res.back(); // Lấy hàng cuối cùng

    for (size_t i = 0; i < lastRow.size(); ++i) {
        cout << lastRow[i] << " ";
    }
   }
