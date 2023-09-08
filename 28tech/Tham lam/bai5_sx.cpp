#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++){
     if(a[i]!=b[i] && a[i]!=b[n-i-1]){
        cout<<"NO";
        return 0;
     }
    }
    cout<<"YES";

}