#include<bits/stdc++.h>
using namespace std;

int F[1005];
int n, a[1005];

int summax(int a[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        F[i] = a[i];
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) {
                F[i] = max(F[i], F[j] + a[i]);
            }
        }
        res = max(res, F[i]);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << summax(a, n) << endl;
    }
    return 0;
}

