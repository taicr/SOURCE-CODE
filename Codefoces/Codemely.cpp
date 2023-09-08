#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        int x;
        cin >> x;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a,a+n);
		sort(b,b+n,greater<int>());
		int i=0,j=0;
		int check=1;
		while(i<n && j<n){
			if(a[i]+b[j]<=x){
				i++;
				j++;
			}
			else{
				check=0;
				break;
			}
		}
		if(check) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

}
}