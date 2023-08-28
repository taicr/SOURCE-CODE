#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
ll conver(string s){
    ll res=0,j=0;
    int i=s.size()-1;
    while(i>=0){
        res+=(s[i]-'0')*pow(2,j);
        j++;
        i--;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<conver(s1)*conver(s2)<<endl;
    }
}