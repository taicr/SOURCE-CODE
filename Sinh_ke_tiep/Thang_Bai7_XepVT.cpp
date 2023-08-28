#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int n,check=0;
set<char> S;
vector<char> a;
void sinh(){
    int i=n-2;
    while(i>=0 && a[i]>a[i+1]) i--;
    if(i<0) check=1;
    else {
        int j=n-1;
        while(a[i]>a[j] ) j--;
        swap(a[i],a[j]);
        sort(a.begin()+i+1,a.end());
    }
}
int main(){
    faster(); 
    char s[100];
    for(int i=0;i<s.size();i++){
        cin>>s[i];
        S.insert(s[i]);
    }
   
    for(char x : S) a.push_back(x);
    
     n=a.size();
    check=0;
    while(!check){
        for(int i=0;i<a.size();i++){
            cout<<a[i];
        }
        cout<<endl;
        sinh();

    } 
   
}