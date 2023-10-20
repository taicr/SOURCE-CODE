/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
   int n,k,q;
   cin>>n>>k>>q;
   int a[200005]={0};
   while(n--){
      int l,r;
      cin>>l>>r;
      for(int i=l;i<=r;i++){
        a[i]+=1;
      }

   }
   while(q--){
    int x,y;
    cin>>x>>y;
    int cnt=0;
    for(int i=x;i<=y;i++){
        if(a[i]>=k) cnt++;
    }
    cout<<cnt<<endl;
   }

}
