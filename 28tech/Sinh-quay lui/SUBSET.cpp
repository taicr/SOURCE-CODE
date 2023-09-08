#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
vector<int> tmp;
vector<vector<int>> res;
int n,check=0,tong=0;
int a[1000];
void Try(int i,int sum){
    if(res.size()==2){
        check=1;
        return ;
    }
    for(int j=i;j<n;j++){
        sum+=a[j];
        tmp.push_back(a[j]);
        if(sum==tong){
            res.push_back(tmp);
            Try(j+1,0);
        }
        else if(sum<tong) Try(j+1,sum);
        sum-=a[j];
        tmp.pop_back();
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        tong+=a[i];

    }
    if(tong%2!=0) {
        cout<<"0";
        return 0;
    }
    tong/=2;
    Try(0,0);
    cout<<check;
}