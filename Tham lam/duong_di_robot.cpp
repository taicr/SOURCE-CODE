#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define s second
#define f first
pair<int,int> g={0,1},l={-1,0},r={1,0},b={0,-1};
pair<int,int> robot={0,0};
void left(){
    robot.f+=l.f;robot.s+=l.s;
    pair<int,int> g1=g,l1=l,r1=r,b1=b;
    g=l1,l=b1,r=g1,b=r1;
}
void right(){
    robot.f+=r.f;robot.s+=r.s;
    pair<int,int> g1=g,l1=l,r1=r,b1=b;
    g=r1,l=g1,r=b1,b=l1;

}
void down(){
    robot.f+=b.f;robot.s+=b.s;
    pair<int,int> g1=g,l1=l,r1=r,b1=b;
    swap(g,b);swap(r,l);
}
void up(){
    robot.f+=g.f;robot.s+=g.s;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0;i<n;i++){
      if(s[i]=='G') up();
      else if(s[i]=='L') left();
      else if(s[i]=='R') right();
      else down();
    }
    cout<<robot.f<<' '<<robot.s<<endl;
    return 0;
    
}