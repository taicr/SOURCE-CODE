#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    int dem=0;
   
    for(auto it = mp.begin(); it != mp.end(); ++it){
		
}
    cout<<dem<<endl;
}