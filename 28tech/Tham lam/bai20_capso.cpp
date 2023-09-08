#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    multiset<int> ms;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ms.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]%2==0 && a[j]%2==0 || abs(a[j]-a[i])==1 || a[i]%2!=0 && a[j]%2!=0 ){
                ms.erase(a[i]);
                ms.erase(a[j]);
                
            }
        }
    }
    if(ms.size()==0) cout<<"YES";
    else cout<<"NO";
}