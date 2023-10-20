/* 
/* 
Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy tìm số lớn nhất xuất hiện trong xâu. 
Ví dụ S = "abc123bba567ajsj50kkf099" thì số lớn nhất xuất hiện trong xâu là số 567, 
chú ý trong trường hợp một số có các số 0 đứng trước thì ta loại bỏ các số 0 ở đầu,
 trong ví dụ số 099 ta tính là số 99, 000 ta tính là số 0.

Input Format

Một dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra số lớn nhất xuất hiện trong xâu, dữ liệu đảm bảo có ít nhất 1 số xuất hiện trong xâu.
*/
#include<bits/stdc++.h>

using namespace std;

int main() { 
  string s;
  cin>>s;
  int sum=0;
  int res=0;
  for(int i=0;i<s.size();i++){
     if(isdigit(s[i])) {
        sum=sum*10+s[i]-'0';
     }
     else{
        // cout<<sum<<" ";
        res=max(res,sum);
        sum=0;
     }
  }
//   cout<<sum<<"\n";
  res=max(res,sum);
  cout<<res;

}
