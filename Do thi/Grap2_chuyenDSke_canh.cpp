
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
void solve(int i,string s){
    stringstream ss(s);
    string tmp;
    while(ss>>tmp){
        int j=stoi(tmp);
        if(i< j) cout<<i<<" "<<j<<endl;
    }
}
int main() { 
    int n;
    cin>>n;
    scanf("\n");
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        solve(i,s);
    }


}
