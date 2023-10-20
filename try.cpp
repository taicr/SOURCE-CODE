/* */
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   string s;
   cin>>s;
   ll n=s.size();
   int f[n+1]={0};
   ll sum=0;
   s="0"+s;
   for(int i=1;i<=n;i++){
    f[i]=f[i-1]*10 + i *(s[i]-'0');
     sum+=f[i];
   }
   cout<<sum;

}