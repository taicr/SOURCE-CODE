#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        cout<<"Test "<<k<<": ";
         string s; 
         cin>>s;
         stack<int> st;
         for(int i=0;i<=s.size();i++){
            if(s[i]=='D') st.push(i+1);
            else {
                cout<<i+1;
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
            }
         }
        cout<<endl;
    }
}