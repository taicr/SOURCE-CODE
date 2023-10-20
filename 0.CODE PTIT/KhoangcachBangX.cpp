/* */
#include <bits/stdc++.h>

using namespace std;
#define run()                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#define ll long long

int main()
{    
    run();
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int check = 0;
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=1;
        }
        sort(a,a+n);
        auto it= lower_bound(a,a+n,x);
        int pos=it-a;
        for (int i = pos; i < n; i++)
        { 
            if(mp.count(a[i]-x)){
                check=1;
                break;
            }
        }
        if (!check)
            cout << -1;
        else
            cout << 1;
        cout << endl;
    }
}
