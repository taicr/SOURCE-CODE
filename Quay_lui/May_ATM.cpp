#include <bits/stdc++.h>
using namespace std;

#define run() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int n,s,a[100],b[100];
bool check=false;
int final=0,sum=0;

void sinh(int k){
     int i=k;
    while(i>=1 && b[i]==n-k+i) i--;
    if(i==0) final=1;
    else {
        b[i]++;
        for(int j=i+1;j<=k;j++){
            b[j]=b[j-1]+1;
        }
    }
}
void solve(){
  run();
     cin >> n >> s;
       for (int i=1;i<=n;i++){
         cin>>a[i];
       }
       sort(a+1,a+n+1,greater<int>());
       
       for(int i=1;i<=n;i++){
            final=0;
           for(int j=1;j<=i;j++){
             b[j]=j;
           }
           while(!final){
            sum=0;
              for(int j=1;j<=i;j++){
                   sum+=a[b[j]];
              }
              if(sum==s){
                cout<<i<<endl;
                return;
              }
              sinh(i);
           }

       }
       cout<<"-1"<<endl;
}
int main(){
  run();
    int t;
    cin>>t;
    while(t--){
      solve();
    }
}