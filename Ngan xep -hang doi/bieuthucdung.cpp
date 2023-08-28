#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int res;
string s;
int solve(string s){
    int res=0;
    stack<char> st;
    for(char x:s){
        if(x=='('){
          st.push(x);
           res=max(res,(int) st.size());
        }
       else if( x==')'){
           if(st.empty() || st.top()=='(') return -1;
           st.pop();
       }
    }
    if(!st.empty()) return -1;
    return res;
}



int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s; 
        getline(cin,s);
         if(solve(s)==-1) cout<<"-1"<<endl;
        else cout<<res<<endl;

    }
}