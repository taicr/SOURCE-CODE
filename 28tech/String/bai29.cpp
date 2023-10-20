#include<bits/stdc++.h>
using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define S second
#define F first

int main() { 
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        s+="x";
    ll sum=0,res=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            sum=sum*10+s[i]-'0';
        }
        else {
            res+=sum;
            sum=0;
        }
    }
      cout<<res<<endl;
    }

}
