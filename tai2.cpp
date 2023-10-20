#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2)
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define S second
#define F first


int n;
bool check1(string s, char m, char d){

    int cnt=0;
    for(int i=0; i<n; i++){
        if(s[i]!=m&&s[i]!=d){
            s[i]=m;
        }
        if(s[i]==m){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt<0){
            return false;
        }
    }
    return cnt==0;
}

bool check2(string s, char m, char d)
{
    int cnt=0;
    for(int i=0; i<n; i++){
        if(s[i]!=m&&s[i]!=d){
            s[i]=d;
        }
        if(s[i]==m){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt<0){
            return false;
        }
    }
    return cnt==0;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        n=s.size();
        if(s[0]==s[n-1]){
            cout<<"NO\n";
            continue;
        }

        char m, d;
        m=s[0]; d=s[n-1];
        if(check1(s, m, d)||check2(s, m, d)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

}
