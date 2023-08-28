#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
ll res_max=0,res_min=0;
/* int main(){
    int n;
    cin>>n;
    int cnt=0;
    int a[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
   //138=100+20+10+5+2+1; // 10500=1000*10+500
    for(int i=9;i>=0;i--){
       if(n>=a[i]){
        cnt+=n/a[i];
        n%=a[i];
       }
    }
    cout<<cnt;
}
*/
ll solve(string a){
    res_max=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='5') res_max=res_max*10+6;
        else res_max=res_max*10+(a[i]-'0');
    }
    return res_max;
}
ll solve2(string a){
    res_min=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='6' ) res_min=res_min*10+5;
        else res_min=res_min*10+(a[i]-'0');
    }
    return res_min;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<solve(s1)+solve(s2)<<" ";
    cout<<solve2(s1)+solve2(s2);
    

}
