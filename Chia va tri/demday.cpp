#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const int Mod=1e9+7;
long long  PowerMod(int a,ll n){
    if(n==0) return 1;
    ll x=PowerMod(a,n/2);
    if(n%2==0) return x*x%Mod;
    else return  a* (x * x  ) %Mod;
}
int main(){
        ll k;
        cin>>k;
        cout<<PowerMod(2,k-1)<<endl;
}
