/*
Cho mảng A[] gồm N phần tử,
 nhiệm vụ của bạn là tính tổng lớn nhất của dãy con trong mảng với một điều kiện đó là trong dãy 
 con này không được có 2 phần tử nằm liền kề nhau.

*/
#include<bits/stdc++.h>

using namespace std;
int a[1000005];
int f[1000005];

int main() { 
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin >> a[i];
    f[0]=a[0];
    f[1]=max(a[0],a[1]);
    for(int i=2; i <= n ;i++) { 
        f[i]=max(a[i]+f[i-2],f[i-1]);
    }
    cout<<f[n];
}
