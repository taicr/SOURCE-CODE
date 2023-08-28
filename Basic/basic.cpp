#include <bits/stdc++.h>

using namespace std;
#define run()                        \
  ios_base ::sync_with_stdio(false); \
  cin.tie(NULL);                     \
  cout.tie(NULL);
int a[100000];
#define ll long long
int check(int n){
  if(n%2==0) return 1;
  return 0;
}
bool cmp(int x,int y){
   if(check(x)==check(y)) return x<y;
   else return check(x)<check(y); 
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n,cmp);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  
}