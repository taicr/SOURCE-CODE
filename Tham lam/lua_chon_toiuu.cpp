#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    run();
    int t;
    cin>>t;
    while(t--) { 
        int n; cin>>n;
        pair<int,int> a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].first>>a[i].second;
        }
        sort(a,a+n,[](pair<int,int> x,pair<int,int> y)->bool{
            return x.second<y.second;
        });
        int final=a[0].second;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(a[i].first>final){
                cnt++;
                final=a[i].second;
            }
        }
        cout<<cnt<<endl;
    }
}