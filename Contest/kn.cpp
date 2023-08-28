#include <bits/stdc++.h>

using namespace std;

#define ll long long
int a[100],n ,k;
bool final = false;
void khoitao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n-k+i )
        i--;
    if(i == 0 ){
        final = true;
    }
    else{
        a[i]++;
        for(int j = i+1;j<=k;j++){
            a[j] = a[j-1] +1;
        }
    }
}

int main()
{
    cin >> n >> k;
	string s[1000];
	for(int i=1;i<=n;i++){
        string s;
        cin>>s;
	}
    khoitao();
	vector<string> res;
    while(!final){
		vector<string> tmp ;
        for (int i = 1; i <= k; i++)
        {
			
			tmp.push_back(s[i]);
        }
		sort(tmp.begin(),tmp.end());
		string output = "";
		for(string x : tmp){
			output+= x + " ";
		}
        res.push_back(output);
        sinh();
    }
	sort(res.begin(),res.end());
	for(auto x : res) cout<<x<<endl;
    return 0;
}