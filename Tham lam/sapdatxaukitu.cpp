#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    run();
    int t;
    cin>>t;
    while(t--){
        int d; cin>>d;
        string s; cin>>s;
        int cnt[256]={0};
        int res=0;
        for(int i=0;i<s.size();i++){
            cnt[s[i]]++;
            if(cnt[s[i]]>res) res=cnt[s[i]];
        }
        if((res-1)*(d-1)>(s.size()-res)) cout<<"-1"<<endl;
        else cout<<"1"<<endl;
    }
}