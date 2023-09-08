#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int n;
int a[1000]={0};
vector<int> tmp;
vector<vector<int>> res;
void Try(int i) {
    if (tmp.size() == n) {
        res.push_back(tmp);
        return;
    }
    for (int j = 1; j <= n; j++) {
        a[j]=j;
        if (tmp.empty() || abs(a[j] - tmp.back()) > 1 && count(tmp.begin(), tmp.end(), a[j]) == 0) {
            tmp.push_back(a[j]);
            Try(j + 1);
            tmp.pop_back();
        }
    }
}

int main(){
    cin>>n;
    Try(1);
    for(auto x:res){
        for(auto y:x){
            cout<<y;
        }
        cout<<endl;
    }
}