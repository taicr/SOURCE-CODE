#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='(') st.pop();
                else {
                     st.push('(');
                     cnt++;
                }
            }
        }
        cnt+=st.size()/2;
        cout<<cnt<<endl;
    }
}

