
#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    return a.length() > b.length();
}
void solve() {
    int n; cin >> n;
    vector<string> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end(), cmp);

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] == a[j]) {
                ans += 2;
                continue;
            }
            if (a[i].find(a[j]) != -1) {
                ans++;
            }
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        TestCase();
        cout << "\n";
    return 0;
}