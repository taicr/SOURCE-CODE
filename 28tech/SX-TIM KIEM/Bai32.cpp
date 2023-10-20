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

int main() { 
   int n,m;
   cin>>n>>m;
   int a[n],b[m];
   for(int &x:a) cin>>x;
   for(int &y:b) cin>>y;
   sort(a,a+n);
   sort(b,b+m);
//    for(int i=0;i<n;i++) cout<<a[i]<<" ";
//    for(int i=0;i<m;i++) cout<<b[i]<<" ";
   int i=0,j=0,cnt=0;
   while(i<n && j<m){
     if(abs(a[i]-b[j])<=1) {
        cnt++;
        i++;
        j++;     
     } 
     else if(a[i]-b[j]>1) j++;
     else i++;
   }
   cout<<cnt<<endl;
}
 
