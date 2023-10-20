/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
bool check(int n){
   int c=0,l=0;
   while(n){
      if((n%10)%2==0) c++;
      else l++;
      n/=10;
   }
   return c==l;
}
int main() { 
  int n;
  cin>>n;
  int a=pow(10,n-1);
  int b=pow(10,n)-1;
  int cnt=0;
  for(int i=a;i<=b;i++){
    if(check(i)) {
      cout<<i<<" ";
      cnt++;
    }
    if(cnt==10){
      cnt=0;
      cout<<endl;
    }

  }

}
