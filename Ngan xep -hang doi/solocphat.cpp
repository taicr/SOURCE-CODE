#include<bits/stdc++.h>
using namespace std;

void check(string& s, int c, int n) {
    if (c == n / 2) {
        string t = s;
        reverse(t.begin(), t.end());
        cout << s + t << " ";
        return;
    }
    
    // Thêm bit 0
    s[c] = '0';
    check(s, c + 1, n);
    
    // Thêm bit 1
    s[c] = '1';
    check(s, c + 1, n);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
       cin >> n;
        string s(n / 2, '0');
        check(s, 0, n);
        cout<<endl;
    }
    }
    

