#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
 string s[300000];
int main(){
    run();
    int n,k;
    cin>>n>>k;
   
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }

    int i=1,dem=0;
    while(i<=n){
        for(int j=i+1;j<=i+k;j++){
            if(s[i].size()==s[j].size()) dem++;
        }
        i++;
    }
    cout<<dem;
}