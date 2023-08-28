#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const int Mod=1e9+7;
ll PowerMod(ll a,ll b){
    if(b==0) return 1;
    ll x=PowerMod(a,b/2);
    if(b%2==0) return x*x%Mod;
    else return a*(x*x%Mod)%Mod;
}
ll rever(ll n){
    ll sum=0;
    ll m=n;
    while(n){
        sum=sum*10+n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    ll a;
    cin>>a;
    cout<<PowerMod(a,rever(a))<<endl;
    }
}