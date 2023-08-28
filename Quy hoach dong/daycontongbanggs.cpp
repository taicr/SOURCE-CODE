#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int solve(int a[],int n,int s){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==s){
                    return 1;
                }
            }
        }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(solve(a,n,s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}