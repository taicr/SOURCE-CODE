#include <bits/stdc++.h>
using namespace std;

int check = 0, n;
int a[100];
int num;
vector<string> v;
   string tmp="";
int isPrime(int num) {

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return n>1;
}

void ktao() {
    for (int i = 1; i <= n; i++) {
       if(i<n) a[i]=0;
       else a[i]=1;
    }
}
void sinh(){
	int i = n ;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0)
        check = 1;
    else {
        a[i] = 1;
}
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        int b[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        sort(b+1, b + n+1, greater<int>());
        ktao();
        check = 0;
        while (!check) {

        for (int i = 1; i <= n; i++) {
            if (a[i] == 1)
               tmp+=to_string(b[i])+" ";
        }
        num=stoi(tmp);
          if (isPrime(num)) {
            v.push_back(tmp);
            tmp = "";
          }
        sinh();
       }
        for (auto x : v) {
            cout << x << endl;
        }
    }
    return 0;
}
