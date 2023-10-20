/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define S second
#define F first
int a[1000],cnt=0,n,s;
vi v;
void Try(int i,int sum){
   for(int j=i;j<n;j++){
    sum+=a[j];
    cnt++;
    if(sum==s){
        v.pb(cnt);
        return ;
    }
    else if( sum<s) Try(j+1,sum);
    sum-=a[j];
    cnt-=1;
   }
}
int main() { 
   cin>>n>>s;
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   sort(a,a+n,greater<int>());
   Try(0,0);
   if(v.size()==0){
    cout<<"-1"<<endl;
    return 0;
   }
   cout<<*min_element(v.begin(),v.end()); 
}
