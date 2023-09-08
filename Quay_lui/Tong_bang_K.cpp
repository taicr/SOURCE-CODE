#include<bits/stdc++.h>
using namespace std;
int a[100],x[100];
int n,X;
bool check=false;

void Try(int i,int sum,int pos ){
    for(int j=pos;j<=n;j++){
        x[i]=a[j];
        sum+=a[j];
        if(sum==X){
            cout<<"[";
            for(int j=1;j<=i;j++){
                cout<<x[j];
                if(j==i) cout<<"]";
                else cout<<" ";
            }
            check=true;
        }
        else if(sum<X) Try(i+1,sum,j);
        sum-=a[j];
    }
}
int main(){

    x[0]=0;
  
        cin >>n >>X; 
        check=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
         Try(1,0,1);
         if(!check) cout<<"-1\n";
         cout<<endl;
}