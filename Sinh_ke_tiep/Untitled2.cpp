#include<bits/stdc++.h>
using namespace std;
int n;
bool check=false;
vector<string> s;
vector<string> a;
void sinh(){
    int i=n-1;
   while(i>=0 && a[i]>a[i+1]) i--;
   if(i<0) check=true;                               //1235415151054
   else {
     int j=n-1;
     while(a[i]>a[j]) j--;
     swap(a[i],a[j]);
     int l=i+1,r=a.size()-1;

   sort(a.begin()+i+1,a.end());
   }
}
int main(){
    int m;
    cin>>m;
    
    check=false;
    for(int i=0;i<m;i++){
        string S;
        cin>>S;
        s.push_back(S);
    }
    string b;
    cin>>b;
     for(int i=0;i<m;i++){
        if(s[i]!=b) a.push_back(s[i]);
     }
    sort(a.begin(),a.end());
     n=a.size();
    while(!check){
      for(int i=0;i<a.size();i++) cout<<a[i] <<" ";
     cout<<b<<endl; 
     sinh();

    }
}