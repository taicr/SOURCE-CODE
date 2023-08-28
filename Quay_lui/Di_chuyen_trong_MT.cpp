#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m, 0));

  
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 && j == 0){
                dp[i][j] = a[i][j];
            } else if(i == 0){
                dp[i][j] = dp[i][j - 1] + a[i][j];
            } else if(j == 0){
                dp[i][j] = dp[i - 1][j] + a[i][j];
            } else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
            }
        }
    }

    cout << dp[n - 1][m - 1] << endl;

    return 0;
}
