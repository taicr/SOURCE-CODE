#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int n,m;
int a[1000][1000];
int cnt=0;
void Try(int i,int j){
    if(i==n && j==m){
        cnt++;
    }
    if(i+1<=n && j<=m) Try(i+1,j);
    if(i<=n && j+1<=m) Try(i,j+1);
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    Try(1,1);
    cout<<cnt;
}