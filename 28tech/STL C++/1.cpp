#include <bits/stdc++.h>

using namespace std;
#define run()                          \
	ios_base ::sync_with_stdio(false); \
	cin.tie(NULL);                     \
	cout.tie(NULL);
#define ll long long
int a[110000];
int n,x;
void task1(int a[],int n,int x){
	int res=-1;
	for(int i=0;i<n;i++){
        if(a[i]==x){
			res=i;
			cout<<res;
			break;
		}
	}
	if(res==-1) cout<<-1;
}
int task2(int a[],int n,int x){
	int res2=-1;
	for(int i=0;i<n;i++){
		if(a[i]==x && a[i+1]!=x){
			res2=i;
			return res2;
		}
	}
	if(res2==-1) return 0;
}
int main(){
	int n,x;
     int a[n];
	 for(int i=0;i<n;i++) cin>>a[i];
	 task1(a,n,x);
	 
}
