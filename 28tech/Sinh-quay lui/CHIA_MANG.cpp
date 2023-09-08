#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
ll a[100],n,k,check=0;
ll sum=0;
vector<ll> tmp;
vector<vector<ll>> res;
void Try(int i,ll tong){
    if(res.size()==k){
        check=1;
        return;
    }
    for(int j=i;j<n;j++){
        tong+=a[j];
        tmp.push_back(a[j]);
        if(tong==sum){
            res.push_back(tmp);
        }
        else if(tong<sum) Try(j+1,tong);
        tong-=a[j];
        tmp.pop_back();
    }
}
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++) {
    cin>>a[i];
    sum+=a[i];
  }
  check=0;
  if(sum%k!=0){
     cout<<"0\n";
     return 0;
  }
  sum/=k;
  Try(0,0);
  cout<<check;
}