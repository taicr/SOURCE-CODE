#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int n,k,s;
int a[100],cnt=0;
void Try(int i){
    for(int j=a[i-1]+1;j<=n-i+k;j++){
        a[i]=j;
        if(i==k) {
            int sum=0;
            for(int i=1;i<=k;i++){
                sum+=a[i];
            }
            if(sum==s) cnt++;
        }
        else Try(i+1);
    }
}
int main(){
    run();
    while(1){
        cin>>n >>k >>s;
        if(n==0 && k==0 && s==0) break;
        Try(1);
        cout<<cnt<<endl;
        cnt=0;
    }
}