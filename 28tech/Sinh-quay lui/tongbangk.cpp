#include<bits/stdc++.h>
using namespace std;
int n , k ;
int a[1001], x[10001];
vector<int> tmp;
vector<vector<int>> res;
void Try( int i, int sum ){
    for(int j = i ; j < n;j++ ){
           sum += a[j];
           tmp.push_back(a[j]);
           if(sum == k){
               res.push_back(tmp);
               //return ;
           }
           else if(sum < k) Try(j+1,sum);
           sum -= a[j] ;
           tmp.pop_back();
    }
}
int main() {
   
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a + n);
    Try(0,0);
    for(auto x : res){
    	cout << '[';
    	for(auto y : x){
    		cout << y ;
    		if(y != *x.rbegin()) cout << " ";
		}
		cout <<']';
		cout << endl;
	}
    return 0;
}