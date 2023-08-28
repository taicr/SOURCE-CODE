#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int final=0;
string s;
int n;

void ktao(){
    s=string(n,'6');
}
void sinh(){
    int i=n-1;
    while(i>=0 && s[i]=='8') {
        s[i]=='6';
        i--;
    }
    if(i<0) final =1;
    else s[i]='8';
}
int main(){
   
    int t;
    cin>>t;
    while(t--){
        vector<ll> v;
        for(int i=1;i<=10;i++){
            n=i;
            ktao();
            final=0;
            while(!final){
                string t=s;
                reverse(t.begin(),t.end());
                v.push_back(stoll(s+t));
                sinh();
            }
        }
        sort(v.begin(),v.end());
          int m; cin>>m;
          for(int i=0;i<m;i++){
            cout<<v[i]<<" ";
          }
          cout<<endl;
          v.clear();
    }
}