#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char a[1005][1005];
int n,m;
void loang(int i,int j){
   a[i][j]='.';
   for(int k=0;k<4;k++){
       int i1=i+dx[k];
       int j1=j+dy[k]; 
     if(a[i1][j1]=='#' && i1>=0 && j1<m && j1>=0 && i1<n ){
        loang(i1,j1);
     }
   }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#') {
                cnt++;
                loang(i,j);
            }
        }
    }
    cout<<cnt<<endl;
}