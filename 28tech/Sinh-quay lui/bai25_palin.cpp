#include<bits/stdc++.h>
using namespace std;

#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

string s;
vector<string> tmp;
vector<vector<string>> res; 
bool check(string str) {
    int l = 0, r = str.size() - 1;
    while (l < r) {
        if (str[l] != str[r]) return false;
        l++;
        r--;
    }
    return true;
}

void Try(int i) {
    if (i == s.size()) {
        res.push_back(tmp);
        return;
    }
    for (int j = i; j < s.size(); j++) {
         string sub =s.substr(i,j-i+1);
        if (check(sub)) {
            tmp.push_back(sub);
            Try(j + 1);
            tmp.pop_back();
        }
    }
}

int main() {
    run();
    cin >> s;
    Try(0);
    for (auto x : res) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
