/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main() { 
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int &x:a) cin>>x;
  sort(a,a+n);
  int res=0;
  int l=0;
  for(int r=1;r<n;r++){
     if(a[r]-a[l]<=k) res=max(res,r-l+1);
     else l++;
  }
  cout<<res;

}
