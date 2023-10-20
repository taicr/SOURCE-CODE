/* 
Cho trước các truy vấn tổng từ chỉ số L tới chỉ R, bây giờ bạn đã biết trước tất cả Q truy vấn bạn
 được phép thay đổi thứ tự các phần tử trong mảng 1 lần duy nhất trước khi thực hiện các truy vấn.
  Hãy thay đổi mảng sao cho tổng các truy vấn trên đoạn đạt được giá trị lớn nhất. Một cách rõ ràng hơn, 
bạn hãy tính tổng mọi mảng con trong từng truy vấn sau đó cộng lại để đạt được giá trị lớn nhất.
Constraints
Dòng 1 là N và Q
Dòng 2 là N số trong mảng A[]
Q dòng tiếp theo, mỗi dòng là 2 chỉ số L, R của truy vấn
1<=N,Q<=2.10^5

1<=A[i]<=2.10^5

1<=L<=R<=N

Output Format

In ra tổng lớn nhất có thể đạt được.

Sample Input 0

6 2
5 2 5 3 5 1 
2 5
2 4
Sample Output 0

33
Explanation 0

Thay đổi mảng A[] thành : {1, 5, 5, 5, 3, 2} 
khi đó truy vấn từ 2 tới 5 là 18 và truy vấn từ 2 tới 4 là 15 nên tổng lớn nhất là 33.
*/
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
   int n,q;
   cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int d[n+2]={0};
    while(q--){
        int l,r;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            d[i]+=1;
        }
    }
        ll ans=0;
        sort(d+1,d+n+1,greater<int>());
        sort(a+1,a+n+1,greater<int>());
        for(int i=1;i<=n;i++) ans+=a[i]*d[i];
        cout<<ans;


}
