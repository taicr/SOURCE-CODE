#include<bits/stdc++.h>
using namespace std;

#define rin ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int n,a[100];
bool check=false;
int checkk(int a[],int n){
    if(a[0]!=8 || a[n-1]!=6) return 0;
    int cnt8=0,cnt6=0;
    for(int i=0;i<n;i++){
        if(a[i]==8){
            cnt8++;
            cnt6=0;
        }
        else {
            cnt6++;
            cnt8=0;        
        }
    if(cnt8>1 || cnt6>3) return 0;    
    }
    return 1;

}
void ktao(){
    for(int i=0;i<n;i++){
        a[i]=6;
    }
}
void sinh(){
    int i=n-1;
    while(i>=0 && a[i]==8){
        a[i]=6;
        i--;
    }
    if(i<0) check=true;
    else {
        a[i]=8;
        if(checkk(a,n)){
            for(int i=0;i<n;i++){
                cout<<a[i];
            }
            cout<<endl;
        }
    }
}
int main(){
    cin>>n;
    ktao();
    while(!check){
        sinh();
    }
}