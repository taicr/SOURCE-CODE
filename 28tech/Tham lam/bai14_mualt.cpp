#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int n,s,m;
    cin>>n>>s>>m;
    int max_eat=s*m;
    int days_neces= s-s/7;
    int max_days=days_neces*n;
    if(max_days<max_eat){
        cout<<"-1";
        return 0;
    }
    int res_nguyen=max_eat/n;
    double res_du=(1.0)*max_eat/n;
    if(res_du>res_nguyen) res_nguyen+=1;
    cout<<res_nguyen;

   
}