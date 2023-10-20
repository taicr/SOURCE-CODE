/* 
Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm mảng con liên tiếp ngắn nhất có tổng 
các phần tử bằng K. Ví dụ với mảng A[] = {1, 1, 3, 1, 2, 4, 1, 1, 2} và K = 6 thì mảng con ngắn nhất 
có tổng bằng 6 là 2.

Input Format

Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; -0<=A[i]<=10^6;

Output Format

In ra độ dài của mảng con ngắn nhất đó hoặc in ra -1 nếu không tồn tại mảng con có tổng bằng K
*/ // Số âm không áp dụng đc 2 con trỏ , dùng mảng cộng dồn.
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
  int n,k;
  cin>>n>>k;
  int a[n+1];
  ll sum=0,res=1e9;
 
  map <ll,ll> mp;
  mp[0]=0;
  for(int i=1;i<=n;i++){
     cin>>a[i];
     sum+=a[i];
     if(mp.count(sum-k)){
        res=min(res, i - mp[sum-k]);
     }
     mp[sum]=i;

  }
  if(res==1e9){
   cout<<-1;
   return 0;
  }
  cout<<res;

}
