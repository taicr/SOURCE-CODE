#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int X[1005], xuoi[1004], nguoc[1005], cot[1005];
int a[1005][1005], sum;
int res;

void Try(int i) {
    for (int j = 1; j <= 8; j++) {
        if (xuoi[i - j + 8] && nguoc[i + j - 1] && cot[j]) {
            X[i] = j;
            xuoi[i - j + 8] = false;
            nguoc[i + j - 1] = false;
            cot[j] = false;
            if (i == 8) {
                int ans = 0;
                for (int k = 1; k <= 8; k++) {
                    ans += a[k][X[k]];
                }
                res = max(ans, res);
            } else {
                Try(i + 1);
            }
            xuoi[i - j + 8] = true;
            nguoc[i + j - 1] = true;
            cot[j] = true;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(xuoi, true, sizeof(xuoi));
        memset(cot, true, sizeof(cot));
        memset(nguoc, true, sizeof(nguoc));
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                cin >> a[i][j];
            }
        }
        sum = 0;
        res = 0;
        Try(1);
        cout << res << endl;
    }
    return 0;
}
