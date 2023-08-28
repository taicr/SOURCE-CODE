#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int S,P,N;
vector<int > prime={};
void snt(){
  vector<int > s(300,1);
  s[0]=0;
  s[1]=0;
   for(int i=2;i<=sqrt(300);i++){
    if(s[i]){
        for(int j=i*i;j<=300;j+=i){
            s[j]=0;
        }
    }
   }
       for (int i = 2; i <= 300; i++) {
        if (s[i]) prime.push_back(i);
    }
   
}
vector<int > res={};
vector<vector<int>> cnt={};
void Try(int i,int sum){
    for(int j=i;j<prime.size();j++){
        sum+=prime[j];
        res.push_back(prime[j]);
        if(sum==S && res.size()==N){
            cnt.push_back(res);
            
        }
        else if(sum<S && res.size()<N){
            Try(j+1,sum);

        }
        sum-=prime[j];
        res.pop_back();
        
    }
}
int main(){
  
    int t;
    cin>>t;
    snt();
    while(t--){
        cin>>  N >> P >> S;
        int start=-1;
        for(int i=0;i<prime.size();i++){
            if(prime[i]>P){
                start=i;
                break;
            }
        }
        Try(start,0);
        cout<<cnt.size()<<endl;
        for( auto x:cnt){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<endl;
        }
        res.clear();
        cnt.clear();
    }
}
