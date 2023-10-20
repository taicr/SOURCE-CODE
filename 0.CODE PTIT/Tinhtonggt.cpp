/* */
#include <bits/stdc++.h>

using namespace std;
#define run()                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2)
#define pb push_back
 int check(string s){
     int l=0,r=s.size()-1;
     while(l<r){
        if(s[l]!=s[r]) return 0;
        l++;
        r--;
     }
     return 1;
 }
 int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 }