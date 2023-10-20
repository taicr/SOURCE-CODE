#include<bits/stdc++.h>

using namespace std;

int main() { 
   int n;
   cin >> n;
   int cnt = 0;
   vector<int> a(n + 1);
   
   for (int i = 1; i <= n; i++) cin >> a[i];
   
   int i = 1;
   while (true) {
      cnt++;
      if (a[i] == 2) {
         cout << cnt;
         return 0;
      }
      if (a[i] == 0) {
         cout << -1;
         return 0;
      }
      int next_i = a[i];
      a[i] = 0;
      i = next_i;
   }
}
