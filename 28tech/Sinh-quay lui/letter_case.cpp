#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
string str;

int final=0;
void sinh(){
    int i=str.size()-1;
    while(i>=0 && str[i]==toupper(str[i])) {
        str[i]=tolower(str[i]);
        i--;
    }
    if(i<0) final=1;
    else {
      str[i]=toupper(str[i]);
    }
}
int main(){
    cin>>str;
    for(int i=0;i<str.size();i++){
        str[i]=tolower(str[i]);
    }
    vector<string> v;
    final=0;
    while(!final){
      v.push_back(str);
      sinh();
    }
    sort(v.rbegin(),v.rend(),greater<string>());
    for(auto x:v){
        cout<<x<<endl;
    }
}