#include<bits/stdc++.h>
using namespace std;
string c;
char d;
int n,final=0,check=0;
void ktao(){
    c=string(n,'A');
}
void sinh(){
    int i=n-1;
    while(i>=0 && c[i]==d ){
       i--;
    }
    if(i<0) final=1;
    else {
        c[i]++;
        for(int j=i+1;j<n;j++){
            c[j]=c[i];
        }
    }
}

int main(){
    cin>>d >>n;
    ktao();
    while(!final){
        cout<<c<<endl;
        sinh();
    }
}