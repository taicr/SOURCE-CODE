#include <bits/stdc++.h>

using namespace std;
#define run()                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#define ll long long
int main()
{
    run();
    int t, x;
    string s;
    cin >> t;
    stack<int> st;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> x;
            st.push(x);
        }
        else if (s == "POP")
        {
            if (st.size() == 0)
                continue;
            else
                st.pop();
        }
        else if (s == "PRINT")
        {
            if (st.size() == 0)
                cout << "NONE" << endl;
            else if (!st.empty())
            {
                cout << st.top() << endl;
            }
        }
    }
}