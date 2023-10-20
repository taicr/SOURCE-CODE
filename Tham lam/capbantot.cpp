#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
 string s[300005];
int main(){
    run();
    int n,k;
    cin>>n>>k;
   vector<int> v;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        int xx=s[i].size();
        v.push_back(xx);
    }
    int i=1,dem=0;
    while(i<=n){
        for(int j=i+1;j<i+k;j++){
            if(v[i]==v[j]) dem++;
        }
        i++;
    }
    cout<<dem;
}