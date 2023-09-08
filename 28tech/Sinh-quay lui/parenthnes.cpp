#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
bool check(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i] == '[' || s[i] =='(' || s[i]=='{') st.push(s[i]);
        else {
            if(st.empty() || st.top()=='(' && s[i]!=')' || st.top()=='[' && s[i]!=']' || st.top()=='{' && s[i]!='}')
            return false;
            st.pop();
        }
    }
    return st.empty();
}
int n;
vector<string > v;
char f[]={'(', ')' , '[' ,']' , '{' ,'}'};

void Try(string s){
        for(int j=0;j<6;j++){
            s+=f[j];
        if(s.size()==n){
            if(check(s)) v.push_back(s);
        }
        else Try(s);
        s.pop_back();
    }
}
int main(){
    cin>>n;
    if(n%2!=0) cout<<"NOT FOUND";
    else {
        Try("");
        for(auto x:v){
            cout<<x<<" ";
        }

    }

}