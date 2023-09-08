#include<bits/stdc++.h>
using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        } else if (!st.empty() && s[i] == ')' && st.top() == '(') {
            st.pop();
        } else if (s[i] == ')' && (st.empty() || st.top() != '(')) {
            cnt++;
        }
    }
    
    cout << max(cnt, (int)st.size()) << endl;
    return 0;
}
