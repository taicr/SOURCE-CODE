#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int a[100][100],check=0,ok[100][100];
vector<string> v;
int n;
string s;
void nhap(){
     cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
}
void Try(int i,int j,string s){
    if(i==n && j==n){
        v.push_back(s);
    }
    //Di xuong 
    if(i+1<=n && a[i+1][j]==1 && !ok[i+1][j] ){
        ok[i][j]=true;
        Try(i+1,j,s+'D');
        ok[i][j]=false;
    }
    // Di sang phai
    if(j+1<=n && a[i][j+1]==1 && !ok[i][j+1]){
        ok[i][j]=true;
        Try(i,j+1,s+'R');
        ok[i][j]=false;
    }
    // Di sang trai 
    if(j-1>=1 && a[i][j-1]==1 && !ok[i][j-1]){
        ok[i][j]=true;
        Try(i,j-1,s+'L');
        ok[i][j]=false;
    }
    // di len 
    if(i-1>=1 && a[i-1][j]==1 && !ok[i-1][j]){
        ok[i][j]=true;
        Try(i-1,j,s+'U');
        ok[i][j]=false;
    }
    

}

int main(){
    int t;cin>>t;
    while(t--){
        v.clear();
        nhap();
        s=""; 
        Try(1,1,s);
        if(v.size()==0) cout<<"-1"<<endl;
        else {
            sort(v.begin(),v.end());
            for(auto x:v) cout<<x<<" ";
            
        }
        cout<<endl;
        
    }
}