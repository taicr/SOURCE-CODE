#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int n;
string check(int s,int n){
    string str(n,'0');
    for(int i=n-1;i>=0;i--){
        if(s>9){
            str[i]='9';
            s-=9;
        }
        else{
            if(i!=0){
                str[0]='1';
                str[i]+=(s-1);
                return str;
            }
            else {
                str[i]+=s;
                return str;
            }
        }
    }
    return str;
}
int main(){
    int s,n;
    cin>>s>>n;
    if(n*9<s || s==0 && n>1 ) cout<<"-1";
    cout<<check(s,n);
}