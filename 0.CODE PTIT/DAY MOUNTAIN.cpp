/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int check1(int a[],int n,int l,int r){
    int tmp=*max_element(a+l,a+r+1);
    int ans=0;
    for(int i=l;i<=r;i++){
        if(tmp==a[i]) {
            ans=i;
            // cout<<i<<endl;
            break;
        }
    }
    for(int i=l;i<ans;i++){
      if(a[i]>a[i+1]) return 0;
    }
    for(int i=ans;i<r;i++){
        if(a[i]<a[i+1]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int l,r; 
        cin>>l>>r;
        if(check1(a,n,l,r)) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}