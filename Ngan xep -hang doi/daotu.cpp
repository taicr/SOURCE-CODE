#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    run();
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char > st;
        for(char x:s){
            if(x!=' ') st.push(x);
            else {
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                cout<<" ";
            }
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}