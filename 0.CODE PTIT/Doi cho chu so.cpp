/* */
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
void solve(){
    string s;
    cin>>s;
    int i=s.size()-2,j=i+1;
    while(i>=0 && s[i]<s[i+1]) i--;
    if(i<0) cout<<-1<<endl;
    else{
         
            while (s[j] >= s[i]) j--;
            while (s[j] == s[j - 1]) j--;
        swap(s[i], s[j]);
        cout << s << endl;
    }
}
int main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t;
      cin>>t;
      while(t--){
        solve();
      }   
 
}