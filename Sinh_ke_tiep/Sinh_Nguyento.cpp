#include <bits/stdc++.h>
using namespace std;

int check = 0, n;
int a[1600],b[1600];
vector<string> v;
string tmp="";
int isPrime(int x) {

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return 0;
    }
    return x>1;
}

void ktao() {
    for (int i = 1; i <= n; i++) {
       a[i]=0;
    }
}
void sinh(){
	int i = n ;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) check = 1;
    else {
        a[i] = 1;
        int sum=0;
        for (int i = 1; i <= n; i++) {
            if (a[i] == 1){
            	sum+=b[i];
               tmp+=to_string(b[i])+" ";
			}
              
        }
          if (isPrime(sum) && tmp!="") {
            v.push_back(tmp);
          }
          tmp = "";
    }

}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        sort(b+1,b + n+1, greater<int>());
        ktao();
        check=0;
        while (!check) {
        sinh();
       }
        for (auto x : v) {
            cout << x << endl;
        }
        v.clear();
        
    }
    return 0;
}