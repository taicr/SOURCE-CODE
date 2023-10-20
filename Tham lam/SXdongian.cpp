/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
run();
 int n;
 cin>>n;
 vector<pair<int,int>> v(n);
 for(auto i=0;i<n;i++) {
    cin>>v[i].first;
    v[i].second=i;
 }
 sort(v.begin(),v.end());
 int cnt=1,ans=1;
 for(auto i=0;i<n-1;i++){
    if(v[i].second<v[i+1].second) {
        cnt++;
        ans=max(ans,cnt);
    }
    else cnt=1;
 }
 cout<<n-ans;


}
