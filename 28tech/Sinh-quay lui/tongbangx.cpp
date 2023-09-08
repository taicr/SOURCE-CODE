#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int a[100];
int n,x;
bool check=false;
vector<int> tmp;
vector<vector<int>> res;
void Try( int i, int sum ){
    for(int j = i ; j < n;j++ ){
           sum += a[j];
           tmp.push_back(a[j]);
           if(sum == x){
               res.push_back(tmp);
               check=true;
           }
           else if(sum < x) Try(j,sum);
           sum -= a[j] ;
           tmp.pop_back();
    }
}
int main(){
   check=0;
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    Try(0,0);
    if(!check) {
        cout<<"-1";
        return 0;
    }
    cout<<res.size()<<endl;
 for(auto x : res){
    	cout << '{';
    for(int i=0;i<x.size();i++){
        if(i<x.size()-1) cout<<x[i]<<" ";
        else cout<<x[i]<<"}";
    }
		cout << endl;
	}
}