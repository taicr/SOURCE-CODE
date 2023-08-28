#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    run();
    string s; cin>>s;
    string res;
    char tmp=s[s.size()-1];
    for(int i=s.size()-1;i>=0;i--){
        tmp=max(s[i],tmp);
        if(s[i]==tmp) res+=tmp;
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
}