#include<bits/stdc++.h>

using namespace std;

#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int n, k;
vector<int> primee;
vector<int> tmp;
vector<vector<int>> res;

void prime() {
    vector<int> f(600, 1);
    f[0] = 0;
    f[1] = 0;
    for (int i = 2; i <= sqrt(600); i++) {
        if (f[i]) {
            for (int j = i * i; j <= 600; j += i) {
                f[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 600; i++) {
        if (f[i]) primee.push_back(i);
    }
}

void Try(int i, int sum) {
    for (int j = i; j < n; j++) {
        sum += primee[j];
        tmp.push_back(primee[j]);
        if (sum == n && tmp.size() == k) {
            res.push_back(tmp);
        } else if (sum < n && tmp.size() < k) {
            Try(j + 1, sum);
        }
        sum -= primee[j];
        tmp.pop_back();
    }
}

int main() {
    run();
    cin >> n >> k;
    prime();
    Try(0, 0);
    if (res.size() == 0) {
        cout << "NOT FOUND";
        return 0;
    } else {
        for (auto x : res) {
            for (int i = 0; i < x.size(); i++) {
                if (i != x.size() - 1) cout << x[i] << " " << "+ ";
                else cout << x[i] << endl;
            }
        }
    }
    return 0;
}
