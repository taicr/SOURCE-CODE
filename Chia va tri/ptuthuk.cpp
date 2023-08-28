#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n,k;
        cin>>m>>n>>k;
        int a[m+n];
        for(int i=0;i<n+m;i++){
            cin>>a[i];
        }
        sort(a,a+m+n);
        cout<<a[k-1]<<endl;
    }
}