#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main()
{
    fast
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int ok=1;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[') st.push(s[i]);
            else if(s[i]==')' || s[i]==']'){
                if (st.empty() || ((s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '['))){
                    ok=0;
                    break;
                }
                if((s[i]==')' && st.top()=='(' ) || s[i]==']' && st.top()=='[')
                st.pop();
                else {
                    ok=0;
                    break;
                }
            }
        }
        if(!st.empty()) ok=0;
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}