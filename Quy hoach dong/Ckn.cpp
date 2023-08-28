#include <bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int c[1005][1005];
const int Mod=1e9+7;

int main(){
    int t;
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j ) c[i][j]=1;
            else c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % Mod;
        }
    }
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<c[n][k]<<endl;
    }
}
