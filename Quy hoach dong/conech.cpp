#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int ech(int i){
    int f[52];
    f[1]=1;
    f[2]=2;
    f[3]=4;
    for(int i=4;i<=50;i++){
        f[i]=f[i-1]+f[i-2]+f[i-3];
    }
    return f[i];
}
int main(){

        int n;
        cin>>n;
        cout<<ech(n)<<endl;
    
}