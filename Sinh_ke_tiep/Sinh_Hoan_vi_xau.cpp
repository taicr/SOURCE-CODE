#include<bits/stdc++.h>
using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n;
string a;
bool check = false;


void sinh() {
    int i = n - 2;
    while (i >= 0 && a[i] >= a[i + 1]) i--;
    if (i < 0) {
        check = true;
    } else {
        int j = n - 1;
        while (a[i] >= a[j]) j--;
        swap(a[i], a[j]);
        sort(a.begin() + i + 1, a.end());
    }
}

int main() {
	run();
    int t;
    cin >> t;

    while (t--) {
        cin >> a;
        n = a.size();
        
        check = false;

        while (!check) {
            cout<<a;
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}
