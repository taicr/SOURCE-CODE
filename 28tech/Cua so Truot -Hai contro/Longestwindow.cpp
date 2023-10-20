/*
Cho xâu kí tự S, Tèo là một người khá kì quặc, anh ta chỉ thích những thứ không trùng lặp. 
Vì thế anh ta yêu cầu bạn tìm ra độ 
dài xâu con dài nhất mà các kí tự trong xâu con đó không có bất cứ một kí tự nào được lặp lại.
 */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
  string s;
  cin>>s;
  int l=0,cnt[256]={0},ans=INT_MIN;
  int r=0;
  while(r<s.size()){
    cnt[s[r]]++;
    if(cnt[s[r]]>1){
        l++;
    }
    else if(cnt[s[r]]==1){
       ans=max(ans,r-l+1);
       r++;
    }
  }
  cout<<ans;

}
