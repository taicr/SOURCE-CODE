#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    string s;
    cin>>s;
    map<char,int> mp;

    int n=s.size();
    int l=0,r=0;
    int ans=1;
    for(int r=0;r<n;r++){
       mp[s[r]]++;
       if(mp[s[r]>1]){
        mp[s[l++]]--;
       }
       ans=max(ans,r-l+1);   
    }

}