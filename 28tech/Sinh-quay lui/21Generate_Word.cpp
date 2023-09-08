#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
string s;
int n,m,check=false;
char a[1000][1000];
int visited[1000][1000];
void Try(int i,int j,string str){
   if(str==s){
     check=true;
     return;
   }
   if(i+1<n && !visited[i+1][j]){
       visited[i][j]=true;
       Try(i+1,j,str+a[i+1][j]);
       visited[i][j]=false;
   }
       if(j+1<m  && !visited[i][j+1]){
        visited[i][j]=true;
        Try(i,j+1,str+a[i][j+1]);
        visited[i][j]=false;
    }
    // Di sang trai 
    if(j-1>=0  && !visited[i][j-1]){
       visited[i][j]=true;
        Try(i,j-1,str+a[i][j-1]);
        visited[i][j]=false;
    }
    // di len 
    if(i-1>=0 && !visited[i-1][j]){
        visited[i][j]=true;
        Try(i-1,j,s+a[i-1][j]);
        visited[i][j]=false;
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>s;
    visited[0][0]=true;
    Try(0,0,"");
    if(check==1) cout<<"YES";
    else cout<<"NO"; 

}