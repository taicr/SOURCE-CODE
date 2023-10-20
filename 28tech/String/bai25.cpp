/* 
Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất 
có m chữ số và tổng chữ số bằng s.

Một dòng gồm 2 số m và s
Constraints
1 ≤ m ≤ 100;  0 ≤ s ≤ 900
*/
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
    int m,s;
    cin>>m>>s;
    int sum=s;
    vector<char> v(m,'0');
    if(9*m<s  || (m>1 && s==0)){
        cout<<"NOT FOUND";
        return 0;
    }
    for(int i=v.size()-1;i>=0;i--){
        if(s>=9){
            v[i]='9';
            s-=9;
        }
        else if(s<9){
            if(i==0) {
                v[i]=s+'0';
                break;
            }
            else {
                v[0]='1';
                v[i]=s-1+'0';
             
                break;  
            }
        }
    }
    for(auto x :v) cout<<x;
    cout<<endl;
     vector<char> v1(m,'0');
     for(int i=0;i<v1.size();i++){
        if(sum>=9){
            v1[i]='9';
            sum-=9;
        }
        else if(sum<9){
                v1[i]=sum+'0';
                break;
            }
            
        }
         for(auto y:v1) cout<<y;
     }
    
