#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    sort(a,a+n);
    int res=0,cnt=0;
    int i=0;
    while(i<n){
        res+=a[i];
        if(res=>4 || res<4 && i==n-1){
            cnt++;
            res=res-4;
        }
        i++;
    }
    cout<<cnt;
}