#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    vector<int> v(b + 1, 1);

    for (int i = 2; i <= b; i++) {
        for (int j = i * 2; j <= b; j += i) {
           v[j] += i;
        }
    }

    int count = 0;
    for (int i = a; i <= b; i++) {
        if (v[i] > i) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
