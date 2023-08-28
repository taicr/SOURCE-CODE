#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int tinh(string s){
    stack<int> st;
    int kq=0;
    st.push(-1);
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        else{
            st.pop();
            if(st.size()>0){
                kq=max(kq,i-st.top());
            }
            else st.push(i);
        }       
    }
    return kq;
}
int main(){
 int t;
 cin>>t;
 while(t--){
    string s;
    cin>>s;
    cout<<tinh(s)<<endl;
 }   
}