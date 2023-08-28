#include<bits/stdc++.h>
using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
ll c[35][35];

int main(){
    int t;
    for(int i=0;i<=60;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j ) c[i][j]=1;
            else c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]);
        }
    }
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<c[2*n][n]/(n+1)<<endl;
    }
}
