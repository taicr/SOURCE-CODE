/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define S second
#define F first

int main()
{
    run();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin.ignore();
        string s, x;
        getline(cin, s);
        stringstream ss(s);
        vector<string> vs;
        while(ss >> x) vs.pb(x);
        for(int i = 0; i < vs.size(); ++i)
        {
            vs[i][0] = toupper(vs[i][0]);
            for(int j = 1; j < vs[i].length(); ++j) vs[i][j] = tolower(vs[i][j]);
        }
        if(n == 1)
        {
            cout << vs[vs.size() - 1] << ' ';
            vs.pop_back();
            for(auto i : vs) cout << i << ' ';
        }
        else
        {
            for(int i = 1; i < vs.size(); ++i) cout << vs[i] << ' ';
            cout << vs[0];
        }
        cout << endl;
    }
    return 0;
}