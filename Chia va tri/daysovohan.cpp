#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int Find(int n,ll k){
    if(k==pow(2,n-1)) return n;
    if(k<pow(2,n-1)) return Find(n-1,k);
    else return Find(n-1,k-pow(2,n-1));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        cout<<Find(n,k)<<endl;
    }
}