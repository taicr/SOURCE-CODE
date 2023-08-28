#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const int mod=1e9 + 7;
/* int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll res=0;
    for(int i=0;i<n;i++){
      res+=(a[i]%mod)*(i%mod) %mod;
    }
    cout<<res;
} */
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    ll sum1=0,sum2=0;
    sort(a,a+n,greater<int>());
    k=max(k,n-k);
    vector<int> v1(a,a+k);
    vector<int> v2(a+k,a+n);
    for(auto x:v1) sum1+=x;
    for(auto y:v2) sum2+=y;
    cout<<max(sum1-sum2,sum2-sum1);
}