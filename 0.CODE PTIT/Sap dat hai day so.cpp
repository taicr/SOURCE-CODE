#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2)
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define S second
#define F first

int main(){
    run();
    int t;
    cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      int a[n];
      int b[n];
      map<int,int > mp;
      for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
      }
      sort(a,a+n);
    for(int i=0;i<m;i++) {
        cin>>b[i];
    }
    vi res;
    for(int i=0;i<m;i++){
        int tmp=mp[b[i]];
        for(int j=0;j<tmp;j++){
            res.pb(b[i]);
            mp[b[i]]--;
        }
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]]) res.pb(a[i]);
    }
    for(auto x:res) cout<<x<<" ";
    cout<<endl;
    }
      
}