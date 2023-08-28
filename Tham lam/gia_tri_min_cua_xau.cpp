#include<bits/stdc++.h>
using namespace std;
#define run() ios_base ::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    run();
    int t;
    cin>>t;
    while(t--){
        priority_queue<int> q;
        map <char ,int > cnt;
        int k;string s;
        cin>>k>>s;
      for(char x: s) cnt[x]++;
        for(auto it :cnt){
               q.push(it.second);
        }
        while(k>0){
            ll top = q.top();
            q.pop();
            top--;
            k--;
            q.push(max(top,(ll)0));
 
        }
        ll ans=0;
        while(!q.empty()){
             ans+= q.top() * q.top();
             q.pop();
        }
        cout<<ans<<endl;

    }
}