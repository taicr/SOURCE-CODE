#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int a[500],k,n;
vector<int > tmp;
vector<vector<int>> res;
void Try(int i,int sum){
    for(int j=i;j<=n;j++){
        sum+=a[j];
        tmp.push_back(a[j]);
        if(sum==k){
           res.push_back(tmp);
        }
        else if(sum<k){
            Try(j+1,sum);
        }
        sum-=a[j];
        tmp.pop_back();
        
    }

}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    Try(1,0);
      for(auto x:res){
        for(auto y:tmp){
            cout<<y<<" ";
        }
        cout<<endl;
      }
}