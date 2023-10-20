/* 
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là kiểm tra xem có tồn tại mảng con có tổng bằng 0 hay không,
 nếu tồn tại mảng con như vậy bạn in ra 1. Nếu không tồn tại dãy con có tổng bằng 0 thì in ra -1.

Input Format

Dòng thứ nhất gồm N; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

Output Format

In ra đáp án của bài toán.
*/
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main() { 
   int n;
   cin>>n;
   int a[n];

   map<ll,ll> mp;
   bool check=false;
   ll sum=0;
   mp[0]=0;
   for(int i=1;i<=n;i++){
    cin>>a[i];
    sum+=a[i];
    if(mp.count(sum) ){
        check=true;
        break;
    }
     mp[sum]=i;

   }
   if(!check){
    cout<<-1;
    return 0;
   }
   cout<<1;


}
