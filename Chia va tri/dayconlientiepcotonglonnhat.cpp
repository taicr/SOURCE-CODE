#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    run();
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int tong,maxx=-1e2;
       for(int i=0;i<n;i++){
           tong=0;
        for(int j=i;j<n;j++){
            tong+=a[j];
            maxx=max(tong,maxx);
           }
           
       }
       cout<<maxx<<endl;
    }
}