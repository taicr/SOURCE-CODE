#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    string s;
    int n;
    stack<int> st;
    while(cin>>s){
       if(s =="push") { 
        cin>>n;
        st.push(n);
       }
       else if(s=="pop") st.pop();
       else if(s=="show"){
          if(st.size()==0){
            cout<<"empty"<<endl;
            continue;
          }
          vector<int> v;
            while(st.size()>0){
              v.push_back(st.top());
              st.pop();
            }
            reverse(v.begin(),v.end());
            for(auto x:v){
                cout<<x<<" ";
                st.push(x);
            }
            cout<<endl;
       }
    }
}