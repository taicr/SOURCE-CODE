#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int> mp;

        for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        }
       sort(a,a+n);
        int out=a[n-1]-a[0]+1;
       int dem=0;
        for(auto it: mp){
        int key=it.first;
        dem++;
         }
        cout<<out-dem<<endl;

    }
}