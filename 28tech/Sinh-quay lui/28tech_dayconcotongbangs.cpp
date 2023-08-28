#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int n,k,s;
vector<int > res;
vector<vector<int>> kq;
void Try(int i,int sum){
    for(int j=i;j<=n;j++){
        sum+=j;
        res.push_back(j);
        if(sum==s && res.size()==k){
           kq.push_back(res);
        }
        else if(sum<s && res.size()<k){
            Try(j+1,sum);
        }
        sum-=j;
        res.pop_back();
    }
}
int main(){
    cin>>n>>k>>s;
    Try(1,0);
     for(auto x : kq ){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
     }
    }