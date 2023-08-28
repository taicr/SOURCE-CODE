#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
ll k;
int n;
int check(int n,ll k){
  if(k==pow(2,n-1)) return n;
  if(k<pow(2,n-1)){

    return check(n-1,k);
  }
  else return check(n-1,k-pow(2,n-1));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<check(n,k)<<endl;
    }
}