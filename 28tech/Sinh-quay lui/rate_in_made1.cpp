#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int n,a[100][100],visited[100][100];
string s;
int check=false;
vector<string> v;
int cnt=0;
void Try(int i,int j){
    if(i==n && j==n){
        check=true;
        v.push_back(s);
    }
    //Di xuong 
    if(i+1<=n && a[i+1][j]==1 && !visited[i+1][j] ){
        visited[i][j]=true;
        Try(i+1,j,s+'D');
        visited[i][j]=false;
    }
    // Di sang phai
    if(j+1<=n && a[i][j+1]==1 && !visited[i][j+1]){
        visited[i][j]=true;
        Try(i,j+1,s+'R');
        visited[i][j]=false;
    }
    // Di sang trai 
    if(j-1>=1 && a[i][j-1]==1 && !visited[i][j-1]){
       visited[i][j]=true;
        Try(i,j-1,s+'L');
        visited[i][j]=false;
    }
    // di len 
    if(i-1>=1 && a[i-1][j]==1 && !visited[i-1][j]){
        visited[i][j]=true;
        Try(i-1,j,s+'U');
        visited[i][j]=false;
    }
    

}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    Try(1,1,"");
    for(auto x:v){
        cout<<x<<endl;
    }
    if(!check) cout<<"-1";
}