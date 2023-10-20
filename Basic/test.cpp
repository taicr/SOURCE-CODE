#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define S second
#define F first
#define pb push_back
#define pi pair<int, int>
#define vi vector<int>
#define sz size
#define vll vector<ll>
#define in(a) for (auto &x : a) cin >> x
#define all(x) (x).begin(), (x).end()
// mảng 2 chiều lưu độ dài số thỏa mãn 
int f[105][10001];

int main() {
    memset(f, 0, sizeof(f));
    f[0][0] = 0;
    
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 10000; j++) {
            if(i == 0 and j == 0) continue;
            f[i][j] = 1e9;
            for (int k = 1; k <= 9; k++) {
                if (k <= i && j >= k * k && f[i - k][j - k * k] != 1e9) {
                    f[i][j] = min(f[i][j], f[i - k][j - k * k] + 1);
                }
            }
        }
    }
    
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        if (f[a][b] == 1e9 ) {
            cout << -1 << endl;
            continue;
        }
        string res = "";
        
        while (a > 0 && b > 0) { 
            for (int i = 1; i <= 9; i++) {
            	// tìm số bé nhất thỏa mãn
                if (a >= i && b >= i * i && f[a - i][b - i * i] + 1 == f[a][b]) {
                    res += to_string(i);
                    a -= i;
                    b -= i * i;
                    break;
                }
            }
        }
        cout << res << endl;
    }
    
    return 0;
}