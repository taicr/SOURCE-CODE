/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
 int L[1000];
int main() { 
 int n;
 cin>>n;    
 int a[n];
 for(int i=0;i<n;i++ ) cin>>a[i];
 int res=0;
 for(int i=0;i<n;i++){
    L[i]=a[i];
    for(int j=0;j<i;j++){
        if(a[i]>a[j]) L[i]=max(L[i],L[j]+a[i]);
    }
    res=max(L[i],res);
 }
 cout<<res<<endl;

}
