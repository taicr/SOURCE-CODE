/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007

int cnt;
void solve(string str, int idx)
{
    if(idx>=str.size()){
        cnt++; return;
    }
    if(str[idx]=='0') return;
    int tmp=str[idx]-'0';
    if(idx<str.size()-1){
        tmp=tmp*10+str[idx+1]-'0';
        if(tmp<=26){
            solve(str, idx+2);
        }
    }
    if(str[idx+1]!='0'){
        solve(str, idx+1);
    }
    return;
}

int main() { 
    int t;
    cin>>t;
    while(t--){
        string str; cin>>str;
        cnt=0;
        solve(str, 0);
        cout<<cnt<<"\n";
    }

}
