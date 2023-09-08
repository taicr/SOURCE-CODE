#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n,greater<int>());
    sort(b,b+n,greater<int>());
    int i=0;
    ll sum=0;
    while(i<n){
     sum+=1ll*a[i]*b[i];
     i++;
    }
    cout<<sum;
}