#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
const int Mod=1e9+7;
ll f[100005],i,j;
int Bacthang(int n, int k) {
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        f[i] = 0;
        for (int j = 1; j <= min(i, k); j++) {
            f[i] = (f[i] + f[i - j]) % Mod;
        }
    }
    return f[n];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        cout<<Bacthang(n,k)<<endl;
    }
}