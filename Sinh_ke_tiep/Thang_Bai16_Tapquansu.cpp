#include<bits/stdc++.h>
using namespace std;
int k,n,check=0;
int a[100];
  int dem;
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i) i--;
    if(i==0) {
        for(int j=1;j<=k;j++){
            a[j]=j;
           
        }
    }
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
    
}
int main(){
	cin >>n>>k;
	set<int> se;
	for(int i=1;i<=k;i++){
        cin>>a[i];
        se.insert(a[i]);
    } 
     sinh();
     for(int i=1;i<=k;i++){
     	if(se.count(a[i])==0) dem++;
	 }
      cout<<dem; 
	  }
