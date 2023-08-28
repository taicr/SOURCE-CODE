#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int A[100005];
int main() {
    run();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        map<ll ,ll > m;
        for (int i = 0; i < n; i++) {
          cin>>A[i];
            m[A[i]]++;
        }
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            ll j = k - A[i];
            if (m.find(j) != m.end()) {
                cnt += m[j];
                if (j== A[i]) {
                    cnt--; 
                }
            }
        }

        cout << cnt / 2 << endl; 

        m.clear();
    }
    return 0;
}
