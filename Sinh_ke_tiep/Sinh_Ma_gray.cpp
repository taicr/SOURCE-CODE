
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    
    vector<string> a;
    a.push_back("0");
    a.push_back("1");

    for (int i = 2; i <= n; ++i) {
        int l = a.size();
        for (int i = l - 1; i >= 0; --i) {
            a.push_back(a[i]);
        }
        for (int i = 0; i < l; ++i) {
            a[i] = '0' + a[i];
        }
        for (int i = l; i < a.size(); ++i) {
            a[i] = '1' + a[i];
        }
    }

    for (string i : a) cout << i << " ";
}

int main() {

    int T;cin>>T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}