/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int f[105][105];
int a[105][104];
int main() { 
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             cin>>a[i][j];
        }    
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1) f[i][j]=a[i][j];
            else {
                f[i][j]=max(f[i][j+1],f[i+1][j+1],f[i-1][j+1])+a[i][j];
            }
        }
    }
    cout<<f[n][n];

}
