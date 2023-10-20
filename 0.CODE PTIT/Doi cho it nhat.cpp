#include<bits/stdc++.h>
using namespace std;

#define run() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int search_idx(int a[], int val, int f, int n){
    for(int i=f; i<n; i++){
        if(a[i]==val) return i;
    }
    return -1;
}
int main() { 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int res = 0;
        for (int i = 0; i < n; i++) {
                int x = search_idx(a,b[i],i,n); 
                if ( x!=i) {
                   swap(a[x],a[i]);
                    res++;
                
               }
        }
        cout << res << endl;
    }
    return 0;
}
